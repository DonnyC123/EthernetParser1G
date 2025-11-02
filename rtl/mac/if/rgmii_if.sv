interface rgmii_if ();
  import mac_if_pkg::*;

  logic [RGMII_DATA_W-1:0]  data;
  rgmii_ctrl_t              ctrl;

  modport master (
    input data,
    input ctrl
  );

  modport slave (
    output data,
    output ctrl
  );

endinterface