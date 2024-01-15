#include "../../../solutions/proc.hpp"
#include <iostream>

int main(){
  int a;
  std::cin >> a;
  auto out = solveProc50(a);
  std::cout << out[0] << "\n" << out[1] << "\n" << out[2] << "\n";
  return 0;
}
