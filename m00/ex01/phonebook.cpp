
#include "PhoneBook.hpp"


PhoneBook::PhoneBook( void ) {
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

void PhoneBook::addContact() {
	std::string temp;
	_n_contacts += (_n_contacts < 8) ? 1 : 0;
	_contacts[_n_contacts].setFirstName();
	_contacts[_n_contacts].setLastName();
	_contacts[_n_contacts].setNickname();
	_contacts[_n_contacts].setPhoneNumber();
	_contacts[_n_contacts].setDarkestSecret();
	std::cout << "Added new contact" << std::endl;
	return;
}

void PhoneBook::searchContacts() {
	// TODO right align and set width to 10
	for (int i = 1; i <= _n_contacts; ++i) {		
		std::cout.width(10); std::cout	<< i 							<< " | ";
		std::cout.width(10); std::cout	<< _contacts[i].getFirstName()	<< " | ";
		std::cout.width(10); std::cout	<< _contacts[i].getLastName()	<< " | ";
		std::cout.width(10); std::cout	<< _contacts[i].getNickname()	<< std::endl;
	}
	// TODO Add secondary search
	return;
}
