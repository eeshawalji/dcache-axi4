"""Week 3, step 3 — the AXI read master, tested standalone.

ar_send and r_collect are gone. The RTL does that now. This test only drives
the cache-facing request and checks the assembled line, which is much closer
to the week-2 CpuDriver than to the hand-driven probe.
"""

import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep

from cocotbext.axi import AxiReadBus, AxiRamRead

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
    dut.rst_n.value    = 0
    dut.req_valid.value = 0
    dut.req_addr.value  = 0

    cocotb.start_soon(Clock(dut.clk, CLK_NS, unit="ns").start())

    axi_ram = AxiRamRead(
        AxiReadBus.from_prefix(dut, "m_axi"),
        dut.clk,
        dut.rst_n,
        reset_active_level=False,
        size=RAM_SIZE,
    )

    # Channels sit directly on AxiRamRead -- no .read_if indirection.
    if backpressure_seed is not None:
        axi_ram.ar_channel.set_pause_generator(random_pause(0.3, backpressure_seed))
        axi_ram.r_channel.set_pause_generator(random_pause(0.3, backpressure_seed + 1000))

    for _ in range(4):
        await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    for _ in range(4):
        await RisingEdge(dut.clk)

    return axi_ram


def line_pattern(addr):
    """Self-identifying: byte value encodes which line and which offset."""
    return bytes(((addr >> 5) + i) & 0xFF for i in range(LINE_BYTES))


async def fetch_line(dut, addr):
    """Issue one request, wait for the response, return the line as an int.

    The response watcher starts BEFORE the request is issued -- same lesson as
    the beat-0 race in step 1.
    """
    async def watch_resp():
        for _ in range(TIMEOUT):
            await RisingEdge(dut.clk)
            await ReadOnly()
            hit  = _resolve(dut.resp_valid) == 1
            line = _resolve(dut.resp_line) if hit else None
            await NextTimeStep()
            if hit:
                return line
        raise AssertionError(f"no resp_valid within {TIMEOUT} cycles for 0x{addr:08x}")

    watcher = cocotb.start_soon(watch_resp())

    dut.req_addr.value  = addr
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
    """One fetch, zero-latency slave."""
    axi_ram = await setup(dut)

    addr    = 0x1000
    payload = line_pattern(addr)
    axi_ram.write(addr, payload)

    line = await fetch_line(dut, addr)
    exp  = int.from_bytes(payload, "little")
    assert line == exp, f"\n  got 0x{line:064x}\n  exp 0x{exp:064x}"

    dut._log.info("single line OK")


@cocotb.test()
async def test_many_lines_backpressure(dut):
    """Repeated fetches with ARREADY and RVALID stalling randomly."""
    axi_ram = await setup(dut, backpressure_seed=7)

    addrs = [0x0000, 0x0020, 0x1000, 0x1020, 0x2000, 0x3FE0, 0x0040]
    for addr in addrs:
        axi_ram.write(addr, line_pattern(addr))

    for addr in addrs:
        line = await fetch_line(dut, addr)
        exp  = int.from_bytes(line_pattern(addr), "little")
        assert line == exp, (
            f"addr 0x{addr:08x}\n  got 0x{line:064x}\n  exp 0x{exp:064x}"
        )

    dut._log.info("%d lines OK under backpressure", len(addrs))


@cocotb.test()
async def test_repeated_fetches(dut):
    """req_valid held high across consecutive requests."""
    axi_ram = await setup(dut, backpressure_seed=11)

    addrs = [0x1000 + 0x20 * i for i in range(8)]
    for addr in addrs:
        axi_ram.write(addr, line_pattern(addr))

    for addr in addrs:
        line = await fetch_line(dut, addr)
        assert line == int.from_bytes(line_pattern(addr), "little"), \
            f"mismatch at 0x{addr:08x}"

    dut._log.info("%d back-to-back fetches OK", len(addrs))