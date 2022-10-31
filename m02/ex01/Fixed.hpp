
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iomanip>
#include <iostream>

// Fixed class definition
class Fixed {
 public:
  Fixed();
  Fixed(const int i_number);
  Fixed(const float f_number);
  Fixed(const Fixed &other);
  ~Fixed();
  Fixed &operator=(const Fixed &rhs);

  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;

 private:
  static const int point_ = 8;
  int raw_bits_;
};

// Output stream
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);

#endif  // FIXED_HPP_
