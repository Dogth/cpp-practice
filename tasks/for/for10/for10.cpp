#include "../../../solutions/for.hpp"
#include <iostream>

int main(){
  double x;
  std::cin >> x;
  double res = solveFor10(x);
  std::cout << std::fixed << res << "\n";
  return 0;
}
