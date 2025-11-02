package fcs_pkg;
  localparam FCS_W                  = 32;
  localparam FCS_POLY               = 32'h04C11DB7;
  localparam FCS_REG_INITIAL_VALUE  = 32'hFFFFFFFF;
  localparam FCS_RESIDUE            = 32'hC704DD7B;
  
  typedef enum int {  
    IDLE,
    ACTIVE
  } fcs_checker_state_t;

endpackage