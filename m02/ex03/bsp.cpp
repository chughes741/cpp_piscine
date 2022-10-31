
#include "Point.hpp"

int getSide(const Point a, const Point b, const Point c) {
  Fixed side = ((b.getX() - a.getX()) * (c.getY() - a.getY())) -
               ((b.getY() - a.getY()) * (c.getX() - a.getX()));
  if (side > 0)
    return 1;
  else if (side < 0)
    return -1;
  else
    return 0;
}

// Returns true if point is inside triable a, b, c
bool bsp(const Point a, const Point b, const Point c, const Point point) {
  if (getSide(a, b, point) > 0 && getSide(b, c, point) > 0 &&
      getSide(c, a, point) > 0)
    return true;
  else if (getSide(a, b, point) < 0 && getSide(b, c, point) < 0 &&
           getSide(c, a, point) < 0)
    return true;
  else
    return false;
}
