
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  std::cout << std::endl;
  try {
    PresidentialPardonForm pres = PresidentialPardonForm("Mike Pence");
    Bureaucrat donald = Bureaucrat("Donny", 3);
    pres.beSigned(donald);
    pres.execute(donald);

  } catch (Form::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::NotSignedException &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  try {
    ShrubberyCreationForm shrub = ShrubberyCreationForm("garden");
    Bureaucrat mike = Bureaucrat("Mike", 10);
    shrub.beSigned(mike);
    shrub.execute(mike);

  } catch (Form::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::NotSignedException &e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;
  try {
    RobotomyRequestForm shrub = RobotomyRequestForm("Bender");
    Bureaucrat fry = Bureaucrat("Fry", 100);
    shrub.beSigned(fry);
    shrub.execute(fry);

  } catch (Form::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (Form::NotSignedException &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
