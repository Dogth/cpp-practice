#include <tuple>

std::tuple<int,int,int> solve(int a) {
  int cr = a*a;
  return std::tuple<int,int,int>(cr,a*cr,cr*cr);
}

