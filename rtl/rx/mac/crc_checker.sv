module crc_checker 
  import crc_pkg::*;
  import mac_if_pkg::*;
(
  input   logic         clk,
  input   logic         rst,
  input   gmii_if.slave gmii_rx_if_i,
  input   eth_parser_if eth_parser_if_i,
  output  logic         crc_error_o
);

  crc_checker_state_t crc_checker_state_b;
  crc_checker_state_t crc_checker_state_ff;

  logic [CRC_W-1:0]   crc_shift_reg_b; 
  logic [CRC_W-1:0]   crc_shift_reg_ff;
  logic [CRC_W-1:0]   new_crc_val;

  logic               crc_error_valid;
  logic               gmii_rx_valid_ff;     

  data_pipeline #(
    .DATA_W       ($bits(gmii_rx_if_i.valid)),
    .PIPE_DEPTH   (1),
    .RESET_EN     (1),
    .RESET_VALUE  (0)
  ) data_valid_pipe_inst (
    .clk          (clk),
    .rst          (rst),
    .data_i       (gmii_rx_if_i.valid),     
    .data_o       (gmii_rx_valid_ff) 
  );

  calculate_new_crc #(
    .DATA_W     (GMII_DATA_W)
  ) calculate_new_crc_inst (
    .crc_old_i  (crc_shift_reg_ff),
    .data_i     (gmii_rx_if_i.data),
    .crc_new_o  (new_crc_val)
  );

  always_comb begin
    crc_checker_state_b       = crc_checker_state_ff;
    crc_shift_reg_b           = new_crc_val;
    crc_error_valid           = 1'b0;

    unique case (crc_checker_state_ff)
      IDLE: begin
        crc_shift_reg_b       = CRC_REG_INITIAL_VALUE; 
        
        if (gmii_rx_if_i.valid && gmii_rx_valid_ff && !eth_parser_if_i.eth_fields.is_preamble_or_sfd) begin
          crc_checker_state_b = ACTIVE;
          crc_shift_reg_b     = new_crc_val;
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

  assign crc_error_o = (crc_shift_reg_ff != CRC_RESIDUE) && crc_error_valid; 

endmodule