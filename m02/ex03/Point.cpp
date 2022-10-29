
#include "Point.hpp"

// Default constructor
Point::Point() : x_(Fixed()), y_(Fixed()) { return; }

// Default constructor overload
Point::Point(const float x, const float y) : x_(Fixed(x)), y_(Fixed(y)) {
  return;
}

// Default destructor
Point::~Point() { return; }

// Equality operator overload
Point &Point::operator=(const Point &rhs) { return; }
