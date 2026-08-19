import cocotb
import config as cfg
from env import Env
from cocotb.triggers import Timer

@cocotb.test()
async def test_backdoor_memory(dut):
    """The AxiRam backdoor is readable and writable."""
    env = Env(dut)
    await env.start()
    env.axi_ram.write(0x40, bytes(range(32)))
    assert bytes(env.axi_ram.read(0x40, 32)) == bytes(range(32))


@cocotb.test()
async def test_reset(dut):
    env = Env(dut)
    await env.start()
    await env.drain()
    assert env.sb.n_resp == 0, "response seen with no requests issued"
    env.sb.check()
    env.wb.check()


@cocotb.test()
async def test_read_miss_then_hit(dut):
    """Cold miss fills the line; the repeat and its line-mates then hit."""
    env = Env(dut)
    await env.start()
    base = 0x1000
    env.read(base)
    env.read(base)
    for w in range(cfg.WORDS_PER_LINE):
        env.read(base + w * cfg.WORD_BYTES)
    await env.drain()
    assert env.sb.n_resp == 2 + cfg.WORDS_PER_LINE
    env.sb.check()
    env.wb.check()


@cocotb.test()
async def test_write_then_read(dut):
    """Store allocates the line; the readback sees it, including partial writes."""
    env = Env(dut)
    await env.start()
    a = 0x2000
    env.write(a, 0xDEADBEEF)
    env.read(a)
    env.write(a + 4, 0x0000BEEF, be=0x3)   # low half only
    env.read(a + 4)
    env.write(a + 8, 0xAA000000, be=0x8)   # top byte only
    env.read(a + 8)
    await env.drain()
    env.sb.check()
    env.wb.check()


@cocotb.test()
async def test_conflict_thrash(dut):
    """Two addresses in the same set: direct-mapped, so they thrash."""
    env = Env(dut)
    await env.start()
    a = 0x0400
    b = a + cfg.SET_STRIDE
    assert b < cfg.MEM_BYTES
    for _ in range(4):
        env.read(a)
        env.read(b)
    await env.drain()
    assert env.sb.n_resp == 8
    env.sb.check()
    env.wb.check()


@cocotb.test()
async def test_streaming(dut):
    """Sequential reads across several line boundaries, no idle gaps."""
    env = Env(dut)
    await env.start()
    base = 0x3000
    n = cfg.WORDS_PER_LINE * 4
    for i in range(n):
        env.read(base + i * cfg.WORD_BYTES)
    await env.drain()
    assert env.sb.n_resp == n
    env.sb.check()
    env.wb.check()


@cocotb.test()
async def test_write_then_read_same_set(dut):
    """Store-to-load: read a written address after a conflicting line displaces it."""
    env = Env(dut)
    await env.start()
    a = 0x0800
    b = a + cfg.SET_STRIDE
    env.write(a, 0x12345678)
    env.read(b)          # miss, evicts a's line
    env.read(a)          # miss, refills from memory — must see 0x12345678
    await env.drain()
    env.sb.check()
    env.wb.check()

@cocotb.test()
async def test_dirty_eviction(dut):
    """A dirty line must be written back when displaced; a clean one must not."""
    env = Env(dut)
    await env.start()
    a = 0x0C00
    b = a + cfg.SET_STRIDE
    env.write(a, 0xCAFEBABE)   # store miss -> allocate, line is now dirty
    env.read(b)                # miss -> evicts dirty a, one writeback
    env.read(a)                # miss -> evicts clean b, no writeback
    await env.drain()
    env.sb.check()
    env.wb.check()
    assert env.wb.rtl_memwr == 1, f"expected 1 writeback, got {env.wb.rtl_memwr}"

@cocotb.test()
async def test_repeated_stores_one_writeback(dut):
    """Write-back absorbs repeated stores: many writes, one bus write."""
    env = Env(dut)
    await env.start()
    a = 0x0E00
    b = a + cfg.SET_STRIDE
    for i in range(8):
        env.write(a + (i % cfg.WORDS_PER_LINE) * cfg.WORD_BYTES, 0x1000 + i)
    env.read(b)              # displaces the dirty line
    await env.drain()
    env.sb.check()
    env.wb.check()
    assert env.wb.rtl_memwr == 1, \
        f"8 stores to one line should produce 1 writeback, got {env.wb.rtl_memwr}"