module adder (
  input  logic       clk,
  input  logic [7:0] a, b,
  output logic [8:0] y
);
  always_ff @(posedge clk) y <= a + b;
endmodule