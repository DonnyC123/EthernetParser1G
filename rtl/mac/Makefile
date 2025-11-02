include rtl/utils/if/Makefile
include rtl/utils/Makefile

include rtl/shared_modules/Makefile

include rtl/mac/if/Makefile

RTL_RX_MAC_SRCS += $(RTL_UTILS_SRCS)
RTL_RX_MAC_SRCS += $(RTL_UTILS_IF_SRCS)
RTL_RX_MAC_SRCS += $(RTL_SHARED_SRCS)

RTL_RX_MAC_SRCS += $(wildcard rtl/utils/xilinx_primatives/IDDR.v)

RTL_RX_MAC_SRCS += $(RTL_RX_MAC_PKG_SRCS)
RTL_RX_MAC_SRCS += $(RTL_RX_MAC_IF_SRCS)

RTL_RX_MAC_SRCS += $(wildcard rtl/mac/invalidate_packet.sv)
RTL_RX_MAC_SRCS += $(wildcard rtl/mac/iddr_sim.sv)
RTL_RX_MAC_SRCS += $(wildcard rtl/mac/ddr_sdr_converter.sv)
RTL_RX_MAC_SRCS += $(wildcard rtl/mac/fcs_checker.sv)
RTL_RX_MAC_SRCS += $(wildcard rtl/mac/eth_parser.sv)
RTL_RX_MAC_SRCS += $(wildcard rtl/mac/rx_mac_top.sv)