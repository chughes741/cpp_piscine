
#include "PhoneBook.hpp"

void addEightContacts(PhoneBook *pb);

int main() {
  PhoneBook pb;
  std::string input;

  while (1) {
    std::cout << "Enter command: ADD, SEARCH, EXIT" << std::endl;
    getline(std::cin, input);
    if (std::cin.eof()) {
      exit(0);
    } else if (input.compare("ADD") == 0) {
      pb.addContact();
    } else if (input.compare("SEARCH") == 0) {
      pb.searchContacts();
    } else if (input.compare("EXIT") == 0) {
      break;
    } else
      input.clear();
  }
  return 0;
}
