"""Layer 2: structural checking.

Correlates two independent observations of each CPU access:
  - the request as seen on the pins   (CpuReqMonitor -> on_request)
  - the debug taps inside stage 1     (dbg_acc_* in dcache.sv)

Both streams are in program order, but they can land in the same timestep
with no guaranteed ordering between coroutines, so they are buffered
separately and matched pairwise.
"""

from collections import deque
import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from driver import _resolve


class WhiteboxChecker:
    """Does the RTL behave structurally like the reference cache?"""

    def __init__(self, dut, clk, model, log):
        self.dut   = dut
        self.clk   = clk
        self.model = model
        self.log   = log

        self.reqs = deque()      # requests observed at the pins
        self.taps = deque()      # (hit, addr, we) observed in stage 1

        self.errors    = []
        self.n_acc     = 0
        self.rtl_fills = 0
        self.rtl_memwr = 0
        self.coverage = None

        self._task = cocotb.start_soon(self._run())

    # --- fed by CpuReqMonitor ---
    def on_request(self, req):
        self.reqs.append(req)
        self._match()

    async def _run(self):
        d = self.dut.u_dcache
        while True:
            await RisingEdge(self.clk)
            await ReadOnly()

            if _resolve(d.dbg_ev_fill) == 1:
                self.rtl_fills += 1
            if _resolve(d.dbg_ev_evict) == 1:
                self.rtl_memwr += 1

            if _resolve(d.dbg_acc_valid) == 1:
                self.taps.append((
                    bool(_resolve(d.dbg_acc_hit)),
                    _resolve(d.dbg_acc_addr),
                    bool(_resolve(d.dbg_acc_we)),
                ))
                self._match()

    def _match(self):
        while self.reqs and self.taps:
            req = self.reqs.popleft()
            rtl_hit, rtl_addr, rtl_we = self.taps.popleft()
            idx = self.n_acc
            self.n_acc += 1

            if rtl_addr != req.addr or rtl_we != req.we:
                self.errors.append(
                    f"[acc {idx}] pipeline mangled the request: "
                    f"pins we={int(req.we)} 0x{req.addr:08x}, "
                    f"stage1 we={int(rtl_we)} 0x{rtl_addr:08x}")
                continue

            pred = self.model.access(req.addr, req.we)
            if self.coverage is not None:
                self.coverage.sample(req, pred)
            if pred.hit != rtl_hit:
                self.errors.append(
                    f"[acc {idx}] {'W' if req.we else 'R'} 0x{req.addr:08x}: "
                    f"model says {'hit' if pred.hit else 'miss'}, "
                    f"RTL says {'hit' if rtl_hit else 'miss'}")

    def check(self):
        if self.reqs:
            self.errors.append(
                f"{len(self.reqs)} request(s) never reached stage 1")
        if self.taps:
            self.errors.append(
                f"{len(self.taps)} tap(s) with no matching request")
        if self.model.fills != self.rtl_fills:
            self.errors.append(
                f"fill count: model {self.model.fills}, RTL {self.rtl_fills}")
        if self.model.writebacks != self.rtl_memwr:
            self.errors.append(
                f"writeback count: model {self.model.writebacks}, "
                f"RTL {self.rtl_memwr}")

        if self.errors:
            for e in self.errors[:20]:
                self.log.error(e)
            raise AssertionError(f"{len(self.errors)} whitebox error(s)")

        m = self.model
        total = max(m.hits + m.misses, 1)
        self.log.info(
            f"Whitebox clean: {self.n_acc} accesses, "
            f"{m.hits} hits, {m.misses} misses "
            f"({100.0 * m.hits / total:.1f}% hit rate), "
            f"{m.fills} fills, {self.rtl_memwr} memory writes")