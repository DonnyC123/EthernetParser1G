module ip_filter #(
  parameter IP_ADDR_W     = 32,
  parameter DATA_W        = 8,
  localparam FPGA_IP_ADDR  = 32'h10101010 
) (
  input   logic                 clk,
  input   logic                 rst,
  input   ip_fields_if.slave    ip_fields_if_i,
  input   logic [DATA_W-1:0]    ip_addr_i,
  output  data_valid_if.master  pass_ip_if_o
);

  localparam IP_ADDR_DEPTH = IP_ADDR_W / DATA_W;

  logic [DATA_W-1:0]    ip_addr_shift_reg         [IP_ADDR_DEPTH];
  logic [IP_ADDR_W-1:0] ip_addr;

  logic                 ip_dst_valid_shift_reg    [IP_ADDR_DEPTH];
  logic                 ip_src_valid_shift_reg    [IP_ADDR_DEPTH];
  logic                 option_or_data_shift_reg  [IP_ADDR_DEPTH];
  logic                 look_up_ip;
  logic                 insert_ip;

  logic                 ip_dst_valid;
  logic                 ip_dst_match_b;
  logic                 ip_dst_match_ff;
  
  logic                 pass_ip_b;
  logic                 pass_ip_ff;

  logic                 fpga_dst_ip;
  logic                 block_src_ip;

  shift_reg #(
    .DATA_W         (DATA_W),
    .PIPE_DEPTH     (IP_ADDR_DEPTH),
    .RST_EN         (0),
    .INCLUDE_DATA_IN(1)
  ) ip_shift_reg_inst (
    .clk            (clk),
    .rst            (rst),
    .data_i         (ip_addr_i),
    .data_o         (ip_addr_shift_reg)
  );

  assign ip_addr = {<<DATA_W{ip_addr_shift_reg}};

  shift_reg #(
    .DATA_W         (1),
    .PIPE_DEPTH     (IP_ADDR_DEPTH),
    .RST_EN         (1),
    .RST_VAL        (0),
    .INCLUDE_DATA_IN(1)
  ) ip_src_valid_shift_reg_inst (
    .clk            (clk),
    .rst            (rst),
    .data_i         (ip_fields_if_i.src_addr),
    .data_o         (ip_src_valid_shift_reg)
  );

  assign look_up_ip = &{ip_src_valid_shift_reg};
  
  shift_reg #(
    .DATA_W         (1),
    .PIPE_DEPTH     (IP_ADDR_DEPTH),
    .RST_EN         (0),
    .INCLUDE_DATA_IN(1)
  ) ip_dst_valid_shift_reg_inst (
    .clk            (clk),
    .rst            (rst),
    .data_i         (ip_fields_if_i.dst_addr),
    .data_o         (ip_dst_valid_shift_reg)
  );

  assign ip_dst_valid   = &{ip_dst_valid_shift_reg};
  assign ip_dst_match_b = (ip_addr == FPGA_IP_ADDR) && ip_dst_valid 
                        || ip_dst_match_ff && ip_fields_if_i.option_or_data;

  data_pipeline #(
    .DATA_W     (1),
    .PIPE_DEPTH (1),
    .RST_EN     (1),
    .RST_VAL    (0)
  ) ip_dst_match_data_pipeline_inst (
    .clk        (clk),
    .rst        (rst),
    .data_i     (ip_dst_match_b),
    .data_o     (ip_dst_match_ff)
  );

  shift_reg #(
    .DATA_W         (1),
    .PIPE_DEPTH     (IP_ADDR_DEPTH),
    .RST_EN         (0),
    .INCLUDE_DATA_IN(1)
  ) ip_data_valid_shift_reg_inst (
    .clk            (clk),
    .rst            (rst),
    .data_i         (ip_fields_if_i.option_or_data),
    .data_o         (option_or_data_shift_reg)
  );

  assign option_or_data_valid = &{option_or_data_shift_reg};
  assign insert_ip = option_or_data_valid && ip_dst_match_ff;

  ip_hash_controller #(
    .IP_ADDR_W            (IP_ADDR_W)
  ) ip_hash_controller_inst(
    .clk                  (clk),
    .rst                  (rst),
    .insert_val_i         (insert_ip),
    .look_up_val_i        (look_up_ip),
    .ip_addr_i            (ip_addr),
    .ip_addr_found_if_o   (block_ip_found_if)
  );
  
  always_comb begin
    fpga_dst_ip   = (ip_addr != FPGA_IP_ADDR) && ip_dst_valid;
    block_src_ip  = block_ip_found_if.data && block_ip_found_if.valid;
  
    if (ip_fields_if_i.idle) begin
      pass_ip_b   = 1'b1;  
    end else begin
      pass_ip_b   = pass_ip_ff && !fpga_dst_ip && !block_src_ip; 
    end
  end

  data_pipeline #(
    .DATA_W     (1),
    .PIPE_DEPTH (1),
    .RST_EN     (0),
    .RST_VAL    (0)
  ) pass_ip_pipeline_inst (
    .clk        (clk),
    .rst        (rst),
    .data_i     (pass_ip_b),
    .data_o     (pass_ip_ff)
  );

  assign pass_ip_if_o.data  = pass_ip_b;
  assign pass_ip_if_o.valid = ip_dst_valid;

endmodule