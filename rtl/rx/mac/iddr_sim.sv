

module iddr_sim #(
  parameter string DDR_CLK_EDGE = "SAME_EDGE_PIPELINED",
  parameter logic INIT_Q1       = 1'b0,
  parameter logic INIT_Q2       = 1'b0,
  parameter string RSTYPE       = "SYNC"
) (
  input logic C,
  input logic CE,
  input logic D,
  input logic R,
  input logic S,
  output logic Q1,
  output logic Q2
);

  logic q1_ff;
  logic q2_ff;

  logic q1_2ff = INIT_Q1;
  logic q2_2ff = INIT_Q2;

  generate 
    if (RSTYPE != "SYNC") begin
      $error("IDDR Error: RSTYPE must be \"SYNC\", got \"%s\"", RSTYPE);
    end
      
    if (DDR_CLK_EDGE != "SAME_EDGE_PIPELINED") begin
      $error("IDDR Error: DDR_CLK_EDGE must be \"SAME_EDGE_PIPELINED\", got \"%s\"", DDR_CLK_EDGE);
    end
  endgenerate

  always_ff @(posedge C or negedge C) begin
    if (C) begin
      if (R) begin
        q1_ff   <= '0;
        q2_ff   <= '0;  
        q1_2ff  <= '0;
        q2_2ff  <= '0;
      end else if (S) begin
        q1_ff   <= 1'b1;
        q2_ff   <= 1'b1;  
        q1_2ff  <= 1'b1;
        q2_2ff  <= 1'b1;
      end else if (CE) begin
        q1_ff   <= D;
        q1_2ff  <= q1_ff;
        q2_2ff  <= q2_ff;
      end 
    end else if (CE) begin
      q2_ff     <= D;
    end
  end

  assign Q1 = q1_2ff;
  assign Q2 = q2_2ff;

endmodule 