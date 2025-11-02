package ipv4_pkg;
  parameter TOTAL_LN_BYTES          = 2;           
  parameter IDENTIFICATION_BYTES    = 2;                
  parameter FRAGMENT_BITS_BYTES     = 2;                                      
  parameter HEADER_CHECK_SUM_BYTES  = 2;                   
  parameter IP_BYTES                = 4;        


  parameter COUNTER_W          = $clog2(IP_BYTES);

  parameter NUM_PARSER_STATE  = 11;

  typedef enum logic[NUM_PARSER_STATE-1:0] {
    IDLE_OR_VERSION_HLEN  = 'b00000000001, 
    TYPE_OF_SERVICE       = 'b00000000010,
    TOTAL_LN              = 'b00000000100, 
    IDENTIFICATION        = 'b00000001000,
    FRAGMENT_BITS         = 'b00000010000,
    TTL                   = 'b00000100000,
    PROTOCOL              = 'b00001000000,
    HEADER_CHECK_SUM      = 'b00010000000,
    SRC_IP                = 'b00100000000,
    DST_IP                = 'b01000000000,
    OPTION_OR_DATA        = 'b10000000000
  } parser_state_t;

endpackage