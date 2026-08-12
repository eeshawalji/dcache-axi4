TOPLEVEL_LANG = verilog
SIM ?= verilator

VERILOG_SOURCES  = $(PWD)/../hdl/dcache_pkg.sv
VERILOG_SOURCES += $(PWD)/../hdl/tag_array.sv
VERILOG_SOURCES += $(PWD)/../hdl/data_array.sv
VERILOG_SOURCES += $(PWD)/../hdl/dcache.sv
VERILOG_SOURCES += $(PWD)/dumb_mem.sv
VERILOG_SOURCES += $(PWD)/tb_top.sv

TOPLEVEL = tb_top
COCOTB_TEST_MODULES ?= test_directed

TRACE ?= 0
ifeq ($(TRACE),1)
EXTRA_ARGS += --trace-fst --trace-structs
endif
EXTRA_ARGS += --public-flat-rw -Wall -Wno-UNUSEDPARAM -GWAYS=1

include $(shell cocotb-config --makefiles)/Makefile.sim
