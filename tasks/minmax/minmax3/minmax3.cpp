#include "../../../solutions/minmax.hpp"
#include <iostream>

int main(){
  double a, b, c;
  std::cin >> a >> b >> c;
  auto out = solveMinmax3({a,b,c});
  std::cout << out << "\n";
  return 0;
}
