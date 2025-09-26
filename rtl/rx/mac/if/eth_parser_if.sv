interface eth_parser_if ();
  import eth_parser_pkg::*;

  eth_fields_t    eth_fields;
  error_fields_t  error_fields;

  modport slave (
    input eth_fields,
    input error_fields
  );

  modport master (
    output eth_fields,
    output error_fields
  );

endinterface