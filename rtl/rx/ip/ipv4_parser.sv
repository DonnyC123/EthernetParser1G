module ipv4_parser #(
  parameter DATA_W  = 8,
) (
  input   logic                 clk,
  input   logic                 rst,
  input   data_valid_if.slave   rx_data_if_i,
  input   eth_fields_if.slave   eth_fields_if_i,
  output  ipv4_fields_if.master ipv4_fields_if_o
);

  parser_state_t        parser_state_b;
  parser_state_t        parser_state_ff;
  
  logic [COUNTER_W-1:0] byte_counter_b;
  logic [COUNTER_W-1:0] byte_counter_ff;

  always_comb begin
    byte_counter_b = '0;
    parser_state_b = parser_state_ff;
  
    case(parser_state_ff)
      IDLE_OR_VERSION_HLEN: begin
        if (rx_data_if_i.valid && eth_fields_if_i.is_payload_or_fcs) begin
          parser_state_b  = TYPE_OF_SERVICE;
        end
      end
      TYPE_OF_SERVICE: begin
        parser_state_b    = TOTAL_LN;
      end
      TOTAL_LN: begin
        byte_counter_b    = byte_counter_ff + 1;
        if (byte_counter_ff[0] == TOTAL_LN_BYTES-1) begin
          parser_state_b  = IDENTIFICATION;
          byte_counter_b  = '0;
        end
      end
      IDENTIFICATION: begin
        byte_counter_b    = byte_counter_ff + 1;
        if (byte_counter_ff[0] == IDENTIFICATION_BYTES-1) begin
          parser_state_b  = FRAGMENT_BITS;
          byte_counter_b  = '0;
        end
      end
      FRAGMENT_BITS: begin
        byte_counter_b    = byte_counter_ff + 1;
        if (byte_counter_ff[0] == FRAGMENT_BITS_BYTES-1) begin
          parser_state_b  = TTL;
          byte_counter_b  = '0;
        end
      end
      TTL: begin
        parser_state_b    = PROTOCOL;
      end
      PROTOCOL: begin
        parser_state_b    = HEADER_CHECK_SUM;
      end
      HEADER_CHECK_SUM: begin
        byte_counter_b    = byte_counter_ff + 1;
        if (byte_counter_ff == HEADER_CHECK_SUM_BYTES-1) begin
          parser_state_b  = SRC_IP;
          byte_counter_b  = '0;
        end
      end
      SRC_IP: begin
        byte_counter_b    = byte_counter_ff + 1;
        if (byte_counter_ff == IP_BYTES-1) begin
          parser_state_b  = DST_IP;
          byte_counter_b  = '0;
        end
      end
      DST_IP: begin
        byte_counter_b    = byte_counter_ff + 1;
        if (byte_counter_ff == IP_BYTES-1) begin
          parser_state_b  = OPTION_OR_DATA;
          byte_counter_b  = '0;
        end
      end
      OPTION_OR_DATA: begin
        if (!rx_data_if_i.valid) begin
          parser_state_b  = IDLE_OR_VERSION_HLEN;
        end
      end
    endcase
  end

  always_comb begin
    ipv4_fields_if_o.src_addr = parser_state_ff == SRC_IP;
    ipv4_fields_if_o.dst_addr = parser_state_ff == DST_IP;
  end
  
  always_ff @(posedge clk) begin
    if (rst) begin
      parser_state_ff <= '0;
      byte_counter_ff <= '0;
    end else begin
      parser_state_ff <= parser_state_b;
      byte_counter_ff <= byte_counter_b;
    end
  end

endmodule