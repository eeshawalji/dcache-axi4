from collections import deque
import cocotb
from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep
from transaction import Request

def _resolve(sig):
    """Return int, or None if the signal has X/Z bits."""
    try:
        return int(sig.value)
    except ValueError:
        return None


class CpuDriver:
    """Drives the CPU request channel. Checks nothing."""

    def __init__(self, dut, clk):
        self.dut   = dut
        self.clk   = clk
        self.queue = deque()
        self.cur   = None      # transaction currently presented on the bus
        self.gap   = 0         # idle cycles remaining before next drive
        self._task = cocotb.start_soon(self._run())

    def append(self, req):
        self.queue.append(req)

    @property
    def idle(self):
        return self.cur is None and not self.queue

    def _drive_idle(self):
        self.dut.req_valid.value = 0
        self.dut.req_we.value    = 0
        self.dut.req_addr.value  = 0
        self.dut.req_wdata.value = 0
        self.dut.req_be.value    = 0

    def _drive(self, req):
        self.dut.req_valid.value = 1
        self.dut.req_we.value    = int(req.we)
        self.dut.req_addr.value  = req.addr
        self.dut.req_wdata.value = req.wdata
        self.dut.req_be.value    = req.be

    async def _run(self):
        self._drive_idle()
        while True:
            await RisingEdge(self.clk)
            await ReadOnly()
            accepted = (
                self.cur is not None
                and _resolve(self.dut.req_ready) == 1
            )
            await NextTimeStep()

            if accepted:
                self.cur = None

            if self.cur is None:
                if self.gap > 0:
                    self.gap -= 1
                    self._drive_idle()
                elif self.queue:
                    nxt = self.queue.popleft()
                    if nxt.gap > 0:
                        self.gap = nxt.gap
                        self.queue.appendleft(
                            Request(nxt.we, nxt.addr, nxt.wdata, nxt.be, gap=0)
                        )
                        self._drive_idle()
                    else:
                        self.cur = nxt
                        self._drive(nxt)
                else:
                    self._drive_idle()