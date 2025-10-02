module xor_reduction #(
  parameter DIN_W  = 32,
  parameter DOUT_W = 12
) (
  input   logic [DIN_W-1:0]   data_i,
  output  logic [DOUT_W-1:0]  data_o
);

  logic [DOUT_W-1:0] curr_xor;

  always_comb begin
    data_o          = '0;
    for(int j = 0; j < DIN_W/DOUT_W; j++) begin
      for (int i = 0; i < DOUT_W; i ++) begin
        curr_xor[i] = data_i[(i * j) % DIN_W];
      end
      data_o        = data_o ^ curr_xor;
    end
  end
  
endmodule