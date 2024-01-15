#include "../../../solutions/if.hpp"
#include <iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  auto out = solveIf16(a,b,c);
  std::cout << out[0] << "\n" << out[1] << "\n" << out[2] << "\n";
  return 0;
}
