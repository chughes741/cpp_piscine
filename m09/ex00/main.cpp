#include <cstdlib>
#include <iostream>
#include <map>

#include "BitcoinExchange.hpp"

int main(int argc, char const *argv[]) {
  // Exit if arguments are not passed
  if (argc != 2) {
    std::cerr << "Useage: " << argv[0] << " path_to_file" << std::endl;
    exit(EXIT_FAILURE);
  }

  // Exit if file is not open
  std::ifstream file(argv[1]);
  if (!file.is_open()) {
    std::cerr << "Error: could not open file" << std::endl;
    exit(EXIT_FAILURE);
  }

  // Load database
  Database database;

  // database.print();

  return EXIT_SUCCESS;
}
