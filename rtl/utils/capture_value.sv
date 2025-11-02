module capture_value (
  input                 logic clk,
  input                 logic rst,
  input                 logic enable,
  data_valid_if.slave   capture_data_if_i,
  data_valid_if.master  captured_data_if_o
);
  captureDataWidths: assert ($bits(capture_data_if_o.data) % $bits(capture_data_if_i.data) == 0)
    else $error("Assertion label failed!");
  
  localparam DATA_IN_W  = $bits(capture_data_if_i.data);
  localparam PIPE_DEPTH = $bits(capture_data_if_o.data) / $bits(capture_data_if_i.data);
  
  logic [DATA_IN_W-1] captured_data_shift_reg [PIPE_DEPTH];
  logic [DATA_IN_W-1] valid_shift_reg         [PIPE_DEPTH];
  logic               valid_ff;   

  data_status_shift_reg_en #(
    .DATA_W           (DATA_IN_W),
    .STATUS_W         (1),
    .PIPE_DEPTH       (PIPE_DEPTH),
    .INCLUDE_DATA_IN  (0)
  ) data_status_shift_reg_en_inst (
    .clk              (clk),
    .rst              (rst),
    .shift_en         (enable),
    .data_i           (capture_data_if_i.data),
    .status_i         (capture_data_if_i.valid),
    .data_o           (captured_data_shift_reg),
    .status_o         (valid_shift_reg)      
  );

  always_ff @(posedge clk) begin
    if (rst) begin
      valid_ff  <= '0;
    end else begin
      valid_ff  <= capture_data_if_i.valid && (valid_ff || enable); 
    end
  end

  assign captured_data_if_o.data  = {captured_data_shift_reg};  
  assign captured_data_if_o.valid = &{valid_shift_reg} && valid_ff;  

endmodule 