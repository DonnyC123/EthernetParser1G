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
  eth_fields_if eth_fields_rx_if ();

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
    .eth_fields_rx_if_o   (eth_fields_rx_if.slave),
    .invalid_frame_o      (invalid_frame_o)
  );

  data_status_pipeline # (
    .DATA_W     (GMII_DATA_W),
    .STATUS_W   (1),
    .PIPE_DEPTH (1)
  ) data_status_pipeline_inst (
    .clk        (clk),
    .rst        (rst),
    .data_i     (rx_data_valid_if.data),
    .status_i   (rx_data_valid_if.valid),
    .data_o     (rx_data_o),
    .status_o   (rx_data_valid_o)
  );

  data_pipeline # (
    .DATA_W     (5),
    .PIPE_DEPTH (1),
    .RST_EN   (0)
  ) data_pipeline_inst (
    .clk        (clk),
    .rst        (rst),
    .data_i     ({
                  eth_fields_rx_if.is_preamble_or_sfd, 
                  eth_fields_rx_if.is_dst_mac, 
                  eth_fields_rx_if.is_src_mac, 
                  eth_fields_rx_if.is_ether_type, 
                  eth_fields_rx_if.is_payload_or_fcs
                }),
    .data_o     ({
                  is_preamble_or_sfd_o,
                  is_dst_mac_o,
                  is_src_mac_o,
                  is_ether_type_o,
                  is_payload_or_crc_o
                })
  );

endmodule