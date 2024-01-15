#include "../../../solutions/proc.hpp"
#include <iostream>

int main(){
  int a, b;
  std::cin >> a >> b;
  auto out = solveProc3(a,b);
  std::cout << out.first << "\n" << out.second << "\n";
  return 0;
}
