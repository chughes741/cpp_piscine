
#include "Form.hpp"

// Default destructor
Form::~Form() { return; }

// GradeTooHigh exception handler
const char *Form::GradeTooHighException::what() const throw() {
  return ("Form grade too high");
}

// GradeTooLow exception handler
const char *Form::GradeTooLowException::what() const throw() {
  return ("Form grade too low");
}

// name_ getter
const std::string &Form::getName() const { return (name_); }

// signed_ getter
bool Form::getSigned() const { return (signed_); }

// sign_grade_ getter
int Form::getSignGrade() const { return (sign_grade_); }

// exec_grade_ getter
int Form::getExecGrade() const { return (exec_grade_); }

// beSigned member function
void Form::beSigned(const Bureaucrat &signer) {
  signer.signForm(*this);
  if (signer.getGrade() <= this->getSignGrade()) {
    this->signed_ = true;
  } else {
    throw GradeTooLowException();
  }
}

// Output stream insertion overload
std::ostream &operator<<(std::ostream &os, const Form &rhs) {
  os << "Form " << rhs.getName() << " needs a grade of " << rhs.getSignGrade()
     << " to be signed, a grade of " << rhs.getExecGrade()
     << " to be executed.";
  if (rhs.getSigned()) {
    os << " This form has been signed.";
  } else {
    os << " This form has not been signed";
  }
  return os;
}
