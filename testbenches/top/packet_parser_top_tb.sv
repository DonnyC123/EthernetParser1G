module packet_parser_top_tb #(
  parameter RGMII_W = 8
)(
  input  logic                clk,
  input  logic                rst,
  input  logic [RGMII_W-1:0]  rgmii_rx_data,
  input  logic                rgmii_rx_valid,
  input  logic [RGMII_W-1:0]  rgmii_tx_data,
  input  logic                rgmii_tx_valid
);

  rgmii_if rgmii_if_rx();
  rgmii_if rgmii_if_tx();

  assign rgmii_if_rx.data = rgmii_rx_data;
  assign rgmii_if_rx.valid = rgmii_rx_valid;

  packet_parser_top packet_parser_top_inst(
    .clk          (clk),
    .rst          (rst),
    .rgmii_if_rx  (rgmii_if_rx.slave),
    .rgmii_if_tx  (rgmii_if_tx.master)
  );

  assign rgmii_tx_data = rgmii_if_tx.data;
  assign rgmii_tx_valid = rgmii_if_tx.ctrl;

endmodule