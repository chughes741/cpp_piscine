

#include <iostream>
#include "Scalar.hpp"

int main(int argc, char **argv) {

	if (argc != 2) { std::cerr << "Incorrect number of arguments" << std::endl; }

	try {
		Scalar inputscalar = Scalar(argv[1]);
		inputscalar.printTypes();
	} catch (Scalar::TypeConversionError &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}