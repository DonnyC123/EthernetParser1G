interface eth_parser_error_if();
  logic preamble_sfd;
  logic incomplete;

  modport slave (
    input preamble_sfd,
    input incomplete
  );

  modport master (
    output preamble_sfd,
    output incomplete
  );

endinterface