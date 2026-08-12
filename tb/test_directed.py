import cocotb
import config as cfg
from env import Env
from cocotb.triggers import Timer

@cocotb.test()
async def test_probe_mem_handle(dut): 
    dut._log.info(f"len(mem) = {len(dut.u_mem.mem)}")
    dut.u_mem.mem[0].value = 0x1234
    dut.u_mem.mem[1].value = (0xAB << 248) | 0xCD   # top and bottom bytes
    await Timer(1, unit="ns")
    v0 = int(dut.u_mem.mem[0].value)
    v1 = int(dut.u_mem.mem[1].value)
    dut._log.info(f"mem[0] = 0x{v0:064x}")
    dut._log.info(f"mem[1] = 0x{v1:064x}")
    assert v0 == 0x1234, "array handle is not writable"
    assert v1 == (0xAB << 248) | 0xCD, "wide write truncated"


@cocotb.test()
async def test_reset(dut):
    env = Env(dut)
    await env.start()
    await env.drain()
    assert env.sb.n_resp == 0, "response seen with no requests issued"
    env.sb.check()


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


@cocotb.test()
async def test_write_then_read(dut):
    """Write-through, including a partial byte-enable write."""
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


@cocotb.test()
async def test_conflict_evict(dut):
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