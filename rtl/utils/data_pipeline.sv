module data_pipeline #(
  parameter DATA_W      = 32,
  parameter PIPE_DEPTH  = 1,
  parameter RST_EN      = 1,
  parameter RST_VAL     = 0
) (
  input  logic                clk,
  input  logic                rst,
  input  logic  [DATA_W-1:0]  data_i,
  output logic  [DATA_W-1:0]  data_o
);

  logic [DATA_W-1:0] data_shift_reg_ff [PIPE_DEPTH-1:0];

  generate
    if (PIPE_DEPTH >= 1) begin
      always_ff @(posedge clk) begin
        if (rst && RST_EN) begin

          for (int i = 0; i < PIPE_DEPTH; i++) begin
            data_shift_reg_ff[i]  <= RST_VAL;
          end
        end else begin

          data_shift_reg_ff[0]    <= data_i;
          for (int i = 1; i < PIPE_DEPTH; i++) begin
            data_shift_reg_ff[i]  <= data_shift_reg_ff[i-1];
          end
        end
      end

      assign data_o = data_shift_reg_ff[PIPE_DEPTH-1]; 
    end else begin
      assign data_o = data_i;
    end 

  endgenerate

endmodule