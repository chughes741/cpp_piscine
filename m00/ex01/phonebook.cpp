
#include "PhoneBook.hpp"

// Default constructor method
PhoneBook::PhoneBook(void) : n_contacts_(0), add_position_(0) { return; }

// Default deconstructor method
PhoneBook::~PhoneBook() { return; }

// Method for adding new contact information
void PhoneBook::addContact(void) {
  if (n_contacts_ == 8 && add_position_ == 8)
    add_position_ = 0;
  else if (n_contacts_ == 8)
    add_position_ += 1;
  else
    add_position_ = n_contacts_;
  n_contacts_ += (n_contacts_ < 8) ? 1 : 0;

  std::string input;

  std::cout << "Enter the new contacts first name: " << std::endl;
  getline(std::cin, input);
  if (std::cin.eof()) exit(0);
  contacts_[add_position_].setFirstName(input);

  std::cout << "Enter the new contacts last name: " << std::endl;
  getline(std::cin, input);
  if (std::cin.eof()) exit(0);
  contacts_[add_position_].setLastName(input);

  std::cout << "Enter the new contacts nickname: " << std::endl;
  getline(std::cin, input);
  if (std::cin.eof()) exit(0);
  contacts_[add_position_].setNickname(input);

  std::cout << "Enter the new contacts phonenumber: " << std::endl;
  getline(std::cin, input);
  if (std::cin.eof()) exit(0);
  contacts_[add_position_].setPhoneNumber(input);

  std::cout << "Enter the new contacts darkest secret: " << std::endl;
  getline(std::cin, input);
  if (std::cin.eof()) exit(0);
  contacts_[add_position_].setDarkestSecret(input);

  std::cout << "Added new contact" << std::endl;
  return;
}

// Trims str to 10 char, appends "." at [10] if longer than 10
static std::string setWidthToTen(std::string str) {
  if (str.length() > 10) {
    str.resize(9);
    str.append(".");
  }
  return (str);
}

// Method for searching through Contacts
void PhoneBook::searchContacts(void) {
  if (n_contacts_ == 0) {
    std::cout << "There are no contacts in this phonebook!" << std::endl;
    return;
  }
  for (int i = 1; i <= n_contacts_; ++i) {
    std::cout.width(10);
    std::cout << i << " | ";
    std::cout.width(10);
    std::cout << setWidthToTen(contacts_[i - 1].getFirstName()) << " | ";
    std::cout.width(10);
    std::cout << setWidthToTen(contacts_[i - 1].getLastName()) << " | ";
    std::cout.width(10);
    std::cout << setWidthToTen(contacts_[i - 1].getNickname()) << std::endl
              << std::endl;
  }
  printContact();
  return;
}

// Prints contact details of Contact[i]
void PhoneBook::printContact(void) {

  std::string input;
  std::cout << "Enter the index of the contact you want to view: " << std::endl;
  getline(std::cin, input);
  if (std::cin.eof()) exit(0);

  int index;
  try {
    index = std::stoi(input);
  } catch (std::out_of_range) {
    index = -1;
  }

  if (0 < index && index <= n_contacts_) {
    std::cout << "First name: ";
    std::cout << contacts_[index - 1].getFirstName() << std::endl;
    std::cout << "Last name: ";
    std::cout << contacts_[index - 1].getLastName() << std::endl;
    std::cout << "Nickname: ";
    std::cout << contacts_[index - 1].getNickname() << std::endl;
    std::cout << "Phone number: ";
    std::cout << contacts_[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: ";
    std::cout << contacts_[index - 1].getDarkestSecret() << std::endl
              << std::endl;
  } else {
    std::cout << "Invalid index!" << std::endl;
  }
  return;
}
