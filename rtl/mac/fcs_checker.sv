module fcs_checker 
  import fcs_pkg::*;
  import mac_if_pkg::*;
(
  input   logic               clk,
  input   logic               rst,
  input   gmii_if.slave       gmii_rx_if_i,
  input   eth_fields_if.slave eth_fields_if_i,
  output  logic               fcs_error_o
);

  fcs_checker_state_t fcs_checker_state_b;
  fcs_checker_state_t fcs_checker_state_ff;

  logic [FCS_W-1:0]   fcs_shift_reg_b; 
  logic [FCS_W-1:0]   fcs_shift_reg_ff;
  logic [FCS_W-1:0]   new_fcs_val;

  logic               fcs_error_valid;
  logic               gmii_rx_valid_ff;     

  data_pipeline #(
    .DATA_W       ($bits(gmii_rx_if_i.valid)),
    .PIPE_DEPTH   (1),
    .RST_EN       (1),
    .RST_VAL      (0)
  ) data_valid_pipe_inst (
    .clk          (clk),
    .rst          (rst),
    .data_i       (gmii_rx_if_i.valid),     
    .data_o       (gmii_rx_valid_ff) 
  );

  calculate_crc #(
    .DATA_W     (GMII_DATA_W),
    .CRC_W      (FCS_W),
    .CRC_POLY   (FCS_POLY)
  ) calculate_crc_inst (
    .crc_old_i  (fcs_shift_reg_ff),
    .data_i     (gmii_rx_if_i.data),
    .crc_new_o  (new_fcs_val)
  );

  always_comb begin
    fcs_checker_state_b       = fcs_checker_state_ff;
    fcs_shift_reg_b           = new_fcs_val;
    fcs_error_valid           = 1'b0;

    unique case (fcs_checker_state_ff)
      IDLE: begin
        fcs_shift_reg_b       = FCS_REG_INITIAL_VALUE; 
        
        if (gmii_rx_if_i.valid && gmii_rx_valid_ff && !eth_fields_if_i.is_preamble_or_sfd) begin
          fcs_checker_state_b = ACTIVE;
          fcs_shift_reg_b     = new_fcs_val;
        end
      end

      ACTIVE: begin
        if (!gmii_rx_if_i.valid) begin
          fcs_checker_state_b = IDLE;
          fcs_shift_reg_b     = FCS_REG_INITIAL_VALUE;
          fcs_error_valid     = 1'b1;
        end
      end
    endcase
  end

  always_ff @(posedge clk) begin
    if (rst) begin
      fcs_checker_state_ff  <= IDLE;
      fcs_shift_reg_ff      <= FCS_REG_INITIAL_VALUE;
    end else begin      
      fcs_checker_state_ff  <= fcs_checker_state_b;
      fcs_shift_reg_ff      <= fcs_shift_reg_b;
    end
  end

  assign fcs_error_o = (fcs_shift_reg_ff != FCS_RESIDUE) && fcs_error_valid; 

endmodule