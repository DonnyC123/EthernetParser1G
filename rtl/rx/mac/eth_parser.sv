module eth_parser
  import eth_parser_pkg::*;
  import mac_if_pkg::*;
(
  input logic                         clk,
  input logic                         rst,
  input gmii_if.slave                 gmii_if_rx_i,
  output eth_fields_if.master         eth_fields_if_o,
  output eth_parser_error_if.master   eth_parser_error_if_o
);

  parser_state_t        parser_state_b;
  parser_state_t        parser_state_ff;

  logic [COUNTER_W-1:0] byte_counter_b;
  logic [COUNTER_W-1:0] byte_counter_ff;

  always_comb begin
    byte_counter_b                            = '0;
    parser_state_b                            = parser_state_ff;

    eth_parser_error_if_o.preamble_sfd  = '0;
    eth_parser_error_if_o.incomplete    = '0;

    if (!gmii_if_rx_i.valid && parser_state_ff != IDLE 
      && parser_state_ff != DATA_OR_CRC_PARSE) begin
    
      parser_state_b                    = IDLE;
      eth_parser_error_if_o.incomplete  = 1'b1;

    end else begin
      unique case (parser_state_ff)

        IDLE: begin
          if (gmii_if_rx_i.valid) begin
            byte_counter_b                      = byte_counter_ff + 1;
            parser_state_b                      = PREAMBLE_PARSE;
            eth_parser_error_if_o.preamble_sfd  = preamble_error(gmii_if_rx_i.data);
          end
        end
      
        PREAMBLE_PARSE: begin
          eth_parser_error_if_o.preamble_sfd    = preamble_error(gmii_if_rx_i.data);

          byte_counter_b                              = byte_counter_ff + 1;
          if (byte_counter_ff[PREAMBLE_COUNTER_W-1:0] == PREAMBLE_LEN-1) begin
            parser_state_b                            = SFD_PARSE;
            byte_counter_b                            = '0;
          end
        end

        SFD_PARSE: begin
          eth_parser_error_if_o.preamble_sfd    = sfd_error(gmii_if_rx_i.data);
          parser_state_b                            = DEST_MAC_PARSE;
          byte_counter_b                            = '0;
        end

        DEST_MAC_PARSE: begin
          byte_counter_b    = byte_counter_ff + 1;
          if (byte_counter_ff[MAC_COUNTER_W-1:0] == MAC_LEN-1) begin
            parser_state_b  = SRC_MAC_PARSE;
            byte_counter_b  = '0;
          end
        end

        SRC_MAC_PARSE: begin
          byte_counter_b    = byte_counter_ff + 1;
          if (byte_counter_ff[MAC_COUNTER_W-1:0] == MAC_LEN-1) begin
            parser_state_b  = ETHER_TYPE_PARSE;
            byte_counter_b  = '0;
          end
        end

        ETHER_TYPE_PARSE: begin
          byte_counter_b    = byte_counter_ff + 1;
          if (byte_counter_ff[ETHER_TYPE_W-1:0] == ETHER_TYPE_W'(ETHER_TYPE_LEN-1)) begin
            parser_state_b  = DATA_OR_CRC_PARSE;
            byte_counter_b  = '0;
          end
        end

        DATA_OR_CRC_PARSE: begin
          byte_counter_b                      = byte_counter_ff + 1;
          if (byte_counter_ff == MAX_DATA_OR_CRC_LEN-1 || !gmii_if_rx_i.valid) begin
            parser_state_b                    = IDLE;
            eth_parser_error_if_o.incomplete  = byte_counter_ff < MIN_DATA_OR_CRC_LEN-1;
            byte_counter_b                    = '0;
          end
        end

      endcase
    end
  end

  always_comb begin
    eth_fields_if_o.is_preamble_or_sfd = parser_state_ff == PREAMBLE_PARSE 
                                                  || parser_state_ff == SFD_PARSE;
                                                          
    eth_fields_if_o.is_src_mac         = parser_state_ff == SRC_MAC_PARSE;
    eth_fields_if_o.is_dst_mac         = parser_state_ff == DEST_MAC_PARSE;
    eth_fields_if_o.is_ether_type      = parser_state_ff == ETHER_TYPE_PARSE;
    eth_fields_if_o.is_payload_or_crc  = parser_state_ff == DATA_OR_CRC_PARSE && gmii_if_rx_i.valid;
  end  
  
  always_ff @(posedge clk) begin
    if (rst) begin
      parser_state_ff <= IDLE; 
      byte_counter_ff <= '0;
    end else begin
      parser_state_ff <= parser_state_b; 
      byte_counter_ff <= byte_counter_b;
    end
  end
endmodule