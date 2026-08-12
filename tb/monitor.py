import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from driver import _resolve
from transaction import Request

class CpuMonitor:
    """Observes the CPU response channel. Drives nothing, checks nothing."""

    def __init__(self, dut, clk):
        self.dut       = dut
        self.clk       = clk
        self.callbacks = []
        self.count     = 0
        self._task     = cocotb.start_soon(self._run())

    def subscribe(self, fn):
        self.callbacks.append(fn)

    async def _run(self):
        while True:
            await RisingEdge(self.clk)
            await ReadOnly()
            if _resolve(self.dut.resp_valid) == 1:
                rdata = _resolve(self.dut.resp_rdata)   # None if X
                self.count += 1
                for fn in self.callbacks:
                    fn(rdata)

class CpuReqMonitor: 
    """Observes accepted CPU requests. Drives nothing, checks nothing."""

    def __init__(self, dut, clk):
        self.dut       = dut
        self.clk       = clk
        self.callbacks = []
        self.count     = 0
        self._task     = cocotb.start_soon(self._run())

    def subscribe(self, fn):
        self.callbacks.append(fn)

    async def _run(self):
        while True:
            await RisingEdge(self.clk)
            await ReadOnly()
            if (_resolve(self.dut.req_valid) == 1
                    and _resolve(self.dut.req_ready) == 1):
                req = Request(
                    we    = bool(_resolve(self.dut.req_we)),
                    addr  = _resolve(self.dut.req_addr),
                    wdata = _resolve(self.dut.req_wdata),
                    be    = _resolve(self.dut.req_be),
                )
                self.count += 1
                for fn in self.callbacks:
                    fn(req)