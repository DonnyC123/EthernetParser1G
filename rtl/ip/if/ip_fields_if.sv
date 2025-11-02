interface ip_fields_if();
  logic idle;
  logic dst_addr;
  logic src_addr; 
  logic option_or_data;

  modport slave (
    input idle,
    input dst_addr,
    input src_addr,
    input option_or_data
  );

  modport master (
    output idle,
    output dst_addr,
    output src_addr,
    output option_or_data
  );

endinterface