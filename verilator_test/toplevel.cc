#include "VSimpleCounter.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);

	VSimpleCounter* tb = new VSimpleCounter;

	std::cout << "Reset Start!" << std::endl;
	tb->reset = 1;
	tb->eval();
	std::cout << "Reset Output: " << tb->output_n << std::endl;
	tb->reset = 0;
	tb->eval();
	tb->reset = 1;
	tb->eval();

	std::cout << "Reset Output: " << tb->output_n << std::endl;

	for (int i=0; i<10; i++) {
		tb->clk = 0;
		tb->eval();
		tb->clk = 1;
		tb->eval();
		std::cout << "Output: " << tb->output_n << std::endl;
	}

	std::cout << "Finish!" << std::endl;

	return 0;
}
