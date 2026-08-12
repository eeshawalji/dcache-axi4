  # Must match the -G values in the Makefile and dumb_mem's parameters.
CAPACITY_BYTES = 8192
LINE_BYTES     = 32
WAYS           = 1
CPU_DATA_W     = 32

WORD_BYTES = CPU_DATA_W // 8
SETS       = CAPACITY_BYTES // (LINE_BYTES * WAYS)
SET_STRIDE = SETS * LINE_BYTES        # addresses this far apart share a set
WORDS_PER_LINE = LINE_BYTES // WORD_BYTES

# dumb_mem geometry. It decodes only addr[16:5], so stimulus must stay below MEM_BYTES.
MEM_LINES   = 4096
MEM_BYTES   = MEM_LINES * LINE_BYTES
MEM_LATENCY = 8

CLK_NS = 10