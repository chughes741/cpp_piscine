
#include "Scalar.hpp"

// Default constructor
Scalar::Scalar() : init_value_("") { return; }

// Default constructor overload
Scalar::Scalar(std::string init_value) : init_value_(init_value) {
  return;
}

// Copy constructor
Scalar::Scalar(const Scalar &other) { *this = other; }

// Copy assignment overload
Scalar &Scalar::operator=(const Scalar &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Scalar::~Scalar() { return; }

// TypeConversion exception class
const char *Scalar::TypeConversionError::what() const throw() {
  return "Type conversion of this type was not possible";
}
