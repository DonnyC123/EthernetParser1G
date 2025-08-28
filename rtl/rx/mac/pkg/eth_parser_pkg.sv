package eth_parser_pkg;
  import mac_if_pkg::GMII_DATA_W;

  parameter PREAMBLE_LEN        = 7;  
  parameter SFD_LEN             = 1;
  parameter MAC_LEN             = 6;
  parameter ETHER_TYPE_LEN      = 2;
  parameter MIN_DATA_LEN        = 46;
  parameter MAX_DATA_LEN        = 1500;
  parameter CRC_LEN             = 4;
  parameter MIN_DATA_OR_CRC_LEN = MIN_DATA_LEN + CRC_LEN;
  parameter MAX_DATA_OR_CRC_LEN = MAX_DATA_LEN + CRC_LEN;

  parameter PREAMBLE_COUNTER_W  = $clog(PREAMBLE_LEN);
  parameter MAC_COUNTER_W       = $clog(MAC_LEN);
  parameter ETHER_TYPE_W        = $clog(ETHER_TYPE_LEN);       

  parameter COUNTER_W           = $clog(MAX_DATA_OR_CRC_LEN);

  parameter PREAMBLE_BYTE       = 8'hAA;
  parameter SFD_BYTE            = 8'hAB;

  parameter NUM_PARSER_STATE    = 7;  

  typedef enum logic[NUM_PARSER_STATE-1:0] {
    IDLE              = NUM_PARSER_STATE'b0000001, 
    PREAMBLE_PARSE    = NUM_PARSER_STATE'b0000010,
    SFD_PARSE         = NUM_PARSER_STATE'b0000100, 
    DEST_MAC_PARSE    = NUM_PARSER_STATE'b0001000,
    SRC_MAC_PARSE     = NUM_PARSER_STATE'b0010000,
    ETHER_TYPE_PARSE  = NUM_PARSER_STATE'b0100000,
    DATA_OR_CRC_PARSE = NUM_PARSER_STATE'b1000000
  } parser_state_t;
  
  typedef struct {
    logic is_preamble_or_sfd;
    logic is_dst_mac;
    logic is_src_mac;
    logic is_ether_type;
    logic is_payload_or_crc;
  } eth_fields_t;

  typedef struct packed{
    logic preamble_sfd;
    logic incomplete;
  } error_fields_t;

  automatic function logic preamble_error(logic [GMII_DATA_W-1:0] gmii_data);
    return gmii_data != PREAMBLE_BYTE;
  endfunction

  automatic function logic sfd_error(logic [GMII_DATA_W-1:0] gmii_data);
    return gmii_data != SFD_BYTE;
  endfunction
endpackage