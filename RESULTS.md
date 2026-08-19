# Results

Running log of measured numbers. Append as they arrive; do not reconstruct at the end.

---

## Configuration under test (weeks 1–3)

| Parameter | Value |
|---|---|
| `CAPACITY_BYTES` | 8192 (8 KB) |
| `LINE_BYTES` | 32 |
| `WAYS` | 1 (direct-mapped) |
| `SETS` | 256 |
| `ADDR_W` / `CPU_DATA_W` | 32 / 32 |
| `TAG_W` / `INDEX_W` / `OFFSET_W` | 19 / 8 / 5 |
| Write policy | write-through, no-write-allocate |
| Hit latency | 2 cycles (synchronous BRAM read) |
| Memory model | `dumb_mem`, 128 KB (4096 × 32 B), fixed 8-cycle latency |

Memory is 16× the cache, so the working set genuinely exceeds capacity.

---

## Week 2 — verification environment

### Test counts (for the CV `[N] scenarios` bracket)

| | count |
|---|---|
| Directed tests | 6 |
| Toolchain probe tests | 1 |
| Coverage bins required and hit | 10 / 10 |
| Random transactions, longest run | 10,000 |
| Distinct seeds passed | 6 (12345, 1, 2, 3, 4, 5) |

Directed tests: reset, read miss then hit, write then read (incl. partial byte
enables), conflict eviction, streaming across line boundaries, write then read
after conflicting displacement.

### Random run — seed 12345, 10,000 transactions

| Metric | Value |
|---|---|
| Requests issued | 10,000 |
| Reads checked against shadow memory | 6,504 |
| Hits / misses | 5,995 / 4,005 |
| **Hit rate** | **60.0%** |
| Fills | 2,590 |
| Memory writes | 3,496 |
| Simulated time | 771,500 ns |
| Wall time | 4.8 s |

Coverage bins:

| Bin | Count |
|---|---|
| `read / hit` | 3,914 |
| `read / miss` | 2,590 |
| `write / hit` | 2,081 |
| `write / miss` | 1,415 |
| `miss / no-allocate` | 1,415 |
| `fill / cold` | 256 |
| `fill / conflict` | 2,334 |
| `fill / clean` | 2,590 |
| `be / full` | 2,844 |
| `be / partial` | 652 |

`fill / cold` = 256 = `SETS` exactly: each set takes precisely one compulsory
miss. Independent confirmation that the Python model's set indexing matches the
RTL's bit slicing.

### Seed sweep — 5,000 transactions each

| Seed | Hit rate | Fills | Bins |
|---|---|---|---|
| 1 | 58.2% | 1,330 | 10/10 |
| 2 | 59.1% | 1,303 | 10/10 |
| 3 | 59.0% | 1,337 | 10/10 |
| 4 | 58.3% | 1,347 | 10/10 |
| 5 | 59.6% | 1,334 | 10/10 |

Hit rate is stable across seeds (58–60%), which is what you want from a
constrained-random generator: varied stimulus, consistent statistical shape.

### Hit rate vs run length (same seed, 12345)

| Transactions | Hit rate |
|---|---|
| 200 | 29.5% |
| 10,000 | 60.0% |

The gap is compulsory misses dominating a short run — the hot region alone is
64 lines and is barely populated at 200 transactions.

---

## Bugs found

| Where | Bug | How it surfaced |
|---|---|---|
| `dumb_mem.sv` | Ignored `mem_req_be`; wrote all 32 bytes of a line on every write-through, destroying the other 7 words | Found by inspection while building the reference model. Week-1 directed tests could not catch it — they only ever read back the address just written. |
| `tb/whitebox.py` | Request-monitor and debug-tap observations land in the same timestep with no guaranteed coroutine ordering, so pairing was off by one | Every access misaligned from `[acc 0]` onward. Fixed by buffering both streams and matching pairwise. |

---

## Not yet measured

- Fmax, LUTs, BRAMs — week 6, Vivado out-of-context on `xc7a100tcsg324-1`
- AMAT / miss-penalty sweeps — week 5
- Associativity and line-size sweeps — week 5, run in Python against the
  validated reference model

---

## Week 3 — AXI4 interface and write-back policy

### Configuration change

| Parameter | Weeks 1–2 | Week 3 |
|---|---|---|
| Write policy | write-through, no-write-allocate | **write-back, write-allocate** |
| Memory model | `dumb_mem`, 128 KB, fixed 8-cycle latency | **`AxiRam` (cocotbext-axi 0.1.28), 128 KB** |
| Memory interface | 256-bit whole-line, one cycle | **AXI4, 64-bit, 4-beat INCR bursts** |
| Backpressure | none | **randomised, 20% per cycle, all five channels** |

Everything else unchanged: 8 KB, 32 B lines, `WAYS=1`, 256 sets, 19/8/5 tag/index/offset.

Derived AXI constants for this config:

| Quantity | Value | Derivation |
|---|---|---|
| Beats per line | 4 | 256 b line / 64 b bus |
| `ARLEN` / `AWLEN` | 3 | beats − 1 |
| `ARSIZE` / `AWSIZE` | 3 | log2(8 bytes per beat) |
| `ARBURST` / `AWBURST` | `2'b01` | INCR |
| 4 KB boundary crossings | impossible | 32 B, line-aligned |

---

### Test counts

| | count |
|---|---|
| Directed cache tests | 8 |
| Toolchain probe tests | 1 |
| Standalone AXI protocol tests | 10 |
| Coverage bins required and hit | 10 / 10 |
| Random transactions, longest run | 10,000 |
| Distinct seeds passed | 6 (12345, 1–5) |

Standalone AXI tests: 3 on the bare protocol harness (`BENCH=axi_probe` — slave
comes up, hand-driven burst, hand-driven burst under backpressure), 3 on the
read master (`BENCH=axi_rd`), 4 on the write master (`BENCH=axi_wr`).

New directed cache tests: `test_dirty_eviction` (dirty line written back, clean
line not), `test_repeated_stores_one_writeback`. `test_conflict_evict` renamed
`test_conflict_thrash` — it is read-only, so every victim is clean and no
eviction traffic occurs.

---

### Random run — seed 12345, 10,000 transactions

Same stimulus as week 2, so directly comparable.

| Metric | Week 2 (write-through, `dumb_mem`) | Week 3 (write-back, AXI4) |
|---|---|---|
| Reads checked | 6,504 | 6,504 |
| Hits / misses | 5,995 / 4,005 | 6,187 / 3,813 |
| **Hit rate** | **60.0%** | **61.9%** |
| Fills | 2,590 | 3,813 |
| Memory writes | 3,496 | 1,743 |
| Simulated time | 771,500 ns | 833,640 ns |

Hit rate improves by 1.9 points: write-allocate brings store misses into the
cache, so a store followed by any access to the same line now hits.

Fills rise because every write miss now fills; memory writes halve because
stores no longer reach the bus individually.

Coverage bins, seed 12345:

| Bin | Week 2 | Week 3 |
|---|---|---|
| `read / hit` | 3,914 | 4,043 |
| `read / miss` | 2,590 | 2,461 |
| `write / hit` | 2,081 | 2,144 |
| `write / miss` | 1,415 | 1,352 |
| `miss / no-allocate` | 1,415 | — (unreachable) |
| `fill / cold` | 256 | 256 |
| `fill / conflict` | 2,334 | 3,557 |
| `fill / clean` | 2,590 | 2,070 |
| `fill / dirty` | — (unreachable) | 1,743 |
| `be / full` | 2,844 | 2,844 |
| `be / partial` | 652 | 652 |

`fill / dirty` = memory writes = 1,743, counted independently: the bin comes
from the Python model's prediction, the write count from the RTL's
`dbg_ev_evict` tap. Exact agreement across 3,813 fills.

`fill / cold` = 256 = `SETS` on every seed, unchanged from week 2.

---

### Seed sweep — 10,000 transactions each, backpressure enabled

| Seed | Hit rate | Fills | Writebacks | Sim time | Bins |
|---|---|---|---|---|---|
| 12345 | 61.9% | 3,813 | 1,743 | 833,640 ns | 10/10 |
| 1 | 62.4% | 3,759 | 1,730 | 826,870 ns | 10/10 |
| 2 | 62.5% | 3,755 | 1,751 | 828,020 ns | 10/10 |
| 3 | 61.9% | 3,811 | 1,765 | 835,950 ns | 10/10 |
| 4 | 62.8% | 3,719 | 1,726 | 822,080 ns | 10/10 |
| 5 | 62.5% | 3,751 | 1,707 | 824,360 ns | 10/10 |

Spread 61.9–62.8%. **~62% is the direct-mapped baseline that week 5's
associativity sweep has to beat.**

---

### Effect of backpressure — seed 12345

| Configuration | Sim time | Hits | Fills | Writebacks |
|---|---|---|---|---|
| AXI, no backpressure | 761,630 ns | 6,187 | 3,813 | 1,743 |
| AXI, 20% on all five channels | 833,640 ns | 6,187 | 3,813 | 1,743 |

Every functional number identical; only time moves, by 9.5%. This is the
property being asserted — backpressure must change timing and nothing else.

---

### Memory model comparison — seed 12345, write-back RTL

| Memory | Sim time |
|---|---|
| `dumb_mem`, 256-bit, fixed 8-cycle latency | 893,450 ns |
| `AxiRam`, 64-bit, 4-beat bursts, no backpressure | 761,630 ns |
| `AxiRam`, 64-bit, 4-beat bursts, 20% backpressure | 833,640 ns |

A real AXI4 interface with random stalls on all five channels is still 6.7%
faster than the placeholder. `dumb_mem`'s fixed 8-cycle latency per transfer is
worse than a 4-beat burst even when beats stall.

---

### Bus traffic — the honest comparison

| | Week 2 (write-through) | Week 3 (write-back) |
|---|---|---|
| Read transactions | 2,590 | 3,813 |
| Write transactions | 3,496 | 1,743 |
| Total transactions | 6,086 | 5,556 |
| Bytes read | 82,880 | 122,016 |
| Bytes written | ≤ 13,984 | 55,776 |

Write transaction count halves, but each write becomes a full 32-byte line
rather than a single word, so total bytes on the bus rise. Uniformly random
addresses are the worst case for write-back: the policy pays off when repeated
stores hit a resident line, which this stimulus rarely produces.

The mechanism measured directly, from `test_repeated_stores_one_writeback`:

| Access pattern | Write-through | Write-back |
|---|---|---|
| 8 stores to one line, then displace it | 8 bus writes | **1 bus write** |

---

## Bugs found — week 3

| Where | Bug | How it surfaced |
|---|---|---|
| `tb/test_axi_probe.py` | Beat 0 of a read burst lost. The R-channel collector was called *after* the AR handshake returned, leaving a window in which the first beat could handshake unobserved. | Passed with a zero-latency slave — the beat happened to land inside the observation window. Failed the moment backpressure shifted timing by one cycle: 3 beats collected, beats 1–3 with correct data, beat 0 absent. Fixed by launching the collector with `cocotb.start_soon` before issuing AR. Same class as week 2's whitebox tap misordering. |
| `hdl/axi_write_master.sv` | Prevented, not found: `beat_cnt` must freeze at `LAST_BEAT` rather than wrapping, because `WLAST` is combinational from it and would drop in the cycle the slave samples it. | Caught while writing the module by comparing against the read master, where the unconditional increment is correct. `test_neighbours_untouched` was written to catch it had it slipped through. |

No RTL bugs found during cache integration — both verification layers were clean
on the first run after the swap. Attributable to both masters having been
verified standalone under backpressure before either went near the cache.

Layer 1 (blackbox scoreboard) passed the write-through → write-back policy
change **unchanged**, as it should: transparency is policy-independent. Layer 2
needed one line — `RefCache` was built policy-parameterised in week 2, so the
change was `write_policy="back", allocate="allocate"`.

---

### Still not measured

- Fmax, LUTs, BRAMs — week 6, Vivado out-of-context on `xc7a100tcsg324-1`
- Store-hit latency (asserted single-cycle, not instrumented) — week 6
- AMAT / miss-penalty sweeps — week 5
- Associativity and line-size sweeps — week 5
- Cycles per fill and per writeback; observed AR-to-AR spacing was 9 cycles
  against a zero-latency slave in the standalone read-master test, versus an
  FSM floor of 7