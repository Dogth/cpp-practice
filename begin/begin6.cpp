#include <utility>

std::pair<int,int> solve(int a, int b, int c) {
  return std::pair<int,int>(a*b*c,2*(a*b+b*c+a*c));
}

