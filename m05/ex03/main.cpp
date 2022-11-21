
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  std::cout << std::endl;
  try {
    // TODO check copy constructor
    Intern jeff = Intern();
    Form *newform = jeff.makeForm("Robotoy Request Form", "Bender");
    Bureaucrat fry = Bureaucrat("Fry", 149);

    if (newform) {
      newform->beSigned(fry);
      newform->execute(fry);
    }

  } catch (Form::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::NotSignedException &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
