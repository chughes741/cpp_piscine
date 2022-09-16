

#include <iostream>
#include "PhoneBook.hpp"

void Contact::setFirstName() {
	std::string temp;
	
	std::cout << "Enter the first name of the contact: " << std::endl;
	getline(std::cin, temp);
	first_name = temp;
	return;
}

void Contact::setLastName() {
	std::string temp;

	std::cout << "Enter the last name of the contact: " << std::endl;
	getline(std::cin, temp);
	last_name = temp;
	return;
}

void Contact::setNickname() {
	std::string temp;

	std::cout << "Enter the nickname of the contact: " << std::endl;
	getline(std::cin, temp);
	nickname = temp;
	return;
}

void Contact::setPhoneNumber() {
	std::string temp;

	std::cout << "Enter the phone number of the contact: " << std::endl;
	getline(std::cin, temp);
	phone_number = temp;
	return;
}

void Contact::setDarkestSecret() {
	std::string temp;

	std::cout << "Enter the darkest secret of the contact: " << std::endl;
	getline(std::cin, temp);
	darkest_secret = temp;
	return;
}