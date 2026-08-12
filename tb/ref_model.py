from dataclasses import dataclass


@dataclass
class Access:
    """What the model predicts for one CPU access."""
    hit:        bool
    way:        int           # hitting way, or victim way on a miss
    filled:     bool          # did this access bring a line in?
    wrote_mem:  bool          # did this access push data to memory?
    evicted:    bool          # was a valid line displaced?
    evict_dirty: bool         # was the displaced line dirty?


class RefCache:
    def __init__(self, capacity, line_bytes, ways,
                 write_policy="through",     # "through" | "back"
                 allocate="no-allocate"):    # "no-allocate" | "allocate"
        assert capacity % (line_bytes * ways) == 0
        self.sets  = capacity // (line_bytes * ways)
        self.ways  = ways
        self.line  = line_bytes
        self.write_policy = write_policy
        self.allocate     = allocate

        self.tag   = [[None] * ways for _ in range(self.sets)]
        self.dirty = [[False] * ways for _ in range(self.sets)]
        self.plru  = [0] * self.sets

        self.hits = self.misses = self.writebacks = self.fills = 0

    # --- address decomposition (must match the RTL's bit slicing) ---
    def decompose(self, addr):
        line_no = addr // self.line
        return line_no % self.sets, line_no // self.sets   # (index, tag)

    # --- tree-PLRU; degenerates correctly for ways == 1 ---
    def touch(self, idx, way):
        if self.ways == 1:
            return
        levels = (self.ways - 1).bit_length()
        node = 0
        for lvl in range(levels):
            bit = (way >> (levels - 1 - lvl)) & 1
            if bit:
                self.plru[idx] |= (1 << node)      # point away: left
            else:
                self.plru[idx] &= ~(1 << node)     # point away: right
            node = 2 * node + 1 + bit

    def pick_victim(self, idx):
        if self.ways == 1:
            return 0
        for w in range(self.ways):                 # prefer an empty way
            if self.tag[idx][w] is None:
                return w
        levels = (self.ways - 1).bit_length()
        node, way = 0, 0
        for _ in range(levels):
            bit = (self.plru[idx] >> node) & 1
            way = (way << 1) | bit
            node = 2 * node + 1 + bit
        return way

    def access(self, addr, is_write):
        idx, tag = self.decompose(addr)

        for w in range(self.ways):
            if self.tag[idx][w] == tag:
                self.hits += 1
                self.touch(idx, w)
                wrote_mem = False
                if is_write:
                    if self.write_policy == "back":
                        self.dirty[idx][w] = True
                    else:
                        wrote_mem = True
                return Access(True, w, False, wrote_mem, False, False)

        self.misses += 1

        # write miss with no-allocate: straight to memory, cache untouched
        if is_write and self.allocate == "no-allocate":
            return Access(False, -1, False, True, False, False)

        victim = self.pick_victim(idx)
        occupied = self.tag[idx][victim] is not None
        was_dirty = occupied and self.dirty[idx][victim]
        if was_dirty:
            self.writebacks += 1

        self.tag[idx][victim]   = tag
        self.dirty[idx][victim] = False
        self.fills += 1
        self.touch(idx, victim)

        wrote_mem = was_dirty
        if is_write:                                # write-allocate case
            if self.write_policy == "back":
                self.dirty[idx][victim] = True
            else:
                wrote_mem = True

        return Access(False, victim, True, wrote_mem, occupied, was_dirty)