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