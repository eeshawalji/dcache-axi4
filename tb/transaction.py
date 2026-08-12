from dataclasses import dataclass

@dataclass
class Request:
    we:    bool
    addr:  int
    wdata: int = 0
    be:    int = 0xF
    gap:   int = 0     # idle cycles to insert *before* this request