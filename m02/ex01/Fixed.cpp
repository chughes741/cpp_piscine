
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : raw_bits_(0) { return; }

// Integer to fixed constructor
Fixed::Fixed(const int i_number) : raw_bits_(i_number << point_) { return; }

// Float to fixed constructor
Fixed::Fixed(const float f_number) {
  raw_bits_ = f_number * pow(2, point_);
  return;
}

// Copy assignment
Fixed::Fixed(const Fixed &fixed) {
  raw_bits_ = fixed.raw_bits_;
  return;
}

// Default destructor
Fixed::~Fixed(void) { return; }

// raw_bits_ getter
int Fixed::getRawBits(void) { return (raw_bits_); }

// raw_bits_ setter
void Fixed::setRawBits(int const raw) { raw_bits_ = raw; }

// Returns raw_bits_ as a float
float Fixed::toFloat(void) const { return (raw_bits_ / (1 << point_)); }

// Returns raw_bits_ as an integer
int Fixed::toInt(void) const { return ((raw_bits_ >> 8) & 0xffffff); }

// Output stream insertion
std::ostream &operator<<(std::ostream &os, Fixed &fixed) {
  os << fixed.toFloat();
  return os;
}
