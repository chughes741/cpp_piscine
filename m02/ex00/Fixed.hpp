
#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

// Fixed class definition
class Fixed {
 private:
  static const int point_;

 public:
  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed();

  int getRawBits() const;
  void setRawBits(const int raw);

 private:
  int raw_bits_;
};

#endif  // FIXED_HPP_
