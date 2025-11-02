module hash_controller_tb #(
  parameter IP_ADDR_W = 32
) (
  input   logic                 clk,
  input   logic                 rst,
  input   logic                 insert_val_i,
  input   logic                 look_up_val_i,
  input   logic [IP_ADDR_W-1:0] ip_addr_i,
  output  logic                 ip_addr_found_o,
  output  logic                 ip_addr_found_valid_o
);

  data_valid_if #(
    .DATA_W(1)
  ) ip_addr_found_if();

  ip_hash_controller #(
    .IP_ADDR_W          (IP_ADDR_W)
  ) ip_hash_controller_inst (
    .clk                (clk),
    .rst                (rst),
    .insert_val_i       (insert_val_i),
    .look_up_val_i      (look_up_val_i),
    .ip_addr_i          (ip_addr_i),
    .ip_addr_found_if_o (ip_addr_found_if.master)
  );

  assign ip_addr_found_o = ip_addr_found_if.data;
  assign ip_addr_found_valid_o = ip_addr_found_if.valid;
endmodule