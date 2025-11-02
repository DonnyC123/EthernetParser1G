interface ether_type_if ();
  logic is_ipv4;
  logic is_ipv6;
  logic is_other;

  modport slave (
    input is_ipv4,
    input is_ipv6,
    input is_other
  );

  modport master (
    output is_ipv4,
    output is_ipv6,
    output is_other
  );

endinterface