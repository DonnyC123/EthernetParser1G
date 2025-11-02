// This module takes in eth parser and will output ipv6, ipv4. other  
module ip_type_arbiter (
  input   logic         clk,
  input   logic         rst,
  data_valid_if.slave   rx_data_if,
  eth_fields_if.slave   eth_fields_if,
  ip_fields_if.master   ip_fields_if
);

  import eth_parser_pkg::ETHER_TYPE_BYTES;

  data_valid_if #(
    .DATA_W (ETHER_TYPE_BYTES * 8)
  ) captured_eth_type_if;
  
  ip_fields_if ipv4_fields_if;
  
  ipv4_parser #(
    .DATA_W           (8)
  ) ipv4_parser_inst (
    .clk              (clk),
    .rst              (rst),
    .rx_data_if_i     (rx_data_if),
    .eth_fields_if_i  (eth_fields_if),
    .ip_fields_if_o   (ipv4_fields_if.master)
  );

  capture_value capture_eth_type_inst (
    .rst                (rst),
    .clk                (clk),
    .enable             (eth_fields_if.is_ether_type),
    .capture_data_if_i  (rx_data_if.data),
    .captured_data_if_o (captured_eth_type_if.master)            
  );

  always_comb begin
    ip_fields_if.idle             = '0;
    ip_fields_if.dst_addr         = '0;
    ip_fields_if.src_addr         = '0; 
    ip_fields_if.option_or_data   = '0;
    
    if ((captured_eth_type_if.data == 16'h0800) && captured_eth_type_if.valid) begin
      ip_fields_if.idle           = ipv4_fields_if.idle;
      ip_fields_if.dst_addr       = ipv4_fields_if.dst_addr;
      ip_fields_if.src_addr       = ipv4_fields_if.src_addr;
      ip_fields_if.option_or_data = ipv4_fields_if.option_or_data;
    end
  end

endmodule