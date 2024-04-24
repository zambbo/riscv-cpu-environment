module IBus_Mem(
	input clk,
	input reset,
	input iBus_cmd_valid,
	output iBus_cmd_ready,
	input [31:0] iBus_cmd_payload_pc,
	output iBus_rsp_valid,
	output iBus_rsp_payload_error,
	output reg [31:0] iBus_rsp_payload_inst
);
	reg [31:0] mem [0:16777215];

	always @(posedge clk) begin
		$display("iBus_cmd_valid: %d iBus_cmd_payload_pc: %08h", iBus_cmd_valid, iBus_cmd_payload_pc);
		if (iBus_cmd_valid && iBus_cmd_ready) begin
			iBus_rsp_payload_inst <= mem[(iBus_cmd_payload_pc - 32'h80000000) >> 2];
		end
	end

	assign iBus_cmd_ready = 1'b1;
	assign iBus_rsp_valid = 1'b1;
	assign iBus_rsp_payload_error = 1'b0;

	initial begin
		mem[0] = 32'h00500093; // addi x1, x0, 5
		mem[1] = 32'h00a00113; // addi x2, x0, 10
		mem[2] = 32'h002081b3; // add x3, x1, x2
	end
endmodule

module DBus_Mem(
	input clk,
	input reset,
	input dBus_cmd_valid,
	output dBus_cmd_ready,
	input dBus_cmd_payload_wr,
	input [31:0] dBus_cmd_payload_address,
	input [31:0] dBus_cmd_payload_data,
	input [1:0] dBus_cmd_payload_size,
	output dBus_rsp_ready,
	output dBus_rsp_error,
	output [31:0] dBus_rsp_data
);
	reg [31:0] mem [0:1023];

	always @(posedge clk) begin
		if (dBus_cmd_valid && dBus_cmd_ready && dBus_cmd_payload_wr) begin
			case (dBus_cmd_payload_size)
				2'b00: mem[dBus_cmd_payload_address[31:2]][7:0] <= dBus_cmd_payload_data[7:0];
				2'b01: mem[dBus_cmd_payload_address[31:2]][15:0] <= dBus_cmd_payload_data[15:0];
				2'b10: mem[dBus_cmd_payload_address[31:2]][31:0] <= dBus_cmd_payload_data[31:0];
			endcase
		end
	end

	assign dBus_cmd_ready = 1'b1;
	assign dBus_rsp_ready = 1'b1;
	assign dBus_rsp_error = 1'b0;
	assign dBus_rsp_data = mem[dBus_cmd_payload_address[31:2]];
endmodule

module toplevel;

	reg clk;
	reg reset;

	wire iBus_cmd_valid;
	wire iBus_cmd_ready;
	wire [31:0] iBus_cmd_payload_pc;
	wire        iBus_rsp_valid;
	wire        iBus_rsp_payload_error;
	wire [31:0] iBus_rsp_payload_inst;

	wire        dBus_cmd_valid;
	wire        dBus_cmd_ready;
	wire        dBus_cmd_payload_wr;
  	wire [31:0] dBus_cmd_payload_address;
  	wire [31:0] dBus_cmd_payload_data;
  	wire [1:0]  dBus_cmd_payload_size;
  	wire        dBus_rsp_ready;
  	wire        dBus_rsp_error;
  	wire [31:0] dBus_rsp_data;

	VexRiscv cpu (
		.clk(clk),
		.reset(reset),
		.iBus_cmd_valid(iBus_cmd_valid),
		.iBus_cmd_ready(iBus_cmd_ready),
		.iBus_cmd_payload_pc(iBus_cmd_payload_pc),
		.iBus_rsp_valid(iBus_rsp_valid),
		.iBus_rsp_payload_error(iBus_rsp_payload_error),
		.iBus_rsp_payload_inst(iBus_rsp_payload_inst),
		.timerInterrupt(1'b0),
		.externalInterrupt(1'b0),
		.softwareInterrupt(1'b0),
		.dBus_cmd_valid(dBus_cmd_valid),
		.dBus_cmd_ready(dBus_cmd_ready),
		.dBus_cmd_payload_wr(dBus_cmd_payload_wr),
		.dBus_cmd_payload_address(dBus_cmd_payload_address),
		.dBus_cmd_payload_data(dBus_cmd_payload_data),
		.dBus_cmd_payload_size(dBus_cmd_payload_size),
		.dBus_rsp_ready(dBus_rsp_ready),
		.dBus_rsp_error(dBus_rsp_error),
		.dBus_rsp_data(dBus_rsp_data)
	);

	IBus_Mem imem (
		.clk(clk),
		.reset(reset),
		.iBus_cmd_valid(iBus_cmd_valid),
		.iBus_cmd_ready(iBus_cmd_ready),
		.iBus_cmd_payload_pc(iBus_cmd_payload_pc),
		.iBus_rsp_valid(iBus_rsp_valid),
		.iBus_rsp_payload_error(iBus_rsp_payload_error),
		.iBus_rsp_payload_inst(iBus_rsp_payload_inst)
	);

	DBus_Mem dmem (
		.clk(clk),
		.reset(reset),
		.dBus_cmd_valid(dBus_cmd_valid),
		.dBus_cmd_ready(dBus_cmd_ready),
		.dBus_cmd_payload_wr(dBus_cmd_payload_wr),
		.dBus_cmd_payload_address(dBus_cmd_payload_address),
		.dBus_cmd_payload_data(dBus_cmd_payload_data),
		.dBus_cmd_payload_size(dBus_cmd_payload_size),
		.dBus_rsp_ready(dBus_rsp_ready),
		.dBus_rsp_error(dBus_rsp_error),
		.dBus_rsp_data(dBus_rsp_data)
	);

	always #5 clk = ~clk;

	initial begin
		clk = 0;
		reset = 1;
		$display("start!");
		#10 reset = 0;

		#1000 $finish;
	end

	always @(posedge clk) begin
	       $display("x1: %d, x2: %d, x3: %d", cpu.RegFilePlugin_regFile[1], cpu.RegFilePlugin_regFile[2], cpu.RegFilePlugin_regFile[3]);
	end	       
endmodule

