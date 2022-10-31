
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : raw_bits_(0) { return; }

// Integer to fixed constructor
Fixed::Fixed(const int i_number) : raw_bits_(i_number << point_) { return; }

// Float to fixed constructor
Fixed::Fixed(const float f_number) {
  raw_bits_ = f_number * pow(2, point_);
  return;
}

// Copy assignment
Fixed::Fixed(const Fixed &other) {
  *this = other;
  return;
}

// Assignment operator overload
Fixed &Fixed::operator=(const Fixed &rhs) {
  this->raw_bits_ = rhs.raw_bits_;
  return *this;
}

// Greater than operator overload
bool Fixed::operator>(const Fixed &rhs) const {
  return (this->raw_bits_ > rhs.raw_bits_ ? true : false);
}

// Less than operator overload
bool Fixed::operator<(const Fixed &rhs) const {
  return (this->raw_bits_ < rhs.raw_bits_ ? true : false);
}

// Greater or equal operator overload
bool Fixed::operator>=(const Fixed &rhs) const {
  return (this->raw_bits_ >= rhs.raw_bits_ ? true : false);
}

// Less or equal operator overload
bool Fixed::operator<=(const Fixed &rhs) const {
  return (this->raw_bits_ <= rhs.raw_bits_ ? true : false);
}

// Equality operator overload
bool Fixed::operator==(const Fixed &rhs) const {
  return (this->raw_bits_ == rhs.raw_bits_ ? true : false);
}

// Inequality operator overload
bool Fixed::operator!=(const Fixed &rhs) const {
  return (this->raw_bits_ != rhs.raw_bits_ ? true : false);
}

// Addition operator overload
Fixed Fixed::operator+(const Fixed &rhs) const {
  Fixed sum;
  sum.setRawBits(this->raw_bits_ + rhs.getRawBits());
  return (sum);
}

// Subtraction operator overload
Fixed Fixed::operator-(const Fixed &rhs) const {
  Fixed difference;
  difference.setRawBits(this->raw_bits_ - rhs.getRawBits());
  return (difference);
}

// Multiplication operator overload
Fixed Fixed::operator*(const Fixed &rhs) const {
  Fixed product;
  product.setRawBits(this->raw_bits_ * rhs.getRawBits() >> point_);
  return (product);
}

// Division operator overload
Fixed Fixed::operator/(const Fixed &rhs) const {
  Fixed quotient;
  quotient.setRawBits((this->raw_bits_ << point_) / rhs.getRawBits());
  return (quotient);
}

// Prefix increment operator overload
Fixed &Fixed::operator++() {
  raw_bits_++;
  return *this;
}

// Prefix decrement operator overload
Fixed &Fixed::operator--() {
  raw_bits_--;
  return *this;
}

// Postfix increment operator overload
Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  ++(*this);
  return temp;
}

// Postfix decrement operator overload
Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  --(*this);
  return temp;
}

// Default destructor
Fixed::~Fixed() { return; }

// raw_bits_ getter
int Fixed::getRawBits() const { return (raw_bits_); }

// raw_bits_ setter
void Fixed::setRawBits(int const raw) { raw_bits_ = raw; }

// Returns raw_bits_ as a float
float Fixed::toFloat() const {
  return ((float)raw_bits_ / (float)(1 << point_));
}

// Returns raw_bits_ as an integer
int Fixed::toInt() const { return ((raw_bits_ >> 8) & 0xffffff); }

// min() function overload for fixed point
Fixed &Fixed::min(Fixed &a, Fixed &b) {
  return (a.raw_bits_ > b.raw_bits_ ? b : a);
}

// min() function overload for const fixed point
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  return (a.raw_bits_ > b.raw_bits_ ? b : a);
}

// max() function overload for fixed point
Fixed &Fixed::max(Fixed &a, Fixed &b) {
  return (a.raw_bits_ < b.raw_bits_ ? b : a);
}

// max() function overload for const fixed point
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  return (a.raw_bits_ < b.raw_bits_ ? b : a);
}

// Output stream insertion operator overload
std::ostream &operator<<(std::ostream &os, const Fixed &rhs) {
  os << rhs.toFloat();
  return os;
}
