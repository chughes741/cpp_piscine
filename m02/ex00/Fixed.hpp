
#ifndef FIXED_HPP_
#define FIXED_HPP_

// Fixed class definition
class Fixed {
 public:
  Fixed(void);
  Fixed(const Fixed &fixed);
  ~Fixed();
  Fixed &operator=(const Fixed &fixed);

  int getRawBits(void);
  void setRawBits(int const raw);

 private:
  static const int point_ = 8;
  int raw_bits_;
};

#endif  // FIXED_HPP_
