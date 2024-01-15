#include "../../../solutions/boolean.hpp"
#include <iostream>
#include "../../../solutions/structs.hpp"

int main(){
  Point point1, point2;
  std::cin >> point1.x >> point1.y >> point2.x >> point2.y;
  std::cout << solveBoolean35(point1, point2);
  return 0;
}
