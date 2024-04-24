#include <verilated.h>
#include "Vvexriscv_tiny_soc.h"
#include "Vvexriscv_tiny_soc_VexRiscv.h"
#include "Vvexriscv_tiny_soc_IBus_Mem.h"
#include "Vvexriscv_tiny_soc_DBus_Mem.h"
#include "Vvexriscv_tiny_soc_vexriscv_tiny_soc.h"
#include <fstream>
#include <iostream>

void print_regs(Vvexriscv_tiny_soc *soc) {
	for (int i=0; i<32; i+=4) {
		uint32_t reg0 = soc->vexriscv_tiny_soc->cpu->RegFilePlugin_regFile[i];
		uint32_t reg1 = soc->vexriscv_tiny_soc->cpu->RegFilePlugin_regFile[i+1];
		uint32_t reg2 = soc->vexriscv_tiny_soc->cpu->RegFilePlugin_regFile[i+2];
		uint32_t reg3 = soc->vexriscv_tiny_soc->cpu->RegFilePlugin_regFile[i+3];
		printf("x%d: %08x, x%d: %08x, x%d: %08x, x%d: %08x\n",i, reg0, i+1, reg1, i+2, reg2, i+3, reg3);
	}
}

int main(int argc, char **argv) {
	Verilated::commandArgs(argc, argv);

	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <input hex file>" << std::endl;
		return 1;
	}

	const char *program_hex = argv[1];

	Vvexriscv_tiny_soc *soc = new Vvexriscv_tiny_soc;
	
	std::cout<<"Sim start!" << std::endl;

	std::ifstream program_input_stream(program_hex);
	if (!program_input_stream) {
		std::cerr << "Failed to open file: " << program_hex << std::endl;
		return 1;
	}

	std::string line;
	uint32_t address = 0;
	while (std::getline(program_input_stream, line)) {
		uint32_t data = std::stoul(line, nullptr, 16);
		soc->vexriscv_tiny_soc->imem->mem[address] = data;
		soc->vexriscv_tiny_soc->dmem->mem[address] = data;
//		std::cout << "address:" << std::hex << (address<<2) << "data: " << data << std::endl;
		address++;
	}

	// initialization
	soc->reset = 1;
	soc->clk = 0;
	soc->eval();
	soc->reset=0;

	
	std::cout<< std::hex << soc->vexriscv_tiny_soc->dmem->mem[0x20004 >> 2] <<std::endl;

	for (int i=0; i<40; i++) {
		soc->clk = 1;
		soc->eval();	
		
		std::cout<<"***************************"<< std::dec << i<<"*********************************"<<std::endl;
		
		std::cout << "dBus_rsp_data: " << std::hex << "0x" << soc->vexriscv_tiny_soc->dmem->__PVT__dBus_rsp_data << std::endl;
		std::cout << "iBus_rsp_payload_inst: " << std::hex << "0x" << soc->vexriscv_tiny_soc->imem->__PVT__iBus_rsp_payload_inst << std::endl;
		std::cout << "dBus_cmd_payload_address: " << std::hex << "0x" << soc->vexriscv_tiny_soc->dmem->__PVT__dBus_cmd_payload_address << std::endl;
		std::cout << "dBus_cmd_valid: " << std::dec << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->dmem->__PVT__dBus_cmd_valid) << std::endl;
		std::cout << "iBus_cmd_payload_pc: " << std::hex << "0x" << soc->vexriscv_tiny_soc->imem->__PVT__iBus_cmd_payload_pc << std::endl;
		std::cout << "dBus_cmd_ready: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->dmem->__PVT__dBus_cmd_ready) << std::endl;
		std::cout << "dBus_cmd_payload_wr: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->dmem->__PVT__dBus_cmd_payload_wr) << std::endl;
		std::cout << "dBus_cmd_payload_data: " << std::hex << "0x" << soc->vexriscv_tiny_soc->dmem->__PVT__dBus_cmd_payload_data << std::endl;
		std::cout << "dBus_cmd_payload_size: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->dmem->__PVT__dBus_cmd_payload_size) << std::endl;
		std::cout << "dBus_rsp_ready: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->dmem->__PVT__dBus_rsp_ready) << std::endl;
		std::cout << "dBus_rsp_error: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->dmem->__PVT__dBus_rsp_error) << std::endl;
		std::cout << "iBus_cmd_valid: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->imem->__PVT__iBus_cmd_valid) << std::endl;
		std::cout << "iBus_cmd_ready: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->imem->__PVT__iBus_cmd_ready) << std::endl;
		std::cout << "iBus_rsp_valid: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->imem->__PVT__iBus_rsp_valid) << std::endl;
		std::cout << "iBus_rsp_payload_error: " << std::hex << "0x" << static_cast<int>(soc->vexriscv_tiny_soc->imem->__PVT__iBus_rsp_payload_error) << std::endl;
		std::cout<< std::hex << soc->vexriscv_tiny_soc->dmem->mem[0x10000 >> 2] <<std::endl;
		std::cout<< std::hex << soc->vexriscv_tiny_soc->dmem->mem[0x20004 >> 2] <<std::endl;
		soc->clk = 0;
		soc->eval();
		print_regs(soc);
	}
	delete soc;
	return 0;
}

