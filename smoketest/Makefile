SIM           ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES += $(PWD)/hdl/adder.sv
TOPLEVEL       = adder
MODULE         = tb.test_adder
EXTRA_ARGS    += --trace --trace-fst --trace-structs
include $(shell cocotb-config --makefiles)/Makefile.sim