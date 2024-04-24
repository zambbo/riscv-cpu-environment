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
	reg [31:0] mem [0:1024*1024-1] /*verilator public*/;

	always @(posedge clk) begin
		if (iBus_cmd_valid && iBus_cmd_ready) begin
			iBus_rsp_payload_inst <= mem[iBus_cmd_payload_pc[31:2]];
		end
	end

	assign iBus_cmd_ready = 1'b1;
	assign iBus_rsp_valid = 1'b1;
	assign iBus_rsp_payload_error = 1'b0;

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
	reg [31:0] mem [0:1024*1024-1] /*verilator public*/;
	reg [31:0] rdata;

	always @(posedge clk) begin
		if (dBus_cmd_valid && dBus_cmd_ready) begin
			if (dBus_cmd_payload_wr) begin
				case (dBus_cmd_payload_size)
					2'b00: mem[dBus_cmd_payload_address[31:2]][7:0] <= dBus_cmd_payload_data[7:0];
					2'b01: mem[dBus_cmd_payload_address[31:2]][15:0] <= dBus_cmd_payload_data[15:0];
					2'b10: mem[dBus_cmd_payload_address[31:2]][31:0] <= dBus_cmd_payload_data[31:0];
				endcase
			end else begin
				rdata <= mem[dBus_cmd_payload_address[31:2]];
			end 
		end
	end

	assign dBus_cmd_ready = 1'b1;
	assign dBus_rsp_ready = 1'b1;
	assign dBus_rsp_error = 1'b0;
	assign dBus_rsp_data = rdata;
endmodule

module vexriscv_tiny_soc(
	input clk,
	input reset
);
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
endmodule

