package eth_parser_pkg;
  import mac_if_pkg::GMII_DATA_W;

  parameter PREAMBLE_BYTES        = 7;  
  parameter SFD_BYTES             = 1;
  parameter MAC_BYTES             = 6;
  parameter ETHER_TYPE_BYTES      = 2;
  parameter MIN_DATA_BYTES        = 46;
  parameter MAX_DATA_BYTES        = 1500;
  parameter fcs_BYTES             = 4;
  parameter MIN_DATA_OR_fcs_BYTES = MIN_DATA_BYTES + fcs_BYTES;
  parameter MAX_DATA_OR_fcs_BYTES = MAX_DATA_BYTES + fcs_BYTES;

  parameter PREAMBLE_COUNTER_W    = $clog2(PREAMBLE_BYTES);
  parameter MAC_COUNTER_W         = $clog2(MAC_BYTES);
  parameter ETHER_TYPE_W          = $clog2(ETHER_TYPE_BYTES);       

  parameter COUNTER_W             = $clog2(MAX_DATA_OR_fcs_BYTES);

  parameter PREAMBLE_BYTE         = 8'hAA;
  parameter SFD_BYTE              = 8'hAB;

  parameter NUM_PARSER_STATE      = 7;  

  typedef enum logic[NUM_PARSER_STATE-1:0] {
    IDLE              = 'b0000001, 
    PREAMBLE_PARSE    = 'b0000010,
    SFD_PARSE         = 'b0000100, 
    DEST_MAC_PARSE    = 'b0001000,
    SRC_MAC_PARSE     = 'b0010000,
    ETHER_TYPE_PARSE  = 'b0100000,
    DATA_OR_fcs_PARSE = 'b1000000
  } parser_state_t;

  typedef struct packed{
    logic preamble_sfd;
    logic incomplete;
  } error_fields_t;

  function automatic logic preamble_error(logic [GMII_DATA_W-1:0] gmii_data);
    return gmii_data != PREAMBLE_BYTE;
  endfunction

  function automatic logic sfd_error(logic [GMII_DATA_W-1:0] gmii_data);
    return gmii_data != SFD_BYTE;
  endfunction
endpackage