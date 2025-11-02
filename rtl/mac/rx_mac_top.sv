module rx_mac_top 
  import mac_if_pkg::*;
(
  input  logic                    clk,
  input  logic                    rst,
  input  rgmii_if.slave           rgmii_if_rx_i,
  output data_valid_if.master     rx_data_valid_if_o,
  output eth_fields_if.master     eth_fields_rx_if_o,
  output logic                    invalid_frame_o 
);

  gmii_if             gmii_rx_if ();  
  eth_parser_error_if eth_parser_error_rx_if();

  logic               fcs_error;

  ddr_sdr_converter ddr_sdr_converter_inst (
    .clk            (clk),
    .rst            (rst),
    .rgmii_if_rx_i  (rgmii_if_rx_i),
    .gmii_if_rx_o   (gmii_rx_if.master)
  );

  eth_parser eth_parser_inst(
    .clk                    (clk),
    .rst                    (rst),
    .gmii_if_rx_i           (gmii_rx_if.slave),
    .eth_fields_if_o        (eth_fields_rx_if_o.master),
    .eth_parser_error_if_o  (eth_parser_error_rx_if.master)
  );

  fcs_checker fcs_checker_inst (
    .clk              (clk),
    .rst              (rst),
    .gmii_rx_if_i     (gmii_rx_if.slave),
    .eth_fields_if_i  (eth_fields_rx_if_o.slave),
    .fcs_error_o      (fcs_error)
  );

  invalidate_packet invalidate_packet_inst (
    .clk                    (clk),
    .rst                    (rst),
    .fcs_error_i            (fcs_error),
    .gmii_rx_if_i           (gmii_rx_if.slave),
    .eth_parser_error_if_i  (eth_parser_error_rx_if.slave),
    .error_pulse_o          (invalid_frame_o)
  );

  // Can clock data here
  assign rx_data_valid_if_o.data  = gmii_rx_if.data;
  assign rx_data_valid_if_o.valid = gmii_rx_if.valid;
endmodule
