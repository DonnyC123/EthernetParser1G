package crc_pkg;
  localparam int CRC_W              = 32;
  localparam CRC_POLY               = 32'h04C11DB7;
  localparam PARALLEL_CRC_POLY_8BIT = CRC_POLY ^ (CRC_POLY >> 1) ^ (CRC_POLY >> 2) ^ (CRC_POLY >> 3) 
                                    ^ (CRC_POLY >> 4) ^ (CRC_POLY >> 5) ^ (CRC_POLY >> 6) ^ (CRC_POLY >> 7);
  localparam CRC_REG_INITIAL_VALUE  = 32'hFFFFFFFF;
  
  typedef enum int {  
    IDLE,
    ACTIVE
  } crc_checker_state_t;

endpackage