
#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <exception>
#include <iostream>
#include <string>

// Class declaration
class Bureaucrat {
 private:
  Bureaucrat();

 public:
  Bureaucrat(std::string name, int grade);
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &rhs);
  ~Bureaucrat();

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

  const std::string getName() const;
  int getGrade() const;
  void increaseGrade();
  void decreaseGrade();

 private:
  const std::string name_;
  int grade_;
};

// Output stream overload for Bureaucrat
std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif  // BUREAUCRAT_HPP_
