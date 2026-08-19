  # Notes

Process record: what I built, what broke, what I decided and why. Appends
weekly.

---

# Week 1 — notes

Direct-mapped, write-through cache against a placeholder memory model.
Five directed cocotb tests green.

---

## Built

`dcache_pkg.sv` — FSM state enum, `AXI_RESP_OKAY`. Nearly empty by design; anything
width-dependent can't live here because the widths are module parameters.

`tag_array.sv` / `data_array.sv` — generic `WIDTH` × `DEPTH` memories. Neither knows it
is part of a cache. The data array takes byte enables; the tag array doesn't.

`dcache.sv` — parameters, derivations, two-stage pipeline, tag compare, one-hot way
select, word select, store positioning, six-state FSM, array write datapath.

`tb/dumb_mem.sv` — line-granular memory with configurable latency and byte enables.
Throwaway; `cocotbext-axi`'s `AxiRam` replaces it in week 3.

`tb/tb_top.sv`, `tb/test_directed.py`, `tb/Makefile` — harness and four directed tests
plus a reset smoke test.

---

## Decided, and why

**Parameters on the module port list, not in the package.** Vivado's `synth_design
-generic` and Verilator's `-G` can only override parameters on the top-level module.
Putting them in a package would mean editing source for every point in the week 5–6
config sweep.

**Two-stage pipeline.** Not a choice — BRAM reads are synchronous, so the tag compare
can't happen in the cycle the array is addressed. This also forces the decoupled
valid/ready interface rather than a combinational stall wire.

**Tag and data arrays separate.** Different write granularity (a store touches the data
array only; a fill writes the tag once and the data once per beat), different shapes
(21b × 64 vs 256b × 64), and keeping the tag array narrow protects the
compare → mux → response critical path.

**Valid bits in flops, not BRAM.** BRAM can't be cleared in a cycle. 256 flops at the
default config buys instant reset and means the array's power-on garbage is never
believed.

**Replication for store positioning.** `{8{s1_wdata}}` broadcasts the word to every lane
and lets `wr_be` select which one commits. A variable-base part-select on the LHS would
synthesise a decoder; replication is pure fanout, and the byte enables were needed
anyway.

**Fill target hardcoded to way 0**, with an elaboration `$fatal` if `WAYS != 1`.
Victim selection has no independent oracle — a fill to the wrong way still returns
correct data, and only shows up as a wrong hit rate. Without the week-2 reference model
that bug would sit undetected until it corrupted the week-5 associativity sweep. The
`$fatal` turns "quietly meaningless" into "refuses to elaborate".

**Generate loop kept even at `WAYS=1`.** Structure parameterised early is free — it
degenerates to one array and a wire. Policy parameterised early is not, because policy
has to match a Python model that doesn't exist yet. That's the line between what to pull
forward from week 4 and what to leave.

---

## Broke

**Combinational loop on `req_ready`.** `s0s1_conflict` was written in terms of
`s0_accept`, which contains `req_ready`, which is `!s1_stall`, which contains
`s0s1_conflict`. Verilator caught it as `UNOPTFLAT`. Fix: use `req_valid`, the only
signal in the handshake not downstream of our own logic.

Rule extracted: `s0_accept` is for things that happen *after* the handshake resolves —
register enables, counters. It must never appear in the expression computing `req_ready`.

**Write-through never terminated.** A store hit entered `S_WRITE_THROUGH`, completed,
returned to `S_IDLE` — and the stage-1 registers still held the same store, because the
stall had frozen them. `store_hit` fired again. Infinite loop.

Root cause was `s1_stall` conflating two questions: *may stage 0 be accepted* and *must
stage 1 hold*. For a fill they coincide; for a write-through they don't, because stage 1
is finished while stage 0 must still wait. Fix was to separate them:
`s1_can_advance = !s1_valid || cmd_retire` and gate the register on that.

**Write-through clobbered the whole line.** `mem_req_wdata` carried the replicated word
and `dumb_mem` had no byte enables, so a `sw` wrote all 32 bytes. Added `mem_req_be` —
which is needed anyway, being the direct analogue of AXI's `WSTRB`.

**Store-to-load hazard.** The arrays are read-first, so a load accepted in the same cycle
a store commits reads pre-store data — and the tag still matches, so it's reported as a
hit. Held off with `s0s1_conflict`, which blocks the accept for one cycle. Currently
index-only, so it over-stalls on same-index/different-tag; correct, just conservative.

**Deleted `valid_q` thinking it was associativity-related.** It isn't. Without it the
comparator matches against uninitialised BRAM, and tag 0 is a legitimate tag, so on
hardware with zeroed BRAM every access to the first 2 KB would hit an empty cache.

**`array_raddr` was proxied through `fsm_active`.** "The FSM is busy, so presumably
nothing is being accepted" — which breaks in exactly the cycle the FSM is still active
but the request has retired and a new one is arriving. Replaced with the actual
condition, `s0_accept ? s0_index : s1_index`.

Pattern across four of these: a signal added to patch a symptom, where the fix was to
state the underlying rule instead. Worth watching for in week 3.

---

## Refactored

Halfway through, the control path had eight interdependent signals and `state` was being
read by the datapath while stage-1 facts were read by the FSM — information flowing both
ways. Restructured into one direction:

```
stage 1  →  facts  →  FSM  →  commands  →  datapath
```

Facts (`rd_hit`, `rd_miss`, `wr_req`, `store_be`, `store_line`) are pure functions of
stage 1. Commands (`cmd_fill`, `cmd_store`, `cmd_retire`) are the FSM's entire interface
downstream. Nothing after the FSM reads `state`.

This deleted `store_hit`, `fsm_active`, `s1_done`, and `s1_retire`, and collapsed the
write-hit and write-miss FSM branches into one — under write-through both do the same
thing to memory, and `hit` alone decides whether the array is also updated.

---

## Learned

**Read-first is a rule about nonblocking assignment, not a memory quirk.** Every RHS is
evaluated before any LHS updates, so a same-cycle read returns pre-write contents
regardless of statement order. This is what makes `S_REPLAY` necessary: the cycle a fill
commits, the read port is still showing stale tags.

**`S_REPLAY` means there is no separate response path for misses.** The fill populates
the array; the ordinary hit path does the rest. That's why `cmd_retire` needs only
`rd_hit`. Week 4 reuses the same mechanism for write-allocate.

**Default-then-override in `always_comb`.** Assign every signal unconditionally at the
top, then override in branches. Any path leaving a signal unassigned infers a latch.
Scales better than `if/else` as writers accumulate.

**Cocotb: `.value` writes are scheduled, not immediate.** The handshake loop must
`await RisingEdge` *before* sampling `req_ready`, or it reads a value computed with
`req_valid` still low.

**Data signals are meaningless outside their valid window.** `resp_rdata` is live every
cycle; only `resp_valid` says when to believe it. Same discipline applies to every AXI
data channel.

---

## False alarms

Two hours lost to reading the waveform across a test boundary. All five tests run in one
continuous simulation, each calling `reset_dut`, so `rst_n` pulsing low mid-trace is the
next test starting — not a bug. `make COCOTB_TESTCASE=<name>` isolates one test.

Also: `test_read_miss_then_hit` would have passed even if the second access missed, since
a miss returns the same data from memory. Added a crude sim-time assertion to distinguish
a 2-cycle hit from a 12-cycle miss. Week 2's whitebox layer replaces it with a real probe
on `hit`.

---

## Open for later

- Store-to-load interlock could compare the full address, not just the index (week 6)
- Critical-word-first forwarding would save the replay cycle on a miss (week 6)
- Throughput under back-to-back requests is untested — the directed driver is blocking,
  so two requests are never in flight at once (week 2)
- Re-enable Verilator's `UNUSEDPARAM` once `AXI_ID_W` and `AXI_RESP_OKAY` are wired
  (week 3)
- `s0s1_conflict` is currently unreachable but becomes load-bearing in week 4, when a
  write-back store hit completes in a single cycle


---

## Week 2 — reference model, scoreboard, randomisation

### What I built

A cocotb verification environment with five separable components:

- **Driver** — turns `(rw, addr, data)` transactions into pin activity on the
  request channel, honouring `req_ready` backpressure.
- **Monitors** — one on the request channel (accepted handshakes), one on the
  response channel. Both passive: they drive nothing and check nothing.
- **Scoreboard** — layer 1. Flat shadow memory; every read checked.
- **Reference model** — layer 2. Structural `RefCache` predicting hit/miss.
- **Stimulus and coverage** — constrained-random generator, coverage bins
  asserted at end of run.

The organising principle: the testbench speaks in transactions, and nothing
above the driver and monitors knows that this week's cache is direct-mapped and
write-through. Weeks 3–6 should change RTL and configuration, not testbench
structure.

### Decisions and the reasoning behind them

**Free-running queue-based driver, not a blocking `await send()`.** The blocking
version is simpler, but it caps throughput at one request every two cycles —
by the time Python resumes and calls `send` again, the drive window has passed.
Back-to-back streaming would never be exercised. So the driver is a coroutine
running one iteration per clock, pulling from a `deque`, with per-transaction
idle gaps as a field on the transaction (which the random generator needs
anyway).

**Sample in `ReadOnly`, drive after `NextTimeStep`.** `RisingEdge` fires before
combinational logic has settled for that timestep, so reading `req_ready` there
can return a stale value. `ReadOnly` is defined as after all deltas settle.
Can't write during `ReadOnly`, hence stepping to `NextTimeStep` to drive.

**Shadow memory is updated at request-accept time, in program order — and reads
snapshot their expected value at that same instant.** This is the load-bearing
decision of the week. Deferring the lookup to when the response arrives would
compare against a memory state that includes writes accepted while the read was
in flight. With a two-stage pipeline that isn't a corner case, it's the common
case. Snapshotting at accept is also what makes the store-to-load hazard path
(`s0s1_conflict`) actually get checked.

**Cache policy as a constructor argument on `RefCache`, and the required
coverage-bin set derived from the policy.** Week 4 switches to write-back and
write-allocate by changing two strings. `("fill", "dirty")` is unreachable today
and correctly not required; it becomes required automatically the moment the
policy flips. Avoids both a week-4 rewrite and a coverage assertion that lies.

**Debug taps in the RTL rather than inferring first-look hit from the pins.**
`hit` is combinational and a single request sits in stage 1 for many cycles
during a miss, reading low through the fill and high during `S_REPLAY`. Sampling
every cycle gives a stream that doesn't correspond to transactions. Registered
`dbg_acc_valid` pulses once per accepted request on its first stage-1 cycle,
which is exactly when `hit` reflects the pre-fill state of the cache.

**Correlate taps against pin-sampled requests, not against the taps' own
address.** Feeding the model `dbg_acc_addr` would let a pipeline corruption
agree with itself. Two independent observations, matched pairwise.

### Deviation from the plan

The plan's week-2 exit criterion asks for coverage of dirty eviction,
write-allocate and PLRU victim selection. None of those are reachable: the RTL
is write-through (no dirty bit), no-write-allocate (a write miss never fills)
and direct-mapped (victim selection is a wire). Adding them to the RTL to make
the checkbox green would pull week-4 work forward for no reason.

Resolution: build the model and coverage machinery with all of it present but
policy-gated, and declare the deferred bins explicitly rather than pretending.
Everything reachable under the current policy is covered — 10/10.

### Bugs

**`dumb_mem` ignored `mem_req_be`.** It wrote all 32 bytes of a line on every
write-through, destroying the other seven words. Found by inspection while
writing the preload, not by a test. Week-1's directed tests structurally could
not catch it: they only ever read back the address just written, so the
corrupted neighbours were never observed. First random run would have found it
within a few hundred transactions.

The general lesson: a test that writes and reads the same address verifies
almost nothing about masking. Neighbour reads are the check that matters.

**Same-timestep coroutine ordering in the whitebox checker.** The request
observation and its debug tap both land at `ReadOnly` of the same timestep — the
monitor sees the handshake just captured at edge N, and `dbg_first` is assigned
at edge N from the same `s0_accept`. Which coroutine runs first is cocotb
internal scheduling, and it wasn't going my way: on the first access the checker
ran before the monitor had appended, found an empty queue, dropped the tap, and
every subsequent pairing was off by one.

Symptom worth recognising again: correct-looking data in both streams, wrong
pairing, exactly one leftover at the end. Fix was to buffer both streams
independently and match pairwise whenever both have an entry — which removes an
assumption about intra-timestep ordering that was never guaranteed, while
keeping the program-order assumption that is.

**Verilator `UNUSEDSIGNAL` on `mem_req_addr[31:17]` and `s1_offset[1:0]`.** Not
bugs. The first is the 128 KB decode of the memory model; the second is that
sub-word position comes from `req_be`, not the address. Suppressed with local
pragmas plus a comment, not a global `-Wno-`, because that warning class will
matter in week 3 when an unused AXI signal means something isn't wired.

### Things that confirmed the plumbing works

`fill / cold` came out at exactly 256 = `SETS`. Each set takes precisely one
compulsory miss. Nothing was engineered to produce that number — it falls out of
the model's `decompose` agreeing with the RTL's bit slicing. A stronger signal
than any individual test passing.

Also worth remembering: a checker that observes nothing reports "clean". Twice
this week I checked the transaction and access counts by hand to confirm the
checkers were actually live. That's a one-time exercise per component, but it is
not optional — the alternative is a green suite that verifies nothing.

### Open items carried into week 3

- No end-of-test memory comparison yet (trivially true under write-through)
- No victim-way checking (nothing to check at `WAYS=1`)
- No memory-side backpressure — `dumb_mem` never stalls mid-transfer. This is
  the one that will find bugs when `AxiRam` arrives with randomised `READY`.
- No protocol checking, because there is no protocol yet
- Shrinking procedure for failing random seeds is understood but unbuilt; no
  failure has needed it. Would need `gen.burst(n)[start:end]` slicing.

---

## Week 3 — AXI4 interface, write-back policy

Replaced the placeholder memory with a real AXI4 bus, and brought week 4's
write-back/write-allocate policy forward. Both layers of the week-2 suite pass
against a slave with randomised backpressure on all five channels, across six
seeds.

### What I built

`hdl/axi_read_master.sv` — four-state FSM. Takes a line-aligned address on a
valid/ready request port, issues one INCR burst, accumulates `BEATS` R-channel
beats into a line register, returns the whole line on a one-cycle response
pulse. 100 lines.

`hdl/axi_write_master.sv` — five states. Takes an address and a whole line,
streams it as a burst, waits for `BVALID`. Reports `resp_error` if `BRESP` is
not OKAY.

`tb/tb_axi_probe.sv` + `tb/test_axi_probe.py` — a module with no logic and an
all-input port list, used to hand-drive one burst before any RTL existed.
Throwaway, kept as a protocol regression.

`tb/tb_axi_rd.sv`, `tb/tb_axi_wr.sv` and their tests — each master exercised
standalone against `AxiRamRead` / `AxiRamWrite` with pause generators, before
either went near the cache.

`hdl/dcache.sv` — write-back/write-allocate, dirty bits, victim eviction, both
masters instantiated, `mem_*` ports replaced by a full AXI4 master port group.

`tb/tb_top.sv` — now a pure pass-through. No memory in RTL at all.

### Decided, and why

**Bring write-back forward from week 4.** The plan's step 5 assumes writebacks
are whole lines, but the cache was still write-through with byte enables, and
`axi_write_master` hardwires `WSTRB` to all ones because a line writeback always
touches every byte. The alternatives were a single-beat mode on the write master
(20 lines that week 4 makes redundant) or carrying `dumb_mem` alongside `AxiRam`
for the write path only — two memory models in one testbench, for one week.
Neither is worth it. Writeback and associativity turn out to be orthogonal:
pseudo-LRU needs associativity, associativity needs nothing, writeback needs
nothing. Only the writeback half came forward.

**Policy change first, against `dumb_mem`; AXI swap second.** Three commits, one
variable at a time. A writeback bug and an integration bug arriving together is
exactly what the plan's incremental structure exists to prevent.

**Masters as separate modules inside `dcache`, not merged into it.** They own
disjoint signal sets — read master drives AR and RREADY, write master drives AW,
W and BREADY — so no arbitration is needed and neither module knows the other
exists. That is AXI's read/write channel independence paying off structurally.
It also means each was testable standalone, which is where the burst mechanics
got debugged: an `ARLEN` off-by-one in a 100-line module is a different problem
from the same bug inside a cache, where a wrong beat looks like a tag comparison
failure.

**Hand-drive the first burst rather than using `AxiMaster`.** `cocotbext-axi`
ships a master that would have made step 1 a single call. Using it would have
meant writing `axi_read_master.sv` in step 3 with no mental picture of what a
correct waveform looks like. Fifteen minutes of poking `ARVALID` bought the
ability to recognise a wrong one on sight.

**Serialised eviction: evict fully, including `BVALID`, then fill.** `S_EVICT_REQ`
→ `S_EVICT_WAIT` → `S_FILL_REQ`. Overlapping them is §0.3 and needs a victim
buffer; doing it now would mean two masters live at once with no mechanism to
order them.

**Full-width beats only.** `ARSIZE`/`AWSIZE` always equal the bus width, `WSTRB`
always all ones. Narrow transfers rotate active byte lanes per beat and are
genuinely fiddly. Documented as a limitation rather than half-implemented.

**Tie off `ARLOCK`/`ARCACHE`/`ARPROT` and their AW counterparts** rather than
omitting them. `cocotbext-axi` treats them as optional, but Vivado's IP packager
matches signal names to infer an AXI interface, and a missing one means
hand-wiring thirty ports in the block designer in week 6. Three constants that
synthesise to nothing.

### Broke

**Beat 0 vanished under backpressure.** The hand-driven test called
`r_collect()` after `ar_send()` returned, so there was a window between the AR
handshake and the collector's first sample. Without backpressure the first beat
happened to land inside the observation window and the test passed. With
backpressure the timing shifted by one cycle and beat 0 handshook while nobody
was watching — three beats collected, first one missing, and the survivors were
beats 1–3 with correct data.

Fix: `cocotb.start_soon(r_collect(...))` *before* issuing the request, so the
collector is live before any beat can exist.

This is the second instance of the same class of bug as week 2's whitebox tap
misordering. Rule now explicit: **a monitor is a background task started once,
never a function called on demand.** The week-2 `CpuMonitor` had this right; I
broke the pattern by writing the collector as a called function and the
backpressure test caught it.

Worth recording that the *only* reason it was caught is that the plan says turn
backpressure on from day one. A zero-latency slave hides it completely.

**`WLAST` and the beat counter, caught in design rather than simulation.** The
read master increments `beat_cnt` unconditionally on every beat. Copy-pasting
that to the write side would have been wrong, because there `WLAST` is
combinational from the counter:

```systemverilog
assign m_axi_wlast = (beat_cnt == LAST_BEAT);
```

If the counter wrapped 3→0 on the final beat, `WLAST` would drop in the same
cycle the slave samples it. The counter is frozen at `LAST_BEAT` by a
`!m_axi_wlast` guard until the next request resets it.

The asymmetry is the direction flip: on the read side nothing downstream depends
on the counter's value, on the write side the protocol output does.
`test_neighbours_untouched` exists specifically to catch this — it fills three
lines' worth of memory with a marker, writes the middle one, and checks the
neighbours are untouched. A burst one beat too long spills upward; one too short
leaves the line incomplete. Checking only the target line catches neither.

**No RTL bugs during the AXI swap.** Both layers clean on the first run after
integration. That is a direct consequence of the masters having been verified
standalone under backpressure first — every burst-mechanics bug had already been
found somewhere small.

### Learned

**`VALID` must not depend on `READY`; `READY` may depend on `VALID`.** The
prohibition is what prevents deadlock, not the permission. If both sides may
wait, both wait forever. AXI bans the sender-waits-for-receiver direction
because a sender always knows whether it has data (purely internal state),
whereas a receiver often cannot know whether it can accept without seeing the
request — an arbiter routing `READY` to whichever master is granted is exactly
`READY` depending on `VALID`, and is structurally unavoidable. Ban it and every
shared bus needs a pipeline register.

Also: it is not really a rule about combinational paths. Make both dependencies
registered and there is no loop, no `UNOPTFLAT`, clean synthesis — and it still
hangs forever. The rule is that the sender must commit without knowing anything
about the receiver's state.

**`ARLEN` and `ARSIZE` encode differently.** `ARLEN` is beats minus one;
`ARSIZE` is log2 of bytes per beat. Both are 3 in the default config, from two
unrelated derivations. Never written as literals in the RTL for exactly that
reason.

**Acceptance is not completion.** The old `S_WRITE_THROUGH` left as soon as
`mem_req_ready` went high. AXI splits this: the W beats being accepted means the
data reached the slave's write buffer; `BVALID` means the write actually landed.
Hence `S_EVICT_WAIT`, which has no read-side counterpart. Under `dumb_mem` the
distinction was invisible because it latched writes on the accept cycle and then
held `ready` low while busy, so the fill stalled by accident rather than by
design.

**Write-allocate came out of `S_REPLAY` for free.** A store miss now takes the
same path as a read miss: evict if dirty, fill, replay. On replay, `s1_*` still
holds the original request — `s1_can_advance` was low throughout, so nothing
retired — and the request is re-evaluated as a store hit, which writes the word
and sets dirty. No "store after fill" state, no new datapath. Week 1's note that
"`S_REPLAY` means there is no separate response path for misses" turned out to
predict this exactly.

**`s0s1_conflict` went from unreachable to load-bearing**, as the week-1 note
predicted. Under write-through, `cmd_store` only fired in `S_WRITE_THROUGH`
where `req_ready` was already low. Under write-back a store hit retires in
`S_IDLE` in a single cycle, which is precisely the cycle a new request would be
accepted and reading the array.

**Write-back is not unconditionally cheaper.** Under this stimulus it moved
*more* bytes than write-through: 3,813 line fills + 1,743 32-byte writebacks
versus 2,590 fills + 3,496 4-byte write-throughs. Write transaction count
halved, but each write became eight times larger. Random addresses with poor
locality are the worst case for the policy — the win comes from repeated stores
to a resident line, which random stimulus rarely produces.
`test_repeated_stores_one_writeback` demonstrates the mechanism directly:
8 stores to one line, 1 bus write. Under write-through that is 8.

**Hierarchy is invisible from outside.** `AxiRam` sees ~30 flat top-level
signals and cannot tell that two separate master modules sit behind them. Port
lists are the only contract; internal structure is a free choice. Merging the
two masters tomorrow would be undetectable from the slave side.

### Open for later

- `resp_error` on the write master is untested — `AxiRam` always returns OKAY,
  so `err_q` has never been non-zero
- Neither master has been exercised with `req_valid` held high across
  back-to-back requests; `fetch_line`/`write_line` block on the response, so the
  `S_RESP` → `S_IDLE` → `S_AW` turnaround is never stressed. Needs a queue-based
  driver like `CpuDriver` (week 5)
- Single-cycle store hit is asserted by design but not measured — the testbench
  has no latency instrumentation. Needs the performance counter block (week 6)
- `victim_sel` is hardwired to way 0. Correct at `WAYS=1`, silently useless
  above it (week 5)
- Overlapped eviction and fill via a victim buffer, §0.3 (week 5)
- Narrow transfers (`ARSIZE` < bus width) unimplemented and out of scope
- One outstanding transaction only; `ARID`/`AWID` tied to 0