

#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include <iomanip>
#include <iostream>
#include <string>

#include "Contact.hpp"

// Class holding array of Contacts
class PhoneBook {
 public:
  PhoneBook(void);
  PhoneBook(const PhoneBook &phonebook);
  ~PhoneBook();
  PhoneBook &operator=(const PhoneBook &phonebook);

  void addContact(void);
  void searchContacts(void);

 private:
  Contact contacts_[8];
  int n_contacts_;
  int add_position_;
  void printContact(void);

};

#endif  // PHONEBOOK_H_
