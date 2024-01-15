#include "../../../solutions/if.hpp"
#include <iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  auto out = solveIf5({a,b,c});
  std::cout << out.first << "\n" << out.second << "\n";
  return 0;
}
