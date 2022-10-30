
#include "Contact.hpp"

// Default constructor method
Contact::Contact(void) { return; }

// Default destructor method
Contact::~Contact(void) { return; }

// Setter for first_name_
void Contact::setFirstName(std::string first_name) {
  first_name_ = first_name;
  return;
}

// Setter for last_name_
void Contact::setLastName(std::string last_name) {
  last_name_ = last_name;
  return;
}

// Setter for nickname_
void Contact::setNickname(std::string nickname) {
  nickname_ = nickname;
  return;
}

// Setter for phone_number_
void Contact::setPhoneNumber(std::string phone_number) {
  phone_number_ = phone_number;
  return;
}

// Setter for darkest_secret_
void Contact::setDarkestSecret(std::string darkest_secret) {
  darkest_secret_ = darkest_secret;
  return;
}

// Getter for first_name_
const std::string &Contact::getFirstName() const { return (first_name_); }

// Getter for last_name_
const std::string &Contact::getLastName() const { return (last_name_); }

// Getter for nickname_
const std::string &Contact::getNickname() const { return (nickname_); }

// Getter for phone_number_
const std::string &Contact::getPhoneNumber() const { return (phone_number_); }

// Getter for phone_number_
const std::string &Contact::getDarkestSecret() const {
  return (darkest_secret_);
}
