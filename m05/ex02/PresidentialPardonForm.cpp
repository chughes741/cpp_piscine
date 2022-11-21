
#include "PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm()
    : Form("Presidential pardon form", 25, 5), target_("") {
  return;
}

// Default constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("Presidential pardon form", 25, 5), target_(target) {
  return;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &other)
    : Form("Presidential pardon form", 25, 5), target_(other.getTarget()) {
  return;
}

// Copy assignment overload
PresidentialPardonForm &PresidentialPardonForm::operator=(
    const PresidentialPardonForm &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
PresidentialPardonForm::~PresidentialPardonForm() { return; }

// target_ getter
std::string PresidentialPardonForm::getTarget() const { return (target_); }

// beExecuted method overload
void PresidentialPardonForm::beExecuted() {
  std::cout << target_ << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}
