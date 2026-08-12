package dcache_pkg;

  // Week 1 FSM. Grows in week 3 (writeback states).
  typedef enum logic [2:0] {
    S_IDLE,
    S_LOOKUP,
    S_FILL_REQ,
    S_FILL_WAIT,
    S_REPLAY,
    S_WRITE_THROUGH
  } state_e;

  localparam logic [1:0] AXI_RESP_OKAY = 2'b00;

endpackage

