module hash_table 
  import hash_table_pkg::*;
#(
  parameter KEY_W = 12,
  parameter VAL_W = 32
) (
  

  input   logic               clk,
  input   logic               rst,
  input   logic               wr_en_i,
  input   hash_query_t        hash_query_i,
  input   logic [KEY_W-1:0]   hash_wr_key_i,
  input   logic [KEY_W-1:0]   hash_rd_key_i,
  input   logic [VAL_W-1:0]   hash_val_i,
  output  logic               resp_o
);

  logic             hash_query_ff;
  logic [VAL_W-1:0] hash_val_table;
  logic [VAL_W-1:0] hash_val_expected_ff;

  bram #(
    .DATA_W     (VAL_W),
    .ADDR_W     (12)
  ) hash_bram_inst (
    .clk        (clk),
    .rst        (rst),
    .wr_en_i    (wr_en_i),
    .wr_data_i  (hash_val_i),
    .wr_addr_i  (hash_wr_key_i),
    .rd_addr_i  (hash_rd_key_i),
    .rd_data_o  (hash_val_table) 
  );

  data_pipeline #(
    .DATA_W     (VAL_W + 1),
    .PIPE_DEPTH (1),
    .RST_EN     (1),
    .RST_VAL    (0)
  ) hash_wr_expected_pipeline (
    .clk        (clk),
    .rst        (rst),
    .data_i     ({hash_query_i, hash_val_i}),
    .data_o     ({hash_query_ff, hash_val_expected_ff})
  );

  always_comb begin
    unique case (hash_query_ff) 
      INSERT_QUERY: begin
        resp_o = hash_val_table == '0;
      end
      LOOK_UP_QUERY: begin
        resp_o = hash_val_table == hash_val_expected_ff;
      end
    endcase
  end

endmodule