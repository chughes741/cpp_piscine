

#include <iostream>
#include "PhoneBook.hpp"

int	main() {
	PhoneBook pb;
	std::string	input;

	while (1) {
		std::cout << "Enter command: ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, input);
		if (input.compare("ADD") == 0) {
			pb.addContact();
		} else if (input.compare("SEARCH") == 0) {
			pb.searchContacts();
		} else if (input.compare("EXIT") == 0) {
			break;
		}
	}
	return 0;
}

void PhoneBook::addContact() {
	std::string temp;
	n_contacts += (n_contacts < 8) ? 1 : 0;
	contacts[n_contacts].setFirstName();
	contacts[n_contacts].setLastName();
	contacts[n_contacts].setNickname();
	contacts[n_contacts].setPhoneNumber();
	contacts[n_contacts].setDarkestSecret();
	std::cout << "Added new contact" << std::endl;
	return;
}

void PhoneBook::searchContacts() {
	for (int i = 0; i < n_contacts; ++i) {
		std::cout	<< i 									<< " | "
					<< contacts[n_contacts].getFirstName()	<< " | " 
					<< contacts[n_contacts].getLastName()	<< " | " 
					<< contacts[n_contacts].getNickname()	<< std::endl;
	}
	return;
}
