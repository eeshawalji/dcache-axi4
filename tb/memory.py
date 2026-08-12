import random
from cocotb.triggers import Timer
from config import WORD_BYTES, LINE_BYTES, MEM_LINES, WORDS_PER_LINE


def build_image(seed=0):
    """Known pseudorandom contents: {word_addr: value}."""
    rng = random.Random(seed)
    return {
        line * LINE_BYTES + slot * WORD_BYTES: rng.getrandbits(32)
        for line in range(MEM_LINES)
        for slot in range(WORDS_PER_LINE)
    }


async def preload(dut, image):
    """Force dumb_mem contents to match `image`."""
    for line in range(MEM_LINES):
        packed = 0
        for slot in range(WORDS_PER_LINE):
            w = image[line * LINE_BYTES + slot * WORD_BYTES]
            packed |= w << (32 * slot)
        dut.u_mem.mem[line].value = packed
    await Timer(1, unit="ns")     # let the forced values settle