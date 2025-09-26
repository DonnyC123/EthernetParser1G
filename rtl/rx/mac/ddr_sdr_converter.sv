module ddr_sdr_converter 
  import mac_if_pkg::*;
(
  input logic           clk,
  input logic           rst,
  input rgmii_if.slave  rgmii_if_rx_i,

  output gmii_if.master gmii_if_rx_o
);

  genvar data_idx;

  generate
    for (data_idx = 0; data_idx < RGMII_DATA_W; data_idx++) begin
      IDDR #(
        .DDR_CLK_EDGE ("SAME_EDGE_PIPELINED"),
        .INIT_Q1      (1'b0),
        .INIT_Q2      (1'b0),
        .SRTYPE       ("SYNC")
      ) IDDR_inst (
        .C            (clk),
        .CE           (1'b1),
        .D            (rgmii_if_rx_i.data[data_idx]),
        .R            (rst),
        .S            (1'b0),
        .Q1           (gmii_if_rx_o.data[data_idx + RGMII_DATA_W]),
        .Q2           (gmii_if_rx_o.data[data_idx])
      );
    end
      
    IDDR #(
      .DDR_CLK_EDGE ("SAME_EDGE_PIPELINED"),
      .INIT_Q1      (1'b0),
      .INIT_Q2      (1'b0),
      .SRTYPE       ("SYNC")
    ) IDDR_inst (
      .C            (clk),
      .CE           (1'b1),
      .D            (rgmii_if_rx_i.ctrl),
      .R            (rst),
      .S            (1'b0),
      .Q1           (gmii_if_rx_o.valid),
      .Q2           (gmii_if_rx_o.error)
    );
  endgenerate

endmodule