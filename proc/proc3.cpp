#include <cmath>

std::pair<double,double> solve(int x, int y) {
  return std::pair<double,double>((x+y)/2,cmath::sqrt(x*y));
}
