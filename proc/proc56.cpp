#include <cmath>

double solve(int x1, int y1, int x2, int y2) {
  return std::hypot(x1 - x2, y1 - y2);
}
