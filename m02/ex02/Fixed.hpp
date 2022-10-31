
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iomanip>
#include <iostream>

// Fixed class definition
class Fixed {
 private:
  static const int point_ = 8;

 public:
  Fixed();
  Fixed(const int i_number);
  Fixed(const float f_number);
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  bool operator>(const Fixed &rhs) const;
  bool operator<(const Fixed &rhs) const;
  bool operator>=(const Fixed &rhs) const;
  bool operator<=(const Fixed &rhs) const;
  bool operator==(const Fixed &rhs) const;
  bool operator!=(const Fixed &rhs) const;
  Fixed operator+(const Fixed &rhs) const;
  Fixed operator-(const Fixed &rhs) const;
  Fixed operator*(const Fixed &rhs) const;
  Fixed operator/(const Fixed &rhs) const;
  Fixed &operator++();
  Fixed &operator--();
  Fixed operator++(int);
  Fixed operator--(int);
  ~Fixed();

  static Fixed &min(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);

  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;

 private:
  int raw_bits_;
};

// Output stream overload for Fixed
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);

#endif  // FIXED_HPP_
