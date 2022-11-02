
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
  pb->contacts_[pb->add_position_].setFirstName("Cole");
  pb->contacts_[pb->add_position_].setLastName("Hughes");
  pb->contacts_[pb->add_position_].setNickname("Cole");
  pb->contacts_[pb->add_position_].setPhoneNumber("123");
  pb->contacts_[pb->add_position_].setDarkestSecret("I like tea");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Antoine");
  pb->contacts_[pb->add_position_].setLastName("Boisvert");
  pb->contacts_[pb->add_position_].setNickname("Tony");
  pb->contacts_[pb->add_position_].setPhoneNumber("234");
  pb->contacts_[pb->add_position_].setDarkestSecret("He likes vim");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Chirs");
  pb->contacts_[pb->add_position_].setLastName("Andre");
  pb->contacts_[pb->add_position_].setNickname("Big C");
  pb->contacts_[pb->add_position_].setPhoneNumber("345");
  pb->contacts_[pb->add_position_].setDarkestSecret("He doesn't exist");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Kim");
  pb->contacts_[pb->add_position_].setLastName("K");
  pb->contacts_[pb->add_position_].setNickname("CC");
  pb->contacts_[pb->add_position_].setPhoneNumber("456");
  pb->contacts_[pb->add_position_].setDarkestSecret("She isn't real");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Paul");
  pb->contacts_[pb->add_position_].setLastName("James");
  pb->contacts_[pb->add_position_].setNickname("Pauly");
  pb->contacts_[pb->add_position_].setPhoneNumber("567");
  pb->contacts_[pb->add_position_].setDarkestSecret("Tuna fish");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Alan");
  pb->contacts_[pb->add_position_].setLastName("Paul");
  pb->contacts_[pb->add_position_].setNickname("Ape");
  pb->contacts_[pb->add_position_].setPhoneNumber("678");
  pb->contacts_[pb->add_position_].setDarkestSecret("Macrohard");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Kyle");
  pb->contacts_[pb->add_position_].setLastName("Stevens");
  pb->contacts_[pb->add_position_].setNickname("Kimmy");
  pb->contacts_[pb->add_position_].setPhoneNumber("789");
  pb->contacts_[pb->add_position_].setDarkestSecret("Likes cats");
  pb->n_contacts_++;
  pb->add_position_++;

  pb->contacts_[pb->add_position_].setFirstName("Alain");
  pb->contacts_[pb->add_position_].setLastName("Prost");
  pb->contacts_[pb->add_position_].setNickname("Al");
  pb->contacts_[pb->add_position_].setPhoneNumber("890");
  pb->contacts_[pb->add_position_].setDarkestSecret("Hates Ferrari");
  pb->n_contacts_++;
  pb->add_position_++;

}