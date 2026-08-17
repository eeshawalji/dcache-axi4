"""Week 3, step 4 — the AXI write master, tested standalone.

The reverse of step 3. There, we preloaded the model by backdoor and read the
data out through the bus. Here we push data in through the bus and check it by
backdoor: axi_ram.read() is the reference, not the stimulus.
"""

import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep

from cocotbext.axi import AxiWriteBus, AxiRamWrite

CLK_NS     = 10
RAM_SIZE   = 2**16
LINE_BYTES = 32
AXI_DATA_W = 64
BEATS      = (LINE_BYTES * 8) // AXI_DATA_W
TIMEOUT    = 500


def _resolve(sig):
    try:
        return int(sig.value)
    except ValueError:
        return None


def random_pause(rate=0.3, seed=0):
    rnd = random.Random(seed)
    while True:
        yield rnd.random() < rate


async def setup(dut, backpressure_seed=None):
    dut.rst_n.value     = 0
    dut.req_valid.value = 0
    dut.req_addr.value  = 0
    dut.req_line.value  = 0

    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())

    axi_ram = AxiRamWrite(
        AxiWriteBus.from_prefix(dut, "m_axi"),
        dut.clk,
        dut.rst_n,
        reset_active_level=False,
        size=RAM_SIZE,
    )

    # Three channels to stress, not two: AWREADY, WREADY and BVALID.
    if backpressure_seed is not None:
        s = backpressure_seed
        axi_ram.aw_channel.set_pause_generator(random_pause(0.3, s))
        axi_ram.w_channel.set_pause_generator(random_pause(0.3, s + 1000))
        axi_ram.b_channel.set_pause_generator(random_pause(0.3, s + 2000))

    for _ in range(4):
        await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    for _ in range(4):
        await RisingEdge(dut.clk)

    return axi_ram


def line_pattern(addr):
    """Self-identifying: byte value encodes which line and which offset."""
    return bytes(((addr >> 5) + i) & 0xFF for i in range(LINE_BYTES))


async def write_line(dut, addr, payload):
    """Push one line out and wait for completion. Returns resp_error."""

    async def watch_resp():
        for _ in range(TIMEOUT):
            await RisingEdge(dut.clk)
            await ReadOnly()
            hit = _resolve(dut.resp_valid) == 1
            err = _resolve(dut.resp_error) if hit else None
            await NextTimeStep()
            if hit:
                return err
        raise AssertionError(f"no resp_valid within {TIMEOUT} cycles for 0x{addr:08x}")

    watcher = cocotb.start_soon(watch_resp())

    dut.req_addr.value  = addr
    dut.req_line.value  = int.from_bytes(payload, "little")
    dut.req_valid.value = 1
    for _ in range(TIMEOUT):
        await RisingEdge(dut.clk)
        await ReadOnly()
        accepted = _resolve(dut.req_ready) == 1
        await NextTimeStep()
        if accepted:
            dut.req_valid.value = 0
            break
    else:
        raise AssertionError("req_ready never asserted")

    return await watcher


@cocotb.test()
async def test_single_line(dut):
    """One writeback, zero-latency slave."""
    axi_ram = await setup(dut)

    addr    = 0x1000
    payload = line_pattern(addr)

    err = await write_line(dut, addr, payload)
    assert err == 0, "resp_error set on a write that should have succeeded"

    got = bytes(axi_ram.read(addr, LINE_BYTES))
    assert got == payload, f"\n  got {got.hex()}\n  exp {payload.hex()}"

    dut._log.info("single line OK")


@cocotb.test()
async def test_neighbours_untouched(dut):
    """The burst must write exactly LINE_BYTES, not one byte more."""
    axi_ram = await setup(dut)

    addr = 0x2000
    # Fill a wide window with a marker, then write one line into the middle.
    axi_ram.write(addr - LINE_BYTES, b"\xA5" * (LINE_BYTES * 3))

    payload = line_pattern(addr)
    await write_line(dut, addr, payload)

    before = bytes(axi_ram.read(addr - LINE_BYTES, LINE_BYTES))
    target = bytes(axi_ram.read(addr, LINE_BYTES))
    after  = bytes(axi_ram.read(addr + LINE_BYTES, LINE_BYTES))

    assert before == b"\xA5" * LINE_BYTES, "wrote below the line -- burst too long?"
    assert target == payload,              "line contents wrong"
    assert after  == b"\xA5" * LINE_BYTES, "wrote above the line -- WLAST too late?"

    dut._log.info("neighbours untouched OK")


@cocotb.test()
async def test_many_lines_backpressure(dut):
    """Repeated writebacks with AW, W and B all stalling randomly."""
    axi_ram = await setup(dut, backpressure_seed=13)

    addrs = [0x0000, 0x0020, 0x1000, 0x1020, 0x2000, 0x3FE0, 0x0040]

    for addr in addrs:
        err = await write_line(dut, addr, line_pattern(addr))
        assert err == 0, f"resp_error at 0x{addr:08x}"

    # Check every line afterwards, so a later write clobbering an earlier one
    # is caught rather than hidden by checking as we go.
    for addr in addrs:
        got = bytes(axi_ram.read(addr, LINE_BYTES))
        exp = line_pattern(addr)
        assert got == exp, f"addr 0x{addr:08x}\n  got {got.hex()}\n  exp {exp.hex()}"

    dut._log.info("%d lines OK under backpressure", len(addrs))


@cocotb.test()
async def test_random_lines(dut):
    """Random line-aligned addresses, random contents, checked at the end."""
    axi_ram = await setup(dut, backpressure_seed=29)
    rnd = random.Random(4)

    written = {}
    for _ in range(30):
        addr = rnd.randrange(0, RAM_SIZE - LINE_BYTES, LINE_BYTES)
        payload = bytes(rnd.randrange(256) for _ in range(LINE_BYTES))
        err = await write_line(dut, addr, payload)
        assert err == 0, f"resp_error at 0x{addr:08x}"
        written[addr] = payload      # later writes to the same line win

    for addr, exp in written.items():
        got = bytes(axi_ram.read(addr, LINE_BYTES))
        assert got == exp, f"addr 0x{addr:08x}\n  got {got.hex()}\n  exp {exp.hex()}"

    dut._log.info("%d random lines OK", len(written))