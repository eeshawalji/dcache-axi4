"""Week 3, step 1 — AXI read burst, driven by hand.

Two tests:
  1a  test_slave_comes_up    : AxiRam binds, resets, offers ARREADY.
  1b  test_single_burst_read : one 4-beat INCR read, every signal driven manually.

No AxiMaster, no cache RTL. The point is to see the handshakes.
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep

from cocotbext.axi import AxiBus, AxiRam
import random

# ---- configuration, matching hdl/dcache.sv defaults ----
CLK_NS     = 10
RAM_SIZE   = 2**16          # 64 KiB; AxiRam wraps addresses modulo this
LINE_BYTES = 32
AXI_DATA_W = 64
BEATS      = (LINE_BYTES * 8) // AXI_DATA_W      # 4
ARSIZE     = (AXI_DATA_W // 8).bit_length() - 1  # log2(8) = 3
BURST_INCR = 0b01
RESP_OKAY  = 0b00

ADDR       = 0x1000         # line-aligned: bottom 5 bits are zero
TIMEOUT    = 200            # cycles; a hang should fail, not run forever


def _resolve(sig):
    """Return int, or None if the signal has X/Z bits. (Same helper as driver.py.)"""
    try:
        return int(sig.value)
    except ValueError:
        return None


def park_master(dut):
    """Drive every master-side signal to a quiet, non-X state.

    AxiRam owns the slave side (ARREADY, RVALID, RDATA, RLAST, ...) so we
    must not touch those. Everything below is ours.
    """
    dut.m_axi_awid.value    = 0
    dut.m_axi_awaddr.value  = 0
    dut.m_axi_awlen.value   = 0
    dut.m_axi_awsize.value  = 0
    dut.m_axi_awburst.value = 0
    dut.m_axi_awlock.value  = 0
    dut.m_axi_awcache.value = 0
    dut.m_axi_awprot.value  = 0
    dut.m_axi_awvalid.value = 0

    dut.m_axi_wdata.value   = 0
    dut.m_axi_wstrb.value   = 0
    dut.m_axi_wlast.value   = 0
    dut.m_axi_wvalid.value  = 0

    dut.m_axi_bready.value  = 0

    dut.m_axi_arid.value    = 0
    dut.m_axi_araddr.value  = 0
    dut.m_axi_arlen.value   = 0
    dut.m_axi_arsize.value  = 0
    dut.m_axi_arburst.value = 0
    dut.m_axi_arlock.value  = 0
    dut.m_axi_arcache.value = 0
    dut.m_axi_arprot.value  = 0
    dut.m_axi_arvalid.value = 0

    dut.m_axi_rready.value  = 0


async def setup(dut):
    """Start the clock, build the slave model, pulse reset. Returns the AxiRam."""
    dut.rst_n.value = 0
    park_master(dut)

    cocotb.start_soon(Clock(dut.clk, CLK_NS, units="ns").start())

    # reset_active_level=False: our reset is active LOW.
    axi_ram = AxiRam(
        AxiBus.from_prefix(dut, "m_axi"),
        dut.clk,
        dut.rst_n,
        reset_active_level=False,
        size=RAM_SIZE,
    )

    for _ in range(4):
        await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    for _ in range(4):
        await RisingEdge(dut.clk)

    return axi_ram


# =====================================================================
# 1a
# =====================================================================

@cocotb.test()
async def test_slave_comes_up(dut):
    """Names bind, reset polarity is right, slave is alive."""
    axi_ram = await setup(dut)

    assert _resolve(dut.m_axi_arready) == 1, "slave never asserted ARREADY after reset"
    assert _resolve(dut.m_axi_rvalid) == 0,  "slave asserted RVALID with no read outstanding"

    # Backdoor access: plain Python slicing on the model's byte array.
    # No bus traffic, no clock edges. This is the shadow-memory preload.
    axi_ram.write(ADDR, bytes(range(LINE_BYTES)))
    assert axi_ram.read(ADDR, LINE_BYTES) == bytes(range(LINE_BYTES))

    dut._log.info("Step 1a OK: bus bound, reset polarity correct, ARREADY high.")


# =====================================================================
# 1b
# =====================================================================

async def ar_send(dut, addr, arlen, arsize, arburst, arid=0):
    """Phase 1: one AR handshake. Returns the number of cycles it took."""

    # Drive the whole request up front. We do NOT consult ARREADY to decide
    # whether to assert ARVALID -- that dependency is forbidden and deadlocks.
    dut.m_axi_arid.value    = arid
    dut.m_axi_araddr.value  = addr
    dut.m_axi_arlen.value   = arlen
    dut.m_axi_arsize.value  = arsize
    dut.m_axi_arburst.value = arburst
    dut.m_axi_arvalid.value = 1

    for cycle in range(TIMEOUT):
        await RisingEdge(dut.clk)
        await ReadOnly()
        accepted = _resolve(dut.m_axi_arready) == 1
        await NextTimeStep()

        # Payload stays stable while ARVALID is high: we touch nothing here.
        if accepted:
            dut.m_axi_arvalid.value = 0
            return cycle + 1

    raise AssertionError(
        "ARREADY never asserted -- slave never accepted the address. "
        "Check the slave came out of reset."
    )


async def r_collect(dut, max_beats):
    """Phase 2: collect R beats until RLAST. Returns a list of (data, resp, rid)."""

    # Ready for the entire burst. Asserting this earlier would also be legal;
    # asserting it late cannot lose a beat, because RVALID must hold until
    # the handshake completes.
    dut.m_axi_rready.value = 1

    beats = []
    idle = 0
    for _ in range(TIMEOUT):
        await RisingEdge(dut.clk)
        await ReadOnly()
        got = _resolve(dut.m_axi_rvalid) == 1
        if got:
            data = _resolve(dut.m_axi_rdata)
            resp = _resolve(dut.m_axi_rresp)
            rid  = _resolve(dut.m_axi_rid)
            last = _resolve(dut.m_axi_rlast)
        await NextTimeStep()

        if not got:
            idle += 1
            continue                    # slave had nothing this cycle; not an error

        beats.append((data, resp, rid))

        if len(beats) > max_beats:
            dut.m_axi_rready.value = 0
            raise AssertionError(
                f"more than {max_beats} beats arrived and RLAST never asserted "
                f"-- ARLEN was probably too large"
            )

        if last:
            dut.m_axi_rready.value = 0
            return beats, idle

    dut.m_axi_rready.value = 0
    raise AssertionError(
        f"timed out after {len(beats)} beat(s); RLAST never seen. "
        f"Check ARLEN and that RREADY was asserted."
    )


@cocotb.test()
async def test_single_burst_read(dut):
    """One 4-beat INCR burst read of a whole 32-byte line."""
    axi_ram = await setup(dut)

    # Self-identifying data: byte value == byte offset. A wrong beat tells you
    # WHICH beat it is, not merely that something is wrong.
    payload = bytes(range(LINE_BYTES))
    axi_ram.write(ADDR, payload)

    # ---- phase 1 ----
    collector = cocotb.start_soon(r_collect(dut, BEATS))
    cycles = await ar_send(dut, ADDR, BEATS - 1, ARSIZE, BURST_INCR)
    dut._log.info("AR accepted after %d cycle(s)", cycles)

    # ---- phase 2 ----
    beats, idle = await collector
    assert len(beats) == BEATS, f"expected {BEATS} beats, got {len(beats)}"

    # ---- check each beat ----
    for i, (data, resp, rid) in enumerate(beats):
        exp = int.from_bytes(payload[i*8:(i+1)*8], "little")
        dut._log.info("beat %d: 0x%016x (expected 0x%016x)", i, data, exp)
        assert resp == RESP_OKAY, f"beat {i}: RRESP was {resp}, expected OKAY"
        assert rid == 0,          f"beat {i}: RID was {rid}, expected 0"
        assert data == exp, (
            f"beat {i}: got 0x{data:016x}, expected 0x{exp:016x} "
            f"-- check the beat-to-line mapping"
        )

    # ---- reassemble the line ----
    # This is line[beat*AXI_DATA_W +: AXI_DATA_W], in Python.
    line = 0
    for i, (data, _, _) in enumerate(beats):
        line |= data << (i * AXI_DATA_W)

    exp_line = int.from_bytes(payload, "little")
    assert line == exp_line, (
        f"reassembled line wrong:\n  got 0x{line:064x}\n  exp 0x{exp_line:064x}"
    )

    dut._log.info("Step 1b OK: %d beats, RLAST on the last, line reassembled.", BEATS)

def random_pause(rate=0.3, seed=0):
    """Yield one pause decision per clock cycle."""
    rnd = random.Random(seed)
    while True:
        yield rnd.random() < rate


def apply_read_backpressure(axi_ram, seed=0):
    axi_ram.read_if.ar_channel.set_pause_generator(random_pause(0.3, seed))
    axi_ram.read_if.r_channel.set_pause_generator(random_pause(0.3, seed + 1000))

@cocotb.test()
async def test_burst_read_with_backpressure(dut):
    axi_ram = await setup(dut)
    apply_read_backpressure(axi_ram, seed=1)

    payload = bytes(range(LINE_BYTES))
    axi_ram.write(ADDR, payload)

    collector = cocotb.start_soon(r_collect(dut, BEATS))
    await ar_send(dut, ADDR, BEATS - 1, ARSIZE, BURST_INCR)
    beats, idle = await collector

    assert idle > 0, "backpressure never fired — the test proved nothing"
    dut._log.info("burst completed with %d idle cycle(s)", idle)

    assert len(beats) == BEATS
    for i, (data, resp, rid) in enumerate(beats):
        assert data == int.from_bytes(payload[i*8:(i+1)*8], "little")
        assert resp == RESP_OKAY