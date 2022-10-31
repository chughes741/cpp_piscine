
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

// Fixed class definition
class Fixed {
 public:
  Fixed();
  Fixed(const Fixed &other);
  ~Fixed();
  Fixed &operator=(const Fixed &rhs);

  int getRawBits() const;
  void setRawBits(const int raw);

 private:
  static const int point_ = 8;
  int raw_bits_;
};

#endif  // FIXED_HPP_
