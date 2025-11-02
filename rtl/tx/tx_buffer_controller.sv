module tx_buffer_controller #(
  parameter RGMII_W = 8
) (
  input logic           clk,
  input logic           rst,          
  data_valid_if.slave   rgmii_if_rx,
  ip_fields_if.slave    ip_fields_if,
  data_valid_if.slave   pass_ip_if,
  data_valid_if.master  rgmii_if_tx
);

  fifo_rd_if #(
    .DATA_W(RGMII_W) 
  ) fifo_rd_if;

  fifo_wr_if #(
    .DATA_W(RGMII_W) 
  ) fifo_wr_if;

  assign fifo_wr_if.wr_en = rgmii_if_rx.valid;
  assign fifo_wr_if.data  = rgmii_if_rx.data;

  fifo #(
    .DATA_W           (RGMII_W),
    .LOG2_FIFO_DEPTH  (6) // Needs to be >= time till dst ip in ip 6
  ) tx_buffer_fifo_inst (
    .clk              (clk),
    .rst              (rst),
    .fifo_wr_if.slave (fifo_wr_if.slave),
    .fifo_rd_if.slave (fifo_rd_if.slave)
  );

  typedef enum logic [2:0] {  
    BUFFER_INPUT        = 3'b001,
    TX_BUFFER           = 3'b010,
    TX_BUFFER_REMAINDER = 3'b100, 
  } tx_buffer_state_t;

  tx_buffer_state_t     tx_buffer_state_b;
  tx_buffer_state_t     tx_buffer_state_ff;

  logic                 tx_buffer_b;
  logic                 tx_buffer_ff;

  logic [TX_BUFF_COUNT_W-1:0] tx_buffer_count_b;
  logic [TX_BUFF_COUNT_W-1:0] tx_buffer_count_ff;

  parameter OTHER_ETH_DELAY = ; 
  parameter IPV4_DELAY      = ;
  parameter IPV6_DELAY      = ;
  
  always_comb begin
    tx_buffer_b       = 0;
    tx_buffer_state_b = tx_buffer_state_ff;
    
    tx_buffer_count_b = tx_buffer_count_ff;
    fifo_rd_if.rd_en  = 0;

    case(tx_buffer_state_b)

      BUFFER_INPUT: begin
        unique0 if (pass_ip_if.valid) begin
          tx_buffer_state_b   = TX_BUFFER;
          
          tx_buffer_count_b   = IPV4_DELAY;
          if (.isipv6) begin
            tx_buffer_count_b = IPV6_DELAY;
          end

          tx_buffer_b         = pass_ip_if.found;
          fifo_rd_if.rd_en    = 1'b1;
        
        end else if (non_ip_packet) begin
          tx_buffer_state_b   = TX_BUFFER;

          tx_buffer_count_b   = OTHER_ETH_DELAY;
          tx_buffer_b         = 1'b1;
          fifo_rd_if.rd_en    = 1'b1;
        end
      end

      TX_BUFFER: begin // When we have the dst addr for ip or its not ip
        fifo_rd_if.rd_en      = 1'b1;
        tx_buffer_b           = tx_buffer_ff;

        if (!rgmii_if_rx.valid) begin
          tx_buffer_state_b   = TX_BUFFER_REMAINDER;
        end
      end

      TX_BUFFER_REMAINDER: begin
        fifo_rd_if.rd_en      = 1'b1;
        tx_buffer_b           = tx_buffer_ff;
        tx_buffer_count_b     = tx_buffer_count_ff - 1;

        if (tx_buffer_count_ff == '0) begin
          tx_buffer_state_b   = BUFFER_INPUT;
        end
      end

    endcase
  end

endmodule