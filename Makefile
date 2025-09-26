PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))

SIM = verilator
TOPLEVEL_LANG = verilog
VERILATOR_FLAGS += --build-dep-bin

# Require TEST_PATH to be explicitly set - no default
ifndef TEST_PATH
$(error TEST_PATH must be defined. Example: make TEST_PATH=testbenches/rx/mac/Makefile)
endif

include $(TEST_PATH)

export PYTHONPATH := $(PROJECT_ROOT)

TRACE ?= 0

ifeq ($(TRACE),1)
    EXTRA_ARGS += --trace-fst --trace-structs
    SIM_ARGS += --trace --trace-file dump.fst
    $(info Waveform tracing enabled - output: dump.fst)
else
    $(info Waveform tracing disabled - set TRACE=1 to enable)
endif

export LDLIBS := -lpthread

include $(shell cocotb-config --makefiles)/Makefile.sim

trace:
	$(MAKE) TRACE=1 $(filter-out trace,$(MAKECMDGOALS))
%:
	@: