module data_array #(
  parameter int WIDTH = 256,              // LINE_BYTES*8
  parameter int DEPTH = 64                // SETS
) (
  input  logic                     clk,
  input  logic [$clog2(DEPTH)-1:0] raddr,
  output logic [WIDTH-1:0]         rdata,
  input  logic [$clog2(DEPTH)-1:0] waddr,
  input  logic [WIDTH/8-1:0]       wbe,   // one bit per byte
  input  logic [WIDTH-1:0]         wdata
);

  localparam int BYTES = WIDTH/8;

  logic [WIDTH-1:0] mem [DEPTH];

  always_ff @(posedge clk) begin
    for (int b = 0; b < BYTES; b++)
      if (wbe[b]) mem[waddr][b*8 +: 8] <= wdata[b*8 +: 8];
    rdata <= mem[raddr];
  end

endmodule
