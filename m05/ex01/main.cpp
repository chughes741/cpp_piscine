
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  try {
    Form my_2014_tax_return = Form("My 2014 tax return", 200, 50);
  } catch (Form::GradeTooLowException &error) {
    std::cerr << error.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form my_2014_tax_return = Form("My 2014 tax return", 0, 50);
  } catch (Form::GradeTooHighException &error) {
    std::cerr << error.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form my_2014_tax_return = Form("My 2014 tax return", 100, 50);
    std::cout << my_2014_tax_return << std::endl;
    Bureaucrat john = Bureaucrat("John", 50);
    my_2014_tax_return.beSigned(john);
  } catch (Form::GradeTooLowException &error) {
    std::cerr << error.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Form my_2014_tax_return = Form("My 2014 tax return", 10, 50);
    std::cout << my_2014_tax_return << std::endl;
    Bureaucrat john = Bureaucrat("John", 50);
    my_2014_tax_return.beSigned(john);
  } catch (Form::GradeTooLowException &error) {
    std::cerr << error.what() << std::endl;
  }

  return 0;
}
