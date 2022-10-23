
#include "PhoneBook.hpp"


// Default constructor method
PhoneBook::PhoneBook( void ) {
	return;
}

// Default deconstructor method
PhoneBook::~PhoneBook() {
	return;
}

// Method for adding new contact information
void PhoneBook::addContact( void ) {
	n_contacts_ += (n_contacts_ < 8) ? 1 : 0;
	contacts_[n_contacts_].setFirstName();
	contacts_[n_contacts_].setLastName();
	contacts_[n_contacts_].setNickname();
	contacts_[n_contacts_].setPhoneNumber();
	contacts_[n_contacts_].setDarkestSecret();
	std::cout << "Added new contact" << std::endl;
	return;
}

// Method for searching through Contacts
void PhoneBook::searchContacts( void ) {
	// TODO right align and set width to 10
	for (int i = 1; i <= n_contacts_; ++i) {		
		std::cout.width(10); std::cout << i 														<< " | ";
		std::cout.width(10); std::cout << contacts_[i].getFirstName()		<< " | ";
		std::cout.width(10); std::cout << contacts_[i].getLastName()		<< " | ";
		std::cout.width(10); std::cout << contacts_[i].getNickname()		<< std::endl;
	}
	printContact();
	return;
}

// Prints contact details of Contact[i]
void PhoneBook::printContact( void ) {
	int i;
	std::cin >> i;
	if (0 <= i && i < n_contacts_) {
		std::cout << contacts_[i].getFirstName()			<< std::endl;
		std::cout << contacts_[i].getLastName()				<< std::endl;
		std::cout << contacts_[i].getNickname()				<< std::endl;
		std::cout << contacts_[i].getPhoneNumber()		<< std::endl;
		std::cout << contacts_[i].getDarkestSecret()	<< std::endl;
	} else {
		std::cout << "Index out of range" << std::endl;
	}
	return;
}
