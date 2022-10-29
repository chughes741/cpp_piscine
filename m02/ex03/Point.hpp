
#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

// Class declaration
class Point {
 public:
  Point();
  Point(const float x, const float y);
  Point(const Point &point);
  ~Point();
  Point &operator=(const Point &point);

  const Fixed getX(void) const;
  const Fixed getY(void) const;

 private:
  const Fixed x_;
  const Fixed y_;
};

#endif  // POINT_HPP_
