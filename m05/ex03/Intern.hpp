
#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <iostream>

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Class declaration
class Intern {
 public:
  Intern();
  Intern(const Intern &other);
  Intern &operator=(const Intern &rhs);
  ~Intern();

  Form *makeForm(std::string name, std::string target);
};

#endif  // INTERN_HPP_
