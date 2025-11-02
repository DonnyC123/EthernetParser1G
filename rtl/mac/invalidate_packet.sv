
module invalidate_packet (
  input logic                       clk,
  input logic                       rst,
  input logic                       fcs_error_i,
  input gmii_if.slave               gmii_rx_if_i,
  input eth_parser_error_if.slave   eth_parser_error_if_i,
  output logic                      error_pulse_o
);
  import error_pulse_pkg::*;

  error_state_t error_state_b;
  error_state_t error_state_ff;

  logic         error;
  
  always_comb begin
    error_state_b = error_state_ff;
    error_pulse_o = '0;

    error         = fcs_error_i 
                  || gmii_rx_if_i.valid && gmii_rx_if_i.error
                  || eth_parser_error_if_i.preamble_sfd
                  || eth_parser_error_if_i.incomplete;
        
    unique case (error_state_ff) 
      NO_ERROR: begin
        if (error) begin
          error_state_b = ERROR;
          error_pulse_o = 1'b1;
        end  
      end
      ERROR: begin
        if (!gmii_rx_if.valid) begin
          error_state_b = NO_ERROR;
        end
      end
    endcase
  end

  always_ff @(posedge clk) begin
    if (rst) begin
      error_state_ff  <= NO_ERROR;
    end else begin
      error_state_ff  <= error_state_b;
    end
  end

endmodule
