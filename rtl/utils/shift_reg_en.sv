module shift_reg #(
  parameter DATA_W            = 32,
  parameter PIPE_DEPTH        = 2,
  parameter RST_EN            = 1,
  parameter RST_VAL           = 0,
  parameter INCLUDE_DATA_IN   = 0
) (
  input  logic                clk,
  input  logic                rst,
  input  logic                shift_en,      
  input  logic  [DATA_W-1:0]  data_i,
  output logic  [DATA_W-1:0]  data_o [PIPE_DEPTH]
);

  logic [DATA_W-1:0] data_shift_reg_b  [PIPE_DEPTH];
  logic [DATA_W-1:0] data_shift_reg_ff [PIPE_DEPTH];

  generate
    if (PIPE_DEPTH >= 1) begin

      always_comb begin
        data_shift_reg_b = data_shift_reg_ff;
        if (shift_en) begin
          data_shift_reg_b[0] = data_i;
          for (int i = 1; i < PIPE_DEPTH; i++) begin
            data_shift_reg_b[i]  = data_shift_reg_ff[i-1];
          end
        end
      end

      always_ff @(posedge clk) begin
        if (rst && RST_EN) begin

          for (int i = 0; i < PIPE_DEPTH; i++) begin
            data_shift_reg_ff[i]  <= RST_VAL;
          end
        end else begin
          data_shift_reg_ff       <= data_shift_reg_b;      
        end
      end
      
      if (INCLUDE_DATA_IN) begin
        assign data_o = data_shift_reg_b;
      end else begin
        assign data_o = data_shift_reg_ff;
      end 

    end else begin
      assign data_o = data_i;
    end 

  endgenerate

endmodule