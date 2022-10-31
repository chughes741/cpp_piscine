
#include "Point.hpp"

// Default constructor
Point::Point() : x_(Fixed()), y_(Fixed()) { return; }

// Default constructor overload
Point::Point(const float x, const float y) : x_(Fixed(x)), y_(Fixed(y)) {
  return;
}

// Copy constructor
Point::Point(const Point &other) : x_(other.getX()), y_(other.getY()) {
  *this = other;
  return;
}

// Copy assignment operator overload
Point &Point::operator=(const Point &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Point::~Point() {
  return;
}

// x_ getter
const Fixed Point::getX() const { return x_; }

// y_ getter
const Fixed Point::getY() const { return y_; }
