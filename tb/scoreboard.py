from collections import deque
from config import WORD_BYTES

WORD_MASK = 0xFFFFFFFF


def merge_bytes(old, new, be, nbytes=WORD_BYTES):
    """Apply byte-enabled write of `new` over `old`."""
    out = old
    for i in range(nbytes):
        if be & (1 << i):
            m = 0xFF << (8 * i)
            out = (out & ~m) | (new & m)
    return out & WORD_MASK


class Scoreboard:
    """Layer 1: the cache must be transparent."""

    def __init__(self, log, init_mem=None):
        self.log      = log
        self.shadow   = dict(init_mem) if init_mem else {}
        self.expected = deque()      # (txn_idx, addr, value)
        self.n_req    = 0
        self.n_resp   = 0
        self.errors   = []

    # --- fed by CpuReqMonitor ---
    def on_request(self, req):
        idx  = self.n_req
        self.n_req += 1
        addr = req.addr & ~(WORD_BYTES - 1)
        if req.addr != addr:
            self.errors.append(
                f"[req {idx}] unaligned address 0x{req.addr:08x}")
        if req.we:
            old = self.shadow.get(addr, 0)
            self.shadow[addr] = merge_bytes(old, req.wdata, req.be)
        else:
            self.expected.append((idx, addr, self.shadow.get(addr, 0)))

    # --- fed by CpuMonitor ---
    def on_response(self, rdata):
        self.n_resp += 1
        if not self.expected:
            self.errors.append(
                f"unexpected response 0x{rdata:08x} — no read outstanding")
            return
        idx, addr, exp = self.expected.popleft()
        if rdata is None:
            self.errors.append(
                f"[req {idx}] read 0x{addr:08x}: response contained X")
        elif rdata != exp:
            self.errors.append(
                f"[req {idx}] read 0x{addr:08x}: "
                f"expected 0x{exp:08x}, got 0x{rdata:08x}")

    def check(self):
        if self.expected:
            idx, addr, _ = self.expected[0]
            self.errors.append(
                f"{len(self.expected)} read(s) never responded; "
                f"first was [req {idx}] 0x{addr:08x}")
        if self.errors:
            for e in self.errors[:20]:
                self.log.error(e)
            raise AssertionError(
                f"{len(self.errors)} scoreboard error(s); "
                f"{self.n_req} requests, {self.n_resp} responses")
        self.log.info(
            f"Scoreboard clean: {self.n_req} requests, {self.n_resp} reads checked")