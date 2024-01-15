#include <cmath>
#include <array>
#include <algorithm>

std::pair<int,int> solveIf5(const std::array<int, 3> &array){
  int cnt = std::count_if(array.begin(), array.end(), 
                          [](const auto &x) { return x > 0;});
  return {cnt, 3-cnt};
}

int solveIf7(const int &a,
             const int &b){
  return a > b ? a : b;
}

std::array<int, 3> solveIf16(const int &a,
                             const int &b,
                             const int &c){
  return a > b && b > c ? std::array<int, 3>{a*2,b*2,c*2}:
                          std::array<int, 3>{-a,-b,-c};
}

int solveIf24(const int &x){
  return x <= 0 ? 6-x : 2*sin(x);
}
