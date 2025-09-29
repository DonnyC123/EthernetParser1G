package crc_pkg;
  localparam int CRC_W              = 32;
  localparam CRC_POLY               = 32'h04C11DB7;
  localparam CRC_REG_INITIAL_VALUE  = 32'hFFFFFFFF;
  localparam CRC_RESIDUE            = 32'hC704DD7B;
  
  typedef enum int {  
    IDLE,
    ACTIVE
  } crc_checker_state_t;

endpackage