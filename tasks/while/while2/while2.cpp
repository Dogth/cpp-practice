#include "../../../solutions/while.hpp"
#include <iostream>

int main(){
  int a, b;
  std::cin >> a >> b;
  auto out = solveWhile2(a,b);
  std::cout << out << "\n";
  return 0;
}
