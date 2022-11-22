
#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat john = Bureaucrat("John", 0);
    std::cout << john << std::endl;
  } catch (Bureaucrat::GradeTooHighException &error) {
    std::cerr << error.what() << std::endl;
  }

  try {
    Bureaucrat john = Bureaucrat("John", 200);
    std::cout << john << std::endl;
  } catch (Bureaucrat::GradeTooLowException &error) {
    std::cerr << error.what() << std::endl;
  }

  try {
    Bureaucrat john = Bureaucrat("John", 1);
    std::cout << john << std::endl;
    john.increaseGrade();
  } catch (Bureaucrat::GradeTooHighException &error) {
    std::cerr << error.what() << std::endl;
  }

  try {
    Bureaucrat john = Bureaucrat("John", 150);
    std::cout << john << std::endl;
    john.decreaseGrade();
  } catch (Bureaucrat::GradeTooLowException &error) {
    std::cerr << error.what() << std::endl;
  }

  return 0;
}
