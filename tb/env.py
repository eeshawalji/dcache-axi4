import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles
from cocotbext.axi import AxiBus, AxiRam

import config as cfg
from driver import CpuDriver
from monitor import CpuMonitor, CpuReqMonitor
from scoreboard import Scoreboard
from memory import build_image, preload
from transaction import Request
from ref_model import RefCache
from whitebox import WhiteboxChecker
from coverage import Coverage
from axi_util import random_pause

class Env:
    def __init__(self, dut, image_seed=0):
        self.dut   = dut
        self.image = build_image(image_seed)

    async def start(self):
        d = self.dut
        cocotb.start_soon(Clock(d.clk, cfg.CLK_NS, unit="ns").start())

        # Idle the request channel before reset releases, so the DUT never
        # samples X on req_valid.
        d.req_valid.value = 0
        d.req_we.value    = 0
        d.req_addr.value  = 0
        d.req_wdata.value = 0
        d.req_be.value    = 0

        d.rst_n.value = 0

        self.axi_ram = AxiRam(
            AxiBus.from_prefix(d, "m_axi"), d.clk, d.rst_n,
            reset_active_level=False, size=cfg.RAM_SIZE)

        # Randomised backpressure on all five channels.
        self.axi_ram.write_if.aw_channel.set_pause_generator(random_pause(0.2, 1))
        self.axi_ram.write_if.w_channel.set_pause_generator(random_pause(0.2, 2))
        self.axi_ram.write_if.b_channel.set_pause_generator(random_pause(0.2, 3))
        self.axi_ram.read_if.ar_channel.set_pause_generator(random_pause(0.2, 4))
        self.axi_ram.read_if.r_channel.set_pause_generator(random_pause(0.2, 5))

        await ClockCycles(d.clk, 5)
        d.rst_n.value = 1
        await RisingEdge(d.clk)

        preload(self.axi_ram, self.image)

        self.sb = Scoreboard(d._log, init_mem=self.image)
        self.driver   = CpuDriver(d, d.clk)
        self.req_mon  = CpuReqMonitor(d, d.clk)
        self.resp_mon = CpuMonitor(d, d.clk)
        self.req_mon.subscribe(self.sb.on_request)
        self.resp_mon.subscribe(self.sb.on_response)
        self.model = RefCache(cfg.CAPACITY_BYTES, cfg.LINE_BYTES, cfg.WAYS, 
                        write_policy="back", allocate="allocate")
        self.wb = WhiteboxChecker(d, d.clk, self.model, d._log)
        self.cov = Coverage(self.model)
        self.wb.coverage = self.cov
        self.req_mon.subscribe(self.wb.on_request)

    def read(self, addr, gap=0):
        self.driver.append(Request(we=False, addr=addr, gap=gap))

    def write(self, addr, data, be=0xF, gap=0):
        self.driver.append(Request(we=True, addr=addr, wdata=data, be=be, gap=gap))

    async def drain(self, timeout=20000):
        """Wait until every issued transaction has completed."""
        d = self.dut
        for _ in range(timeout):
            await RisingEdge(d.clk)
            if self.driver.idle and not self.sb.expected:
                # A store is silent on the response channel, so wait for any
                # bus traffic it triggered (fill, or a dirty eviction) to settle
                # before anyone inspects memory or counts events.
                await ClockCycles(d.clk, cfg.MEM_LATENCY + 10)
                return
        raise TimeoutError(
            f"drain timed out: {len(self.sb.expected)} read(s) outstanding, "
            f"{len(self.driver.queue)} queued")