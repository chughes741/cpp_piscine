
#ifndef FORM_HPP_
#define FORM_HPP_

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

// Class declaration
class Form {
 public:
  virtual ~Form();

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
  virtual void execute(const Bureaucrat &executor) = 0;

 private:
  const std::string name_;
  const int sign_grade_;
  const int exec_grade_;
  bool signed_;
};

// Stream insertion overload for Form
std::ostream &operator<<(std::ostream &os, const Form &rhs);

#endif  // FORM_HPP_
