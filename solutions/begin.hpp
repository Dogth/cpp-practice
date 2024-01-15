#ifndef BEGIN_HEADER
#define BEGIN_HEADER

#include <cmath>
#include <array>

std::pair<int, int> solveBegin6(const int &a,
                                const int &b,
                                const int &c){
  return {a*b*c, a*b+b*c+a*c};
}

int solveBegin16(const int &a, int &b){
  return std::abs(a)-std::abs(b);
}

std::array<int, 3> solveBegin27(const int &a) {
  int cr = a*a;
  return {cr, a*cr, cr*cr};
}

double solveBegin29(const double &rad) {
  return rad*(M_PI/180);
}

#endif
