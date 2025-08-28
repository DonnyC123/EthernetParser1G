interface eth_parser_if ();

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