interface gmii_if ();
  import mac_if_pkg::*;

  logic [GMII_DATA_W-1:0]  data;
  logic                    error;
  logic                    valid;

  modport slave (
    input data,
    input error,
    input valid
  );

  modport master (
    output data,
    output error,
    output valid
  );

endinterface