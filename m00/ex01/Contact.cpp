
#include "Contact.hpp"


Contact::Contact( void ) {
	return;
}

Contact::~Contact( void ) {
	return;
}


void Contact::setFirstName() {
	std::string temp;
	
	std::cout << "Enter the first name of the contact: " << std::endl;
	getline(std::cin, temp);
	first_name_ = temp;
	return;
}

void Contact::setLastName() {
	std::string temp;

	std::cout << "Enter the last name of the contact: " << std::endl;
	getline(std::cin, temp);
	last_name_ = temp;
	return;
}

void Contact::setNickname() {
	std::string temp;

	std::cout << "Enter the nickname of the contact: " << std::endl;
	getline(std::cin, temp);
	nickname_ = temp;
	return;
}

void Contact::setPhoneNumber() {
	std::string temp;

	std::cout << "Enter the phone number of the contact: " << std::endl;
	getline(std::cin, temp);
	phone_number_ = temp;
	return;
}

void Contact::setDarkestSecret() {
	std::string temp;

	std::cout << "Enter the darkest secret of the contact: " << std::endl;
	getline(std::cin, temp);
	darkest_secret_ = temp;
	return;
}


std::string Contact::getFirstName() {
	return (first_name_);
}

std::string Contact::getLastName() {
	return (last_name_);
}

std::string Contact::getNickname() {
	return (nickname_);
}

std::string Contact::getPhoneNumber() {
	return (phone_number_);
}

std::string Contact::getDarkestSecret() {
	return (darkest_secret_);
}
