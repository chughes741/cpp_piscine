

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
	this->n_contacts += (this->n_contacts < 8) ? 1 : 0;

	std::cout << "Enter the first name of the contact: " << std::endl;
	// getline(std::cin, this->contacts[this->n_contacts].first_name);
	std::cout << "Enter the last name of the contact: " << std::endl;
	// getline(std::cin, this->contacts[this->n_contacts].last_name);
	std::cout << "Enter the nickname of the contact: " << std::endl;
	// getline(std::cin, this->contacts[this->n_contacts].nickname);
	std::cout << "Enter the phone number of the contact: " << std::endl;
	// getline(std::cin, this->contacts[this->n_contacts].phone_number);
	std::cout << "Enter the darkest secret of the contact: " << std::endl;
	// getline(std::cin, this->contacts[this->n_contacts].darkest_secret);

	std::cout << "Added new contacts" << std::endl;
	return;
}

void PhoneBook::searchContacts() {
	for (int i = 0; i < this->n_contacts; ++i) {
		std::cout << i << " | " 
		<< this->contacts[this->n_contacts].getFirstName() << " | " 
		<< this->contacts[this->n_contacts].getLastName() << " | " 
		<< this->contacts[this->n_contacts].getNickname()
		<< std::endl;
	}
	return;
}
