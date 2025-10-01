module xor_reduction #(
  parameter DIN_W  = 32,
  parameter DOUT_W = 12
) (
  input   logic [DIN_W-1:0]   data_i,
  output  logic [DOUT_W-1:0]  data_o
);

  logic [DOUT_W-1:0] curr_xor;

  always_comb begin
    for (int i = 0; i < DIN_W; i += DOUT_W) begin
      if (i + DOUT_W <= DIN_W) begin
        curr_xor  = data_i[i +: DOUT_W];
      end else begin
        curr_xor  = data_i[DIN_W-1 : i];
      end

      data_o      = data_o ^ curr_xor;
    end
  end
  
endmodule