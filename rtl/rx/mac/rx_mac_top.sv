module rx_mac_top 
  import mac_if_pkg::*;
(
  input  logic                    clk,
  input  logic                    rst,
  input  rgmii_if.slave           rgmii_if_rx_i,
  output data_valid_if.master     rx_data_valid_if_o,
  output eth_parser_if.master     eth_parser_rx_if_o,
  output logic                    invalid_frame_o 
);

  gmii_if       gmii_rx_if ();  
  eth_parser_if eth_parser_rx_if ();

  logic         crc_error;

  ddr_sdr_converter ddr_sdr_converter_inst (
    .clk            (clk),
    .rst            (rst),
    .rgmii_if_rx_i  (rgmii_if_rx_i),
    .gmii_if_rx_o   (gmii_rx_if.master)
  );

  eth_parser eth_parser_inst(
    .clk                (clk),
    .rst                (rst),
    .gmii_if_rx_i       (gmii_rx_if.slave),
    .eth_parser_if_o    (eth_parser_rx_if.master)
  );

  // Can clock data here
  assign rx_data_valid_if_o.data  = gmii_rx_if.data;
  assign rx_data_valid_if_o.valid = gmii_rx_if.valid;
  
  always_comb begin
    eth_parser_rx_if_o.eth_fields = eth_parser_rx_if.eth_fields;
    eth_parser_rx_if_o.error_fields = eth_parser_rx_if.error_fields;
  end

  crc_checker crc_checker_inst (
    .clk              (clk),
    .rst              (rst),
    .gmii_rx_if_i     (gmii_rx_if.slave),
    .eth_parser_if_i  (eth_parser_rx_if.slave),
    .crc_error_o      (crc_error)
  );

  invalidate_packet invalidate_packet_inst (
    .clk              (clk),
    .rst              (rst),
    .crc_error_i      (crc_error),
    .gmii_rx_if_i     (gmii_rx_if.slave),
    .eth_parser_if_i  (eth_parser_rx_if.slave),
    .error_pulse_o    (invalid_frame_o)
  );

  // Can clock data here
  
endmodule
