
#ifndef POINT_HPP_
#define POINT_HPP_

#include "Fixed.hpp"

// Class declaration
class Point {
 public:
  Point();
  Point(const float x, const float y);
  Point(const Point &other);
  Point &operator=(const Point &rhs);
  ~Point();

  const Fixed getX() const;
  const Fixed getY() const;

 private:
  const Fixed x_;
  const Fixed y_;
};

#endif  // POINT_HPP_
