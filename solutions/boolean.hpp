#ifndef BOOLEAD_HEADER
#define BOOLEAD_HEADER

#include <utility>
#include <array>
#include "structs.h"

bool solveBoolean11(const int &a,
                    const int &b){
  return a % 2 == b % 2;
}

bool solveBoolean20(const int &number){
  return 
    number / 100 == number % 10 ||
    (number / 10) % 10 == number % 10 ||
    number / 10 == (number / 10) % 10;
}

bool solveBoolean29(const Point &point,
                    const Point &topLeft,
                    const Point &bottomRight){
  return  point >= topLeft && point <= bottomRight; 
}

bool solveBoolean35(const Point &point1,
                    const Point &point2){
  return (point1.x + point1.y) % 2 == (point2.x + point2.y) % 2;
}

#endif
