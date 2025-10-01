module shift_reg_pipeline #(
  parameter DATA_W            = 32,
  parameter PIPE_DEPTH        = 2,
  parameter RST_EN            = 1,
  parameter RST_VAL           = 0
) (
  input  logic                clk,
  input  logic                rst,
  input  logic  [DATA_W-1:0]  data_i,
  output logic  [DATA_W-1:0]  data_o [PIPE_DEPTH-1:0]
);

  assert (PIPE_DEPTH >= 1) else $error("Invalid Pipe Depth");

  logic [DATA_W-1:0]  data_reg_ff [PIPE_DEPTH-2:0];
  logic [DATA_W-1:0]  data_reg_b  [PIPE_DEPTH-1:0];

  always_comb begin
    data_reg_b[0]                 = data_i;
    if (PIPE_DEPTH > 1) begin
      data_reg_b[PIPE_DEPTH-1:1]  = data_reg_ff[PIPE_DEPTH-2:0];
    end
  end

  generate;
    if (PIPE_DEPTH > 1) begin
      always_ff begin
      if (rst && RST_EN) begin
        data_reg_ff   <= '{default: RST_VAL};
      end else begin
        data_reg_ff   <= data_reg_b[PIPE_DEPTH-2:0];  
      end
    end
  end
  endgenerate
  
  assign data_o = data_reg_b;
endmodule