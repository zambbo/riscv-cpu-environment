module SimpleCounter #( parameter WIDTH = 32 ) (
	input clk,
	input reset, 
	output reg [WIDTH-1:0] output_n
);
	reg [WIDTH-1:0] input_n;
	initial begin
		input_n = 32'hFFFFFFFF;
	end
	always @(posedge clk or negedge reset) begin
		if (!reset) begin
			input_n <= 0;
		end else begin
			if (input_n == 32'hFFFFFFFF)
				input_n <= 0;
			else
				input_n <= input_n + 1;
		end
	end

	always @* begin
		output_n = input_n;
	end
endmodule
