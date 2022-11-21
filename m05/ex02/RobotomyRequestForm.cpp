
#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm()
    : Form("Robotomy request form", 72, 45), target_("") {
  return;
}

// Default constructor overload
RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("Robotomy request form", 72, 45), target_(target) {
  return;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : Form("Robotomy request form", 72, 45), target_(other.getTarget()) {
  return;
}

// Copy assignment overload
RobotomyRequestForm &RobotomyRequestForm::operator=(
    const RobotomyRequestForm &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
RobotomyRequestForm::~RobotomyRequestForm() { return; }

// target_ getter
std::string RobotomyRequestForm::getTarget() const { return (target_); }

// beExecuted method overload
void RobotomyRequestForm::beExecuted() {
	std::cout << target_ << std::endl;
	if (rand() % 2) {
		std::cout << " has been successfully robotomized!" << std::endl;
	} else {
		std::cout << " has had a failed robotomy!" << std::endl;
	}
}
