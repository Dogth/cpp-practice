#include <tuple>

std::tuple<int,int,int> solve(int a, int b, int c) {
  return a > b && b > c ?
    std::tuple<int,int,int>(a*2,b*2,c*2) : std::tuple<int,int,int>(-a,-b,-c);
}
