"""Constrained-random CPU transaction generator.

All addresses are word-aligned and confined to [0, MEM_BYTES) — dumb_mem
decodes only addr[16:5], so anything above that aliases (see config.py).
"""

import random
import config as cfg
from transaction import Request


class Generator:
    def __init__(self, seed,
                 weights=None,          # region name -> relative weight
                 write_frac=0.35,
                 gap_frac=0.25,
                 partial_be_frac=0.20):
        self.rng = random.Random(seed)
        self.write_frac      = write_frac
        self.gap_frac        = gap_frac
        self.partial_be_frac = partial_be_frac

        self.weights = weights or {
            "hot": 45, "stream": 25, "uniform": 25, "conflict": 5,
        }
        self.names   = list(self.weights)
        self.w       = [self.weights[n] for n in self.names]

        # Hot region: 2 KB, a quarter of the cache — should mostly hit.
        self.hot_base = 0x0001_0000
        self.hot_size = 2048

        # Streaming region: a walking pointer over 32 KB, wrapping.
        self.stream_base = 0x0000_8000
        self.stream_size = 32 * 1024
        self.stream_ptr  = 0

        # Conflict region: addresses SET_STRIDE apart all land in one set.
        self.conflict_base = 0x0000_0040

    def _addr_hot(self):
        off = self.rng.randrange(self.hot_size // cfg.WORD_BYTES)
        return self.hot_base + off * cfg.WORD_BYTES

    def _addr_stream(self):
        a = self.stream_base + self.stream_ptr
        self.stream_ptr = (self.stream_ptr + cfg.WORD_BYTES) % self.stream_size
        return a

    def _addr_uniform(self):
        return self.rng.randrange(cfg.MEM_BYTES // cfg.WORD_BYTES) * cfg.WORD_BYTES

    def _addr_conflict(self):
        n = self.rng.randrange(4)          # 4 lines competing for one set
        word = self.rng.randrange(cfg.WORDS_PER_LINE)
        a = self.conflict_base + n * cfg.SET_STRIDE + word * cfg.WORD_BYTES
        return a % cfg.MEM_BYTES

    def next(self):
        region = self.rng.choices(self.names, weights=self.w)[0]
        addr = {
            "hot":      self._addr_hot,
            "stream":   self._addr_stream,
            "uniform":  self._addr_uniform,
            "conflict": self._addr_conflict,
        }[region]()
        assert addr % cfg.WORD_BYTES == 0
        assert addr < cfg.MEM_BYTES

        we  = self.rng.random() < self.write_frac
        gap = self.rng.randrange(1, 5) if self.rng.random() < self.gap_frac else 0

        be, wdata = 0xF, 0
        if we:
            wdata = self.rng.getrandbits(32)
            if self.rng.random() < self.partial_be_frac:
                be = self.rng.randrange(1, 16)     # never 0

        return Request(we=we, addr=addr, wdata=wdata, be=be, gap=gap)

    def burst(self, n):
        return [self.next() for _ in range(n)]