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

  // Convert each line to date and value
  std::string line;
  while (std::getline(file, line)) {
    date_t date;
    double value = 0;

    // Stream data into date and value
    std::stringstream stream(line);
    char              dash1, dash2, pipe;

    stream >> date.tm_year >> dash1 >> date.tm_mon >> dash2 >> date.tm_mday >> pipe >> value;

    if (value < 0) {
      std::cerr << "Error: value cannot be negative" << std::endl;
    } else if (value > 1000) {
      std::cerr << "Error: value cannot be greater than " << 1000 << std::endl;
    } else if (!isValidDate(date)) {
      std::cerr << "Error: invalid date " << date << std::endl;
    } else {
      double price = database.getPrice(date);
      std::cout << date << " => " << value * price << std::endl;
    }
  }

  return EXIT_SUCCESS;
}
