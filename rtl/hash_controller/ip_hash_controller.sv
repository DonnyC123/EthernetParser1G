module ip_hash_controller #(
  parameter IP_ADDR_W = 32
) (
  input   logic                 clk,
  input   logic                 rst,
  input   logic                 insert_val_i,
  input   logic                 look_up_val_i,
  input   logic [IP_ADDR_W-1:0] ip_addr_i,
  output  data_valid_if.master  ip_addr_found_if_o
);

  import hash_table_pkg::*;

  parameter PIPE_DEPTH        = 2;
  parameter INSERT_PATH_LEN   = 3;
  parameter KEY_W             = 12;
  parameter NUM_HASH_TABLES   = 4;

  genvar                      hash_idx;
  logic                       en_search;
  logic [KEY_W-1:0]           ip_addr_reduced;
  logic [KEY_W-1:0]           ip_addr_hash_calc           [NUM_HASH_TABLES];
  logic [KEY_W-1:0]           ip_addr_hash_calc_shift_reg [NUM_HASH_TABLES] [PIPE_DEPTH]; 

  logic                       wr_en_hash_table            [NUM_HASH_TABLES];
  
  logic [NUM_HASH_TABLES-1:0] hash_hit;
  logic                       insert_val_shift_reg                          [PIPE_DEPTH];

  hash_query_t                hash_query;

  logic [IP_ADDR_W-1:0]       hash_ip_val;
  logic [IP_ADDR_W-1:0]       ip_addr_shift_reg                             [PIPE_DEPTH]; 

  shift_reg #(
    .DATA_W       (IP_ADDR_W),
    .PIPE_DEPTH   (PIPE_DEPTH),
    .RST_EN       (0)
  ) ip_addr_shift_reg_inst (
    .clk          (clk),
    .rst          (rst),
    .data_i       (ip_addr_i),
    .data_o       (ip_addr_shift_reg)
  );

  xor_reduction #(
    .DIN_W    (IP_ADDR_W),
    .DOUT_W   (KEY_W)
  ) ip_xor_reduction(
    .data_i   (ip_addr_i),
    .data_o   (ip_addr_reduced)
  );
  
  generate 
    for (hash_idx = 0; hash_idx < NUM_HASH_TABLES; hash_idx++) begin : calc_crc_val_gen
      calculate_crc #(
        .DATA_W     (KEY_W),
        .CRC_W      (KEY_W),
        .CRC_POLY   (HASH_CRC_POLY[hash_idx])
      ) calculate_hash_inst (
        .crc_old_i  ('1),
        .data_i     (ip_addr_reduced),
        .crc_new_o  (ip_addr_hash_calc[hash_idx])
      );
    end
  endgenerate

  generate 
    for (hash_idx = 0; hash_idx < NUM_HASH_TABLES; hash_idx++) begin : insert_shift_reg_gen
      data_status_shift_reg #(
        .DATA_W       (KEY_W),
        .STATUS_W     (1),
        .PIPE_DEPTH   (PIPE_DEPTH)
      ) ip_insert_val_shift_reg_inst (
        .clk          (clk),
        .rst          (rst),
        .data_i       (ip_addr_hash_calc[hash_idx]),
        .status_i     (insert_val_i),
        .data_o       (ip_addr_hash_calc_shift_reg[hash_idx]),
        .status_o     (insert_val_shift_reg)    
      );
    end
  endgenerate

  always_comb begin
    hash_query    = LOOK_UP_QUERY;
    if (insert_val_shift_reg[0]) begin
      hash_query  = INSERT_QUERY;   
    end
  end

  generate
    for (hash_idx = 0; hash_idx < NUM_HASH_TABLES; hash_idx++) begin : hash_table_gen
      hash_table #(
        .KEY_W              (KEY_W),
        .VAL_W              (IP_ADDR_W)
      ) hash_table_inst (
        .clk                (clk),
        .rst                (rst),
        .wr_en_i            (wr_en_hash_table[hash_idx]),
        .hash_query_i       (hash_query),
        .hash_wr_key_i      (ip_addr_hash_calc_shift_reg[hash_idx][1]),
        .hash_rd_key_i      (ip_addr_hash_calc_shift_reg[hash_idx][0]),
        .hash_insert_val_i  (ip_addr_shift_reg[1]),
        .hash_lookup_val_i  (ip_addr_shift_reg[0]),
        .resp_o             (hash_hit[hash_idx])
      );
    end
  endgenerate

  data_pipeline #(
    .DATA_W       (1),
    .PIPE_DEPTH   (PIPE_DEPTH),
    .RST_EN       (1),
    .RST_VAL      (0)
  ) look_up_pipeline_inst (
    .clk          (clk),
    .rst          (rst),
    .data_i       (look_up_val_i),
    .data_o       (ip_addr_found_if_o.valid)
  );

  always_comb begin
    en_search = insert_val_shift_reg[PIPE_DEPTH-1];

    for (int i = 0; i < NUM_HASH_TABLES; i++) begin
      wr_en_hash_table[i] = en_search && hash_hit[i];

      en_search = en_search && !hash_hit[i];
    end
  end

  assign ip_addr_found_if_o.data = |hash_hit;
  
endmodule
