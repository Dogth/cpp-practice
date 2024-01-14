#include <cmath>

std::pair<int, int> solveBegin6(int a, int b, int c){
  return std::make_pair(a*b*c, a*b+b*c+a*c);
}

int solveBegin16(int a, int b){
  return std::abs(a)-std::abs(b);
}

std::array<int, 3> solveBegin27(int a) {
  int cr = a*a;
  return std::array<int, 3>{cr, a*cr, cr*cr};
}

double solveBegin29(double rad) {
  return rad*(M_PI/180);
}



