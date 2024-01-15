#include "../../../solutions/minmax.hpp"
#include <iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  auto out = solveMinmax13({a,b,c});
  std::cout << out << "\n";
  return 0;
}
