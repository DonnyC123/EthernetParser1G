module data_status_shift_reg # (
  parameter int DATA_W      = 32,
  parameter int STATUS_W    = 1,
  parameter int PIPE_DEPTH  = 1
) (
  input  logic clk,
  input  logic rst,
  input  logic  [DATA_W-1:0]    data_i,
  input  logic  [STATUS_W-1:0]  status_i,
  output logic  [DATA_W-1:0]    data_o    [PIPE_DEPTH],
  output logic  [STATUS_W-1:0]  status_o  [PIPE_DEPTH]
);

  shift_reg # (
    .DATA_W       (DATA_W),
    .PIPE_DEPTH   (PIPE_DEPTH),
    .RST_EN       (0)
  ) data_shift_reg_inst (
    .clk          (clk),
    .rst          (rst),
    .data_i       (data_i),
    .data_o       (data_o)
  );

  shift_reg # (
    .DATA_W       (STATUS_W),
    .PIPE_DEPTH   (PIPE_DEPTH),
    .RST_EN       (1),
    .RST_VAL      (0)
  ) status_shift_reg_inst (
    .clk          (clk),
    .rst          (rst),
    .data_i       (status_i),
    .data_o       (status_o)
  );

endmodule 