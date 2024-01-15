#include "../../../solutions/if.hpp"
#include <iostream>

int main(){
  int a, b;
  std::cin >> a >> b;
  auto out = solveIf7(a,b);
  std::cout << out << "\n";
  return 0;
}
