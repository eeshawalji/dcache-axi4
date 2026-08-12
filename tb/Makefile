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

EXTRA_ARGS += --trace --trace-structs --public-flat-rw
EXTRA_ARGS += -Wall -Wno-UNUSEDPARAM -GWAYS=1

include $(shell cocotb-config --makefiles)/Makefile.sim
