#ifndef STRUCTS_HEADER
#define STRUCTS_HEADER

struct Point {
  double x;
  double y;

  bool operator<=(const Point &point) const {
    return x <= point.x && y <= point.y;
  }

  bool operator>=(const Point &point) const {
    return x >= point.x && y >= point.y;
  }
};

struct Rectangle{
  double a;
  double b;
  int area = a*b;
};

#endif
