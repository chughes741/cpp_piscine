

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
  void printContact(void);
  int n_contacts_;
  Contact contacts_[8];
};

#endif  // PHONEBOOK_H_
