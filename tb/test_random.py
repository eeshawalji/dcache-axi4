import os
import cocotb
import config as cfg
from env import Env
from stimulus import Generator

N_TXN = int(os.environ.get("N_TXN", 10000))
SEED  = int(os.environ.get("STIM_SEED", 12345))


@cocotb.test()
async def test_random(dut):
    dut._log.info(f"stimulus seed={SEED}, n={N_TXN}")
    env = Env(dut)
    await env.start()

    gen = Generator(SEED)
    for req in gen.burst(N_TXN):
        env.driver.append(req)

    await env.drain(timeout=200 * N_TXN)
    env.sb.check()
    env.wb.check()
    env.cov.report(dut._log)