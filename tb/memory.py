import random
from cocotb.triggers import Timer
from config import WORD_BYTES, LINE_BYTES, MEM_LINES, MEM_BYTES, WORDS_PER_LINE


def build_image(seed=0):
    """Known pseudorandom contents: {word_addr: value}."""
    rng = random.Random(seed)
    return {
        line * LINE_BYTES + slot * WORD_BYTES: rng.getrandbits(32)
        for line in range(MEM_LINES)
        for slot in range(WORDS_PER_LINE)
    }


def preload(axi_ram, image):
    """Write `image` into the AxiRam model by backdoor. No bus traffic."""
    buf = bytearray(MEM_BYTES)
    for addr, val in image.items():
        buf[addr:addr + WORD_BYTES] = val.to_bytes(WORD_BYTES, "little")
    axi_ram.write(0, bytes(buf))