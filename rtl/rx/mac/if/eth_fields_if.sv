interface eth_fields_if ();

  logic is_preamble_or_sfd;
  logic is_dst_mac;
  logic is_src_mac;
  logic is_ether_type;
  logic is_payload_or_crc;

  modport slave (
    input is_preamble_or_sfd,
    input is_dst_mac,
    input is_src_mac,
    input is_ether_type,
    input is_payload_or_crc
  );

  modport master (
    output is_preamble_or_sfd,
    output is_dst_mac,
    output is_src_mac,
    output is_ether_type,
    output is_payload_or_crc
  );

endinterface