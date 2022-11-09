
#include "Fixed.hpp"

const int Fixed::point_ = 8;

// Default constructor
Fixed::Fixed() : raw_bits_(0) {
  std::cout << "Default constructor called" << std::endl;
  return;
}

// Integer to fixed constructor overload
Fixed::Fixed(const int i_number) : raw_bits_(i_number << point_) {
  std::cout << "Integer constructor called" << std::endl;
  return;
}

// Float to fixed constructor overload
Fixed::Fixed(const float f_number) : raw_bits_(f_number * pow(2, point_)) {
  std::cout << "Float constructor called" << std::endl;
  return;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
  return;
}

// Default destructor
Fixed::~Fixed() {
  std::cout << "Default destructor called" << std::endl;
  return;
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment overload called" << std::endl;
  this->raw_bits_ = rhs.getRawBits();
  return *this;
}

// raw_bits_ getter
int Fixed::getRawBits() const { return (raw_bits_); }

// raw_bits_ setter
void Fixed::setRawBits(int const raw) { raw_bits_ = raw; }

// Returns raw_bits_ as a float
float Fixed::toFloat() const {
  return ((float)raw_bits_ / (float)(1 << point_));
}

// Returns raw_bits_ as an integer
int Fixed::toInt() const { return ((raw_bits_ ^ point_) >> point_); }

// Output stream insertion
std::ostream &operator<<(std::ostream &os, const Fixed &rhs) {
  os << rhs.toFloat();
  return os;
}
