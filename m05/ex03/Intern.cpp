
#include "Intern.hpp"

// Default constructor
Intern::Intern() {
  std::cout << "An intern has been created" << std::endl;
  return;
}

// Copy constructor
Intern::Intern(const Intern &other) {
  *this = other;
  std::cout << "An intern has been copy constructed" << std::endl;
  return;
}

// Copy assignment overload
Intern &Intern::operator=(const Intern &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Intern::~Intern() {
  std::cout << "An intern has been killed...oh well" << std::endl;
  return;
}

// makeForm class method
Form *Intern::makeForm(std::string name, std::string target) {
  std::string forms[] = {"Robotomy Request Form", "Shrubbery Creation Form",
                         "Presidential Pardon Form"};
  int i = 0;
  while (i < 3 && forms[i].compare(name) != 0) ++i;
  Form *newform = NULL;
  switch (i) {
    case 0:
      newform = new RobotomyRequestForm(target);
      break;
    case 1:
      newform = new ShrubberyCreationForm(target);
      break;
    case 2:
      newform = new PresidentialPardonForm(target);
      break;
    default:
      std::cout << "Intern couldn't find a form with that name" << std::endl;
      return NULL;
  }
  std::cout << "Intern created a " << newform->getName() << std::endl;
  return newform;
}
