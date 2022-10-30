
#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>
#include <string>

// Class that contains contact information
class Contact {
 public:
  Contact();
  Contact(const Contact &contact);
  ~Contact();
  Contact &operator=(const Contact &rhs);

  void setFirstName(std::string first_name);
  void setLastName(std::string last_name);
  void setNickname(std::string nickname);
  void setPhoneNumber(std::string phone_number);
  void setDarkestSecret(std::string darkest_secret);

  const std::string &getFirstName() const;
  const std::string &getLastName() const;
  const std::string &getNickname() const;
  const std::string &getPhoneNumber() const;
  const std::string &getDarkestSecret() const;

 private:
  std::string first_name_;
  std::string last_name_;
  std::string nickname_;
  std::string phone_number_;
  std::string darkest_secret_;
};

#endif  // CONTACT_HPP_
