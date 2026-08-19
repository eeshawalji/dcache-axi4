"""Shared AXI testbench helpers."""

import random


def random_pause(rate=0.2, seed=0):
    """Yield one pause decision per clock cycle.

    On a sink (AW, W, AR) a pause deasserts READY.
    On a source (B, R) a pause deasserts VALID.
    """
    rnd = random.Random(seed)
    while True:
        yield rnd.random() < rate