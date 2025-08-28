package mac_if_pkg;

  localparam RGMII_DATA_W = 4;
  localparam GMII_DATA_W  = 2*RGMII_DATA_W;

  typedef union packed {
    logic valid; 
    logic error; 
  } rgmii_ctrl_t;

endpackage