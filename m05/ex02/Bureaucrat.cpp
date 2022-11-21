
#include "Bureaucrat.hpp"

// Default constructor (private)
Bureaucrat::Bureaucrat() { return; }

// Default constructor overload
Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name) {
  if (grade < 1) {
    throw GradeTooHighException();
  } else if (grade > 150) {
    throw GradeTooLowException();
  } else {
    grade_ = grade;
  }
  std::cout << "A bureaucrat has been created" << std::endl;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other)
    : name_(other.getName()), grade_(other.getGrade()) {
  std::cout << "A bureaucrat has been cloned" << std::endl;
}

// Copy assignment overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  grade_ = rhs.getGrade();
  return *this;
}

// Default destructor
Bureaucrat::~Bureaucrat() {
  std::cout << "A bureaucrat has been destroyed" << std::endl;
  return;
}

// GradeTooHigh exception
const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade too high!");
}

// GradeTooLow exception
const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade too low!");
}

// name_ getter
const std::string Bureaucrat::getName() const { return (name_); }

// grade_ getter
int Bureaucrat::getGrade() const { return (grade_); };

// grade_ increment
void Bureaucrat::increaseGrade() {
  if (grade_ > 1) {
    grade_--;
  } else {
    throw Bureaucrat::GradeTooHighException();
  }
  return;
};

// grade_ decrement
void Bureaucrat::decreaseGrade() {
  if (grade_ < 150) {
    grade_++;
  } else {
    throw Bureaucrat::GradeTooLowException();
  }
  return;
};

// beSigned member function
void Bureaucrat::signForm(const Form &to_be_signed) const {
  std::cout << name_;
  if (to_be_signed.getSigned()) {
    std::cout << " can't sign " << to_be_signed.getName()
              << " because it's already signed!" << std::endl;
  } else if (to_be_signed.getSignGrade() < grade_) {
    std::cout << " cant't sign " << to_be_signed.getName()
              << " because their level is too low!" << std::endl;
  } else {
    std::cout << " signed " << to_be_signed.getName() << std::endl;
  }
}

// executeForm member function
void Bureaucrat::executeForm(const Form &to_be_executed) const {
  std::cout << name_;
  if (to_be_executed.getSigned() == false) {
    std::cout << " can't execute " << to_be_executed.getName()
              << " because it's not signed!" << std::endl;
  } else if (to_be_executed.getExecGrade() < grade_) {
    std::cout << " can't execute " << to_be_executed.getName()
              << " because their level is too low!" << std::endl;
  } else {
    std::cout << " executed " << to_be_executed.getName() << std::endl;
  }
}

// Output stream overload for Bureaucrat
std::ostream &operator<<(std::ostream &os, const Bureaucrat &rhs) {
  os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
  return os;
}
