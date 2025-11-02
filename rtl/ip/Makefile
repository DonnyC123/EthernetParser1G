include rtl/utils/if/Makefile
include rtl/utils/Makefile

include rtl/shared_modules/Makefile
include rtl/ip/if/Makefile
include rtl/ip/pkg/Makefile

RTL_IP_SRCS += $(RTL_UTILS_SRCS)
RTL_IP_SRCS += $(RTL_UTILS_IF_SRCS)

RTL_IP_SRCS += $(RTL_IP_IF_SRCS)

RTL_IP_SRCS += $(wildcard rtl/ip/ipv4_parser.sv)
RTL_IP_SRCS += $(wildcard rtl/ip/ip_type_arbiter.sv)
RTL_IP_SRCS += $(wildcard rtl/ip/ip_filter.sv)