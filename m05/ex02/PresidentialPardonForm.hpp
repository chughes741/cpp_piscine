
#ifndef PRESIDENTIALPARDONFORM_HPP_
#define PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>

#include "Form.hpp"

// Class declaration
class PresidentialPardonForm : public Form {
 private:
  PresidentialPardonForm();

 public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &other);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
  ~PresidentialPardonForm();

  std::string getTarget() const;
  void beExecuted();

 private:
  std::string target_;
};

#endif  // PRESIDENTIALPARDONFORM_HPP_
