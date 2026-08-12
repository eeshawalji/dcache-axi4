import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

@cocotb.test()
async def test_add(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    dut.a.value = 3
    dut.b.value = 4
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    assert dut.y.value == 7, f"got {dut.y.value}"