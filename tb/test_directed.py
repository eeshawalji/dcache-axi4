import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles

@cocotb.test()
async def test_reset(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst_n.value     = 0
    dut.req_valid.value = 0
    dut.req_we.value    = 0
    dut.req_addr.value  = 0
    dut.req_wdata.value = 0
    dut.req_be.value    = 0

    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 5)

    assert dut.req_ready.value == 1, "cache should accept requests after reset"

async def reset_dut(dut): 
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    dut.rst_n.value     = 0
    dut.req_valid.value = 0
    dut.req_we.value    = 0
    dut.req_addr.value  = 0
    dut.req_wdata.value = 0
    dut.req_be.value    = 0
    await ClockCycles(dut.clk, 5)
    dut.rst_n.value = 1
    await ClockCycles(dut.clk, 2)


async def cpu_read(dut, addr):
    dut.req_valid.value = 1
    dut.req_addr.value  = addr
    dut.req_we.value    = 0
    dut.req_be.value    = 0xF

    await RisingEdge(dut.clk)
    while dut.req_ready.value != 1:
        await RisingEdge(dut.clk)

    dut.req_valid.value = 0

    while dut.resp_valid.value != 1:
        await RisingEdge(dut.clk)
    return int(dut.resp_rdata.value)


async def cpu_write(dut, addr, data):
    dut.req_valid.value = 1
    dut.req_addr.value  = addr
    dut.req_we.value    = 1
    dut.req_be.value    = 0xF
    dut.req_wdata.value = data

    await RisingEdge(dut.clk)
    while dut.req_ready.value != 1:
        await RisingEdge(dut.clk)

    dut.req_valid.value = 0

@cocotb.test()
async def test_read_miss_then_hit(dut):
    await reset_dut(dut)

    # backdoor-load one line into memory
    dut.u_mem.mem[2].value = 0xDEADBEEF

    d0 = await cpu_read(dut, 0x40)        # miss
    t0 = cocotb.utils.get_sim_time("ns")
    d1 = await cpu_read(dut, 0x40)        # hit
    t1 = cocotb.utils.get_sim_time("ns")
    assert t1 - t0 < 50, "second access took too long — did it hit?"
    assert d0 == 0xDEADBEEF, f"miss returned {d0:#x}"
    assert d1 == d0

@cocotb.test()
async def test_write_then_read(dut):
    await reset_dut(dut)
    dut.u_mem.mem[2].value = 0

    await cpu_read(dut, 0x40)                    # allocate the line
    await cpu_write(dut, 0x40, 0xCAFEBABE)
    d = await cpu_read(dut, 0x40)
    assert d == 0xCAFEBABE, f"got {d:#x}"


@cocotb.test()
async def test_conflict_evict(dut):
    await reset_dut(dut)
    dut.u_mem.mem[2].value    = 0x11111111
    dut.u_mem.mem[2 + 256].value = 0x22222222   # same index, different tag

    assert await cpu_read(dut, 0x40)   == 0x11111111
    assert await cpu_read(dut, 0x2040) == 0x22222222
    assert await cpu_read(dut, 0x40)   == 0x11111111   # refetched after eviction


@cocotb.test()
async def test_streaming(dut):
    await reset_dut(dut)
    for line in range(4):
        dut.u_mem.mem[line].value = line
    for word in range(32):                       # 4 lines × 8 words
        await cpu_read(dut, word * 4)
