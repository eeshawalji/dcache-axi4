"""Coverage bins, derived from the cache policy.

The expected set is computed from the config rather than hardcoded, so
the assertion tightens automatically when write-back and associativity
arrive in week 4.
"""

from collections import Counter


class Coverage:
    def __init__(self, model):
        self.model = model
        self.seen  = Counter()

    def sample(self, req, pred):
        kind = "write" if req.we else "read"
        outcome = "hit" if pred.hit else "miss"
        self.seen[(kind, outcome)] += 1

        if not pred.hit:
            if pred.filled:
                self.seen[("fill", "clean" if not pred.evict_dirty else "dirty")] += 1
                self.seen[("fill", "cold" if not pred.evicted else "conflict")] += 1
            else:
                self.seen[("miss", "no-allocate")] += 1

        if req.we:
            self.seen[("be", "full" if req.be == 0xF else "partial")] += 1

    def expected(self):
        """Bins that must be hit under the current policy."""
        m = self.model
        bins = {
            ("read",  "hit"), ("read",  "miss"),
            ("write", "hit"), ("write", "miss"),
            ("fill",  "cold"), ("fill", "conflict"), ("fill", "clean"),
            ("be", "full"), ("be", "partial"),
        }
        if m.allocate == "no-allocate":
            bins.add(("miss", "no-allocate"))
        if m.write_policy == "back":
            bins.add(("fill", "dirty"))
        return bins

    def report(self, log):
        exp     = self.expected()
        missing = sorted(b for b in exp if self.seen[b] == 0)
        log.info("Coverage:")
        for b in sorted(self.seen):
            mark = " " if b in exp else "*"
            log.info(f"  {mark} {b[0]:>6} / {b[1]:<12} {self.seen[b]:>6}")
        log.info(f"  ({len(exp) - len(missing)}/{len(exp)} required bins hit)")
        if missing:
            raise AssertionError(f"coverage holes: {missing}")
        if self.model.allocate == "no-allocate":
                    a = self.seen[("write", "miss")]
                    b = self.seen[("miss", "no-allocate")]
                    if a != b:
                        raise AssertionError(
                            f"under no-allocate every write miss must skip the fill: "
                            f"write/miss={a}, miss/no-allocate={b}")