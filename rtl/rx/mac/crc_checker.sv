module crc_checker 
  import crc_pkg::*;
  import mac_if_pkg::*;
#(
  parameter int PARALLEL_CRC_POLY = PARALLEL_CRC_POLY_8BIT
) (
  input logic         clk,
  input logic         rst,
  input gmii_if.slave gmii_rx_if_i,
  input eth_parser_if eth_parser_if_i,
  output logic        crc_error_o
);

  crc_checker_state_t crc_checker_state_b;
  crc_checker_state_t crc_checker_state_ff;

  logic [CRC_W-1:0]   crc_shift_reg_b; 
  logic [CRC_W-1:0]   crc_shift_reg_ff;

  logic               crc_error_valid;

  always_comb begin
    crc_checker_state_b       = crc_checker_state_ff;
    crc_shift_reg_b           = {crc_shift_reg_ff[CRC_W-1:GMII_DATA_W], gmii_rx_if_i.data} ^ PARALLEL_CRC_POLY;
    crc_error_valid           = 1'b0;

    unique case (crc_checker_state_ff)
      IDLE: begin
        crc_shift_reg_b       = CRC_REG_INITIAL_VALUE; 
        if (gmii_rx_if_i.valid && !eth_parser_if_i.eth_fields.is_preamble_or_sfd) begin
          crc_checker_state_b = ACTIVE;
        end
      end

      ACTIVE: begin
        if (!gmii_rx_if_i.valid) begin
          crc_checker_state_b = IDLE;
          crc_shift_reg_b     = CRC_REG_INITIAL_VALUE;
          crc_error_valid     = 1'b1;
        end
      end
    endcase
  end

  always_ff @(posedge clk) begin
    if (rst) begin
      crc_checker_state_ff  <= IDLE;
      crc_shift_reg_ff      <= CRC_REG_INITIAL_VALUE;
    end else begin      
      crc_checker_state_ff  <= crc_checker_state_b;
      crc_shift_reg_ff      <= crc_shift_reg_b;
    end
  end

  assign crc_error_o = (crc_shift_reg_ff == '0) && crc_error_valid; 

endmodule