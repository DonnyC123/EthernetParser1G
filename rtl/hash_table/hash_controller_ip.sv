module hash_controller_ip #(
  parameter IP_ADDR_W = 32,

) (
  input   logic                 clk,
  input   logic                 rst,
  input   logic                 insert_val_i,
  input   logic                 look_up_val_i,
  input   logic [IP_ADDR_W-1:0] ip_addr_i,
  output  logic                 ip_addr_found_o
);

  parameter KEY_W           = 12;
  parameter NUM_HASH_TABLES = 4;

  genvar hash_idx;

  logic [KEY_W-1:0]     ip_addr_reduced;

  logic [KEY_W-1:0]     ip_addr_hash_calc [NUM_HASH_TABLES-1:0];
  logic                 hash_hit          [NUM_HASH_TABLES-1:0];
  logic                 wr_en_hash_table  [NUM_HASH_TABLES-1:0];

  hash_query_t          hash_query;
  logic [IP_ADDR_W-1:0] hash_ip_val;

  logic [IP_ADDR_W-1:0] ip_addr_ff;

  xor_reduction #(
    .DIN_W    (IP_ADDR_W),
    .DOUT_W   (KEY_W)
  ) ip_xor_reduction(
    .data_i   (ip_addr_i),
    .data_o   (ip_addr_reduced)
  );
  
  generate
    for (hash_idx = 0; hash_idx < NUM_HASH_TABLES; hash_idx++) begin
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

  assign 
  
  always_comb begin
    hash_query    = LOOK_UP_QUERY;
    if (insert_val_i) begin
      hash_query  = INSERT_QUERY;   
    end
    
  end
  generate
    for (hash_idx = 0; hash_idx < NUM_HASH_TABLES; hash_idx++) begin
      hash_table #(
        .KEY_W      (KEY_W),
        .VAL_W      (IP_ADDR_W)
      ) hash_table_inst (
        .clk          (clk),
        .rst          (rst),
        .wr_en_i      (wr_en_hash_table[hash_idx]),
        .hash_query_i (hash_query)
        .hash_key_i   (ip_addr_hash_calc[hash_idx]),
        .hash_val_i   (ip_addr_i),
        .resp_o       (hash_hit[hash_idx])
      );
    end
  endgenerate
  
  assign ip_addr_found_o = |hash_hit;

  
endmodule







