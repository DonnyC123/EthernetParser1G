module bram #(
  parameter DATA_W = 32,
  parameter ADDR_W = 12
) (
  input   logic               clk,
  input   logic               rst,
  input   logic               wr_en_i,
  input   logic [DATA_W-1:0]  wr_data_i,
  input   logic [ADDR_W-1:0]  wr_addr_i,
  input   logic [ADDR_W-1:0]  rd_addr_i,
  output  logic               rd_data_o 
);

  localparam BRAM_DEPTH = 2 ** ADDR_W;
  
  logic [DATA_W-1:0] memory [BRAM_DEPTH-1:0];

  initial begin
    for (int i = 0; i < BRAM_DEPTH; i++) begin
      memory[i] = '0;
    end  
  end

  always_ff @(posedge clk) begin
    if (!rst) begin
      if (wr_en_i) begin
        memory[wr_addr_i] <= wr_data_i;  
      end
      rd_data_o           <= memory[rd_addr_i];
    end
  end

endmodule