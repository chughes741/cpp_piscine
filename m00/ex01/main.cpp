
#include "PhoneBook.hpp"

void addEightContacts(PhoneBook *pb);

int main() {
  PhoneBook pb;
  std::string input;

  addEightContacts(&pb);
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

void addEightContacts(PhoneBook *pb) {
  pb->contacts_[0].setFirstName("Cole");
  pb->contacts_[0].setLastName("Hughes");
  pb->contacts_[0].setNickname("Cole");
  pb->contacts_[0].setPhoneNumber("123");
  pb->contacts_[0].setDarkestSecret("I like tea");

  pb->contacts_[1].setFirstName("Antoine");
  pb->contacts_[1].setLastName("Boisvert");
  pb->contacts_[1].setNickname("Tony");
  pb->contacts_[1].setPhoneNumber("234");
  pb->contacts_[1].setDarkestSecret("He likes vim");

  pb->contacts_[2].setFirstName("Chirs");
  pb->contacts_[2].setLastName("Andre");
  pb->contacts_[2].setNickname("Big C");
  pb->contacts_[2].setPhoneNumber("345");
  pb->contacts_[2].setDarkestSecret("He doesn't exist");

  pb->contacts_[3].setFirstName("Kim");
  pb->contacts_[3].setLastName("K");
  pb->contacts_[3].setNickname("CC");
  pb->contacts_[3].setPhoneNumber("456");
  pb->contacts_[3].setDarkestSecret("She isn't real");

  pb->contacts_[4].setFirstName("Paul");
  pb->contacts_[4].setLastName("James");
  pb->contacts_[4].setNickname("Pauly");
  pb->contacts_[4].setPhoneNumber("567");
  pb->contacts_[4].setDarkestSecret("Tuna fish");

  pb->contacts_[5].setFirstName("Alan");
  pb->contacts_[5].setLastName("Paul");
  pb->contacts_[5].setNickname("Ape");
  pb->contacts_[5].setPhoneNumber("678");
  pb->contacts_[5].setDarkestSecret("Macrohard");

  pb->contacts_[6].setFirstName("Kyle");
  pb->contacts_[6].setLastName("Stevens");
  pb->contacts_[6].setNickname("Kimmy");
  pb->contacts_[6].setPhoneNumber("789");
  pb->contacts_[6].setDarkestSecret("Likes cats");

  pb->contacts_[7].setFirstName("Alain");
  pb->contacts_[7].setLastName("Prost");
  pb->contacts_[7].setNickname("Al");
  pb->contacts_[7].setPhoneNumber("890");
  pb->contacts_[7].setDarkestSecret("Hates Ferrari");
}