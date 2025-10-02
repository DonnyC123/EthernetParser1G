module calculate_crc #(
  parameter DATA_W    = 8,
  parameter CRC_W     = 32,
  parameter CRC_POLY  = 32'h04C11DB7
) (
  input   logic [CRC_W-1:0]   crc_old_i,
  input   logic [DATA_W-1:0]  data_i,
  output  logic [CRC_W-1:0]   crc_new_o
);

  logic [CRC_W-1:0] new_crc_val;
  logic             xor_crc;

  always_comb begin
    new_crc_val       = crc_old_i;
    
    for (int i = 0; i < DATA_W; i++) begin
      xor_crc         = new_crc_val[CRC_W-1] ^ data_i[i];
      new_crc_val     = xor_crc ? ((new_crc_val << 1) ^ CRC_POLY) : (new_crc_val << 1);
    end
  end

  assign crc_new_o = new_crc_val;
endmodule