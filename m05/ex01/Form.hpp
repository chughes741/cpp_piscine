
#ifndef FORM_HPP_
#define FORM_HPP_

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

// Class declaration
class Form {
 private:
  Form();

 public:
  Form(std::string name, int sign_grade, int exec_grade);
  Form(const Form &other);
  Form &operator=(const Form &rhs);
  ~Form();

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

  const std::string &getName() const;
  bool getSigned() const;
  int getSignGrade() const;
  int getExecGrade() const;
  void beSigned(const Bureaucrat &signer);

 private:
  const std::string name_;
  const int sign_grade_;
  const int exec_grade_;
  bool signed_;
};

// Stream insertion overload for Form
std::ostream &operator<<(std::ostream &os, const Form &rhs);

#endif  // FORM_HPP_
