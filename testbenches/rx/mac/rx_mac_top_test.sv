module rx_mac_top_test
  import mac_if_pkg::*;
(
  input  logic                    clk,
  input  logic                    rst,
  input  logic [RGMII_DATA_W-1:0] rgmii_rx_data_i,
  input  logic                    rgmii_rx_ctrl_i,
  output logic [GMII_DATA_W-1:0]  rx_data_o,
  output logic                    rx_data_valid_o,
  output logic                    is_preamble_or_sfd_o,
  output logic                    is_dst_mac_o,
  output logic                    is_src_mac_o,
  output logic                    is_ether_type_o,
  output logic                    is_payload_or_crc_o,
  output logic                    invalid_frame_o 
);

  rgmii_if      rgmii_if_internal();
  eth_parser_if eth_parser_rx_if ();

  data_valid_if  #( 
    .DATA_W(GMII_DATA_W)
  ) rx_data_valid_if ();

  assign rgmii_if_internal.data = rgmii_rx_data_i;
  assign rgmii_if_internal.ctrl = rgmii_rx_ctrl_i;

  rx_mac_top rx_mac_top_inst (
    .clk                  (clk),
    .rst                  (rst),
    .rgmii_if_rx_i        (rgmii_if_internal.slave),
    .rx_data_valid_if_o   (rx_data_valid_if.slave),
    .eth_parser_rx_if_o   (eth_parser_rx_if.slave),
    .invalid_frame_o      (invalid_frame_o)
  );

  always_comb begin
    rx_data_o             = rx_data_valid_if.data;
    rx_data_valid_o       = rx_data_valid_if.valid;

    is_preamble_or_sfd_o  = eth_parser_rx_if.eth_fields.is_preamble_or_sfd;         
    is_dst_mac_o          = eth_parser_rx_if.eth_fields.is_dst_mac; 
    is_src_mac_o          = eth_parser_rx_if.eth_fields.is_src_mac; 
    is_ether_type_o       = eth_parser_rx_if.eth_fields.is_ether_type;   
    is_payload_or_crc_o   = eth_parser_rx_if.eth_fields.is_payload_or_crc;
  end
endmodule