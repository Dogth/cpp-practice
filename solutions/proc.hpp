#ifndef PROC_HEADER
#define PROC_HEADER

#include <utility>
#include <array>
#include <cmath>
#include "structs.hpp"

std::pair<double, double> solveProc3(const double &x,
                                     const double &y) {
  return {(x+y) / 2, sqrt(x*y)};
}

bool solveProc26(const double &value){
  return std::log(value) / std::log(5) == 0;
}

std::array<int, 3> solveProc50(const int &seconds){
  return {seconds / 3600, seconds / 60, seconds};
}

double solveProc56(const Point &point1,
                   const Point &point2){
  return std::hypot(point1.x - point2.x,
                    point1.y - point2.y);
}

#endif
