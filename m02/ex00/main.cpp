
#include <iostream>

#include "Fixed.hpp"

// TODO add tests
int main() {
  Fixed point1, point2;

  point1.setRawBits(431);
  std::cout << "point1 raw bits: " << point1.getRawBits() << std::endl;
  point2 = point1;
  point2.setRawBits(231);
  std::cout << "point2 raw bits: " << point2.getRawBits() << std::endl;
  Fixed point3 = point2;
  point3 = point1;
  std::cout << "point3 raw bits: " << point3.getRawBits() << std::endl;
  return 0;
}
