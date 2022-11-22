
#ifndef SCALAR_HPP_
#define SCALAR_HPP_

#include <exception>
#include <iostream>
#include <string>

// Class declaration
class Scalar {
 private:
  Scalar();
  Scalar(const Scalar &other);
  Scalar &operator=(const Scalar &rhs);

 public:
  Scalar(std::string init_value);
  ~Scalar();

  class TypeConversionError : public std::exception {
   public:
    const char *what() const throw();
  };

 private:
  std::string init_value_;
  std::string char_value_;
  int int_value_;
  float float_value_;
  double double_value_;
};

#endif  // SCALAR_HPP_
