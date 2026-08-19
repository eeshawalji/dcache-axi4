TOPLEVEL_LANG = verilog
SIM ?= verilator

BENCH ?= cache

ifeq ($(BENCH),axi_rd)
VERILOG_SOURCES  = $(PWD)/../hdl/axi_read_master.sv
VERILOG_SOURCES += $(PWD)/tb_axi_rd.sv
TOPLEVEL        = tb_axi_rd
COCOTB_TEST_MODULES ?= test_axi_rd
else ifeq ($(BENCH),axi_wr)
VERILOG_SOURCES  = $(PWD)/../hdl/axi_write_master.sv
VERILOG_SOURCES += $(PWD)/tb_axi_wr.sv
TOPLEVEL        = tb_axi_wr
COCOTB_TEST_MODULES ?= test_axi_wr
else ifeq ($(BENCH),axi_probe)
VERILOG_SOURCES = $(PWD)/tb_axi_probe.sv
TOPLEVEL        = tb_axi_probe
COCOTB_TEST_MODULES ?= test_axi_probe
else
VERILOG_SOURCES  = $(PWD)/../hdl/dcache_pkg.sv
VERILOG_SOURCES += $(PWD)/../hdl/tag_array.sv
VERILOG_SOURCES += $(PWD)/../hdl/data_array.sv
VERILOG_SOURCES += $(PWD)/../hdl/axi_read_master.sv
VERILOG_SOURCES += $(PWD)/../hdl/axi_write_master.sv
VERILOG_SOURCES += $(PWD)/../hdl/dcache.sv
VERILOG_SOURCES += $(PWD)/tb_top.sv
TOPLEVEL        = tb_top
COCOTB_TEST_MODULES ?= test_directed
EXTRA_ARGS += -GWAYS=1
endif

SIM_BUILD ?= sim_build_$(BENCH)

TRACE ?= 0
ifeq ($(TRACE),1)
EXTRA_ARGS += --trace-fst --trace-structs
endif
EXTRA_ARGS += --public-flat-rw -Wall -Wno-UNUSEDPARAM

include $(shell cocotb-config --makefiles)/Makefile.sim