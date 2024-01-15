#include "../../../solutions/boolean.hpp"
#include <iostream>
#include "../../../solutions/structs.hpp"

int main(){
  Point point, point1, point2;
  std::cin >> point.x >> point.y >> point1.x >> point1.y >> point2.x >> point2.y;
  std::cout << solveBoolean29(point, point1, point2);
}
