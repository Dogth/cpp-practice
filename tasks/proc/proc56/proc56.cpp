#include "../../../solutions/proc.hpp"
#include <iostream>
#include "../../../solutions/structs.hpp"

int main(){
  Point a, b;
  std::cin >> a.x >> a.y >> b.x >> b.y;
  auto out = solveProc56(a, b);
  std::cout << out << "\n";
  return 0;
}
