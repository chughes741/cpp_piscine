
#ifndef SHRUBBERYCREATIONFORM_HPP_
#define SHRUBBERYCREATIONFORM_HPP_

#include <fstream>
#include <iostream>
#include <string>

#include "Form.hpp"

// Class declaration
class ShrubberyCreationForm : public Form {
 private:
  ShrubberyCreationForm();

 public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
  ~ShrubberyCreationForm();

  std::string getTarget() const;
  void beExecuted();

 private:
  std::string target_;
};

#endif  // SHRUBBERYCREATIONFORM_HPP_
