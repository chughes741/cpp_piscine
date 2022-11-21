
#include "Form.hpp"

// Default constructor
Form::Form() : sign_grade_(-1), exec_grade_(-1), signed_(false) { return; }

// Default constructor overload
Form::Form(std::string name, int sign_grade, int exec_grade)
    : name_(name),
      sign_grade_(sign_grade),
      exec_grade_(exec_grade),
      signed_(false) {
  if (sign_grade < 1 || exec_grade < 1) {
    throw GradeTooHighException();
  } else if (sign_grade > 150 || exec_grade > 150) {
    throw GradeTooLowException();
  }
  std::cout << "A form has been constructed" << std::endl;
  return;
}

// Copy constructor
Form::Form(const Form &other)
    : name_(other.getName()),
      sign_grade_(other.getSignGrade()),
      exec_grade_(other.getExecGrade()),
      signed_(false) {
  std::cout << "A form has been copy constructed" << std::endl;
  return;
}

// Copy assignment overload
Form &Form::operator=(const Form &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Form::~Form() {
  std::cout << "A form has been destroyed" << std::endl;
  return;
}

// GradeTooHigh exception handler
const char *Form::GradeTooHighException::what() const throw() {
  return ("Form grade too high");
}

// GradeTooLow exception handler
const char *Form::GradeTooLowException::what() const throw() {
  return ("Form grade too low");
}

// NotSigned exception handler
const char *Form::NotSignedException::what() const throw() {
  return ("Form is not signed");
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
  if (signer.getGrade() > getSignGrade()) {
    throw GradeTooLowException();
  } else {
    signed_ = true;
  }
}

// beExecuted member function
void Form::execute(const Bureaucrat &executor) {
  executor.executeForm(*this);
  if (!signed_) {
    throw NotSignedException();
  } else if (executor.getGrade() >= getExecGrade()) {
    throw GradeTooLowException();
  } else {
    beExecuted();
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
