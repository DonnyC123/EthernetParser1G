package hash_table_pkg;
  parameter                         HASH_KEY_W        = 12;
  parameter logic [HASH_KEY_W-1:0]  HASH_CRC_POLY [4] = '{'h13D, 'h929, 'hD18, 'h32F};

  typedef enum logic {
    INSERT_QUERY  = 0,
    LOOK_UP_QUERY = 1
  } hash_query_t;

endpackage