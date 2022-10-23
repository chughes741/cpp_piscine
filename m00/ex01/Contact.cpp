
#include "Contact.hpp"


// Default constructor method
Contact::Contact( void ) {
	return;
}

// Default destructor method
Contact::~Contact( void ) {
	return;
}

// Setter for first_name_
void Contact::setFirstName() {
	std::cout << "Enter the first name of the contact: " << std::endl;
	getline(std::cin, first_name_);
	return;
}

// Setter for last_name_
void Contact::setLastName() {
	std::cout << "Enter the last name of the contact: " << std::endl;
	getline(std::cin, last_name_);
	return;
}

// Setter for nickname_
void Contact::setNickname() {
	std::cout << "Enter the nickname of the contact: " << std::endl;
	getline(std::cin, nickname_);
	return;
}

// Setter for phone_number_
void Contact::setPhoneNumber() {
	std::cout << "Enter the phone number of the contact: " << std::endl;
	getline(std::cin, phone_number_);
	return;
}

// Setter for darkest_secret_
void Contact::setDarkestSecret() {
	std::cout << "Enter the darkest secret of the contact: " << std::endl;
	getline(std::cin, darkest_secret_);
	return;
}

// Getter for first_name_
std::string Contact::getFirstName() {
	return (first_name_);
}

// Getter for last_name_
std::string Contact::getLastName() {
	return (last_name_);
}

// Getter for nickname_
std::string Contact::getNickname() {
	return (nickname_);
}

// Getter for phone_number_
std::string Contact::getPhoneNumber() {
	return (phone_number_);
}

// Getter for phone_number_
std::string Contact::getDarkestSecret() {
	return (darkest_secret_);
}
