
include rtl/rx/mac/Makefile

# Set the top-level module for this test.
TOPLEVEL = rx_mac_top_test

# Define the Python test module.
MODULE = testbenches.rx.mac.rx_mac_tests

# Combine all Verilog sources needed for this test.
# This includes sources from rtl/rx/mac, plus any other necessary ones.
VERILOG_SRCS += $(RTL_MAC_SRCS)
VERILOG_SRCS += testbenches/rx/mac/rx_mac_top_test.sv