
#include "Fixed.hpp"

const int Fixed::point_ = 8;

// Default constructor
Fixed::Fixed() : raw_bits_(0) {
  std::cout << "Default constructor called" << std::endl;
  return;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
  return;
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment called" << std::endl;
  this->raw_bits_ = rhs.getRawBits();
  return *this;
}

// Default destructor
Fixed::~Fixed() {
  std::cout << "Default destructor called" << std::endl;
  return;
}

// raw_bits_ getter
int Fixed::getRawBits(void) const { return (raw_bits_); }

// raw_bits_ setter
void Fixed::setRawBits(const int raw) { raw_bits_ = raw; }
