
#include "Point.hpp"

extern bool bsp(const Point a, const Point b, const Point c, const Point point);

int main() {
  Point a = Point(0, 0), b = Point(0, 10), c = Point(10, 0), dot = Point(1, 1);

  if (bsp(a, b, c, dot)) {
    std::cout << "It's inside the triangle" << std::endl;
  } else {
    std::cout << "It's outside the triangle" << std::endl;
  }

  return 0;
}
