module packet_parser_top (
  input  logic            clk,
  input  logic            rst,
  rgmii_if.slave          rgmii_if_rx,
  rgmii_if.master         rgmii_if_tx
);

  logic           invalid_frame_o;

  data_valid_if   rx_data_valid_if();
  eth_fields_if   eth_fields_if();
  ip_fields_if    ip_fields_if();
  data_valid_if   pass_ip_if();

  rx_mac_top rx_mac_top_inst (
    .clk                (clk),
    .rst                (rst),
    .rgmii_if_rx_i      (rgmii_if_rx),
    .rx_data_valid_if_o (rx_data_valid_if.master),
    .eth_fields_rx_if_o (eth_fields_if.master),
    .invalid_frame_o    (invalid_frame_o) 
  );

  ip_type_arbiter ip_type_arbiter_inst (
    .clk            (clk),
    .rst            (rst),   
    .rx_data_if     (rx_data_valid_if.slave),
    .eth_fields_if  (eth_fields_if.slave), 
    .ip_fields_if   (ip_fields_if.master) 
  );

  ip_filter #(
    .IP_ADDR_W        (32),
    .DATA_W           (8)
  ) ipv_filter_inst  (
    .clk              (clk),
    .rst              (rst),
    .ip_fields_if_i   (ip_fields_if.slave),
    .ip_addr_i        (rx_data_valid_if.slave.data),
    .pass_ip_if_o     (pass_ip_if.master)
  );
  
  tx_buffer_controller #(
    .RGMII_W          (8)
  ) tx_buffer_controller_inst (
    .clk              (clk),
    .rst              (rst),   
    .rgmii_if_rx_i    (rgmii_if_rx),   
    .ip_fields_if     (ip_fields_if),
    .pass_ip_if       (pass_ip_if.slave),
    .rgmii_if_tx      (rgmii_if_tx)
  );

endmodule 