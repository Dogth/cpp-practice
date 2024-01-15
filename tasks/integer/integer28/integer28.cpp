#include "../../../solutions/integer.hpp"
#include <iostream>

int main(){
  int a, b;
  std::cin >> a >> b;
  auto out = solveInteger28(a, b);
  std::cout << out << "\n";
  return 0;
}
