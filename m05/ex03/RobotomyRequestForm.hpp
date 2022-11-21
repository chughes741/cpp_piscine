
#ifndef ROBOTOMYREQUESTFORM_HPP_
#define ROBOTOMYREQUESTFORM_HPP_

#include <stdlib.h>

#include <iostream>
#include <string>

#include "Form.hpp"

// Class declaration
class RobotomyRequestForm : public Form {
 private:
  RobotomyRequestForm();

 public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &other);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
  ~RobotomyRequestForm();

  std::string getTarget() const;
  void beExecuted();

 private:
  std::string target_;
};

#endif  // ROBOTOMYREQUESTFORM_HPP_
