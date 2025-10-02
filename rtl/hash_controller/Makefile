include rtl/utils/if/Makefile
include rtl/utils/Makefile

include rtl/shared_modules/Makefile

RTL_HASH_CNTRL_SRCS += $(RTL_UTILS_SRCS)
RTL_HASH_CNTRL_SRCS += $(RTL_UTILS_IF_SRCS)

RTL_HASH_CNTRL_SRCS += $(RTL_SHARED_SRCS)

RTL_HASH_CNTRL_SRCS += $(wildcard rtl/hash_controller/xor_reduction.sv)
RTL_HASH_CNTRL_SRCS += $(wildcard rtl/hash_controller/hash_table_pkg.sv)
RTL_HASH_CNTRL_SRCS += $(wildcard rtl/hash_controller/hash_table.sv)
RTL_HASH_CNTRL_SRCS += $(wildcard rtl/hash_controller/hash_controller_ip.sv)