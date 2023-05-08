#include <cstdlib>
#include <iostream>

#include "RPN.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <expression>" << std::endl;
    return EXIT_FAILURE;
  }

  try {
    RPN rpn(argv[1]);
    std::cout << rpn << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Error" << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
