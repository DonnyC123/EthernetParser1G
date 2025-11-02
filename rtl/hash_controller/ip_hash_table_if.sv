interface ip_hash_if #(
  parameter IP_ADDR_W = 32
);

  logic                 insert_val;
  logic                 look_up_val;
  logic [IP_ADDR_W-1:0] ip_addr;

  modport slave (
    input insert_val,
    input look_up_val,
    input ip_addr,
    output found_ip,
    output found_ip_valid
  );

  modport master (
    output insert_val,
    output look_up_val,
    output ip_addr 
    input found_ip,
    input found_ip_valid
  );
  
endinterface