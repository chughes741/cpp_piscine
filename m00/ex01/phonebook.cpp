
#include "PhoneBook.hpp"

// Default constructor method
PhoneBook::PhoneBook(void) { return; }

// Default deconstructor method
PhoneBook::~PhoneBook() { return; }

// Method for adding new contact information
void PhoneBook::addContact(void) {
  n_contacts_ += (n_contacts_ < 8) ? 1 : 0;
  contacts_[n_contacts_ - 1].setFirstName();
  contacts_[n_contacts_ - 1].setLastName();
  contacts_[n_contacts_ - 1].setNickname();
  contacts_[n_contacts_ - 1].setPhoneNumber();
  contacts_[n_contacts_ - 1].setDarkestSecret();
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
  int i;
  std::cout << "Enter the index of the contact you want to view: " << std::endl;
  std::cin >> i;
  if (0 <= i && i <= n_contacts_) {
    std::cout << "First name: ";
    std::cout << contacts_[i - 1].getFirstName() << std::endl;
    std::cout << "Last name: ";
    std::cout << contacts_[i - 1].getLastName() << std::endl;
    std::cout << "Nickname: ";
    std::cout << contacts_[i - 1].getNickname() << std::endl;
    std::cout << "Phone number: ";
    std::cout << contacts_[i - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: ";
    std::cout << contacts_[i - 1].getDarkestSecret() << std::endl << std::endl;
  } else {
    std::cout << "Index out of range" << std::endl;
  }
  return;
}
