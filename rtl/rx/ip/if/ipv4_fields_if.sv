interface ipv4_fields_if();
  logic dst_addr;
  logic src_addr; 

  modport slave (
    input dst_addr,
    input src_addr
  );

  modport master (
    output dst_addr,
    output src_addr
  );

endinterface