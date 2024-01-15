#include "../../../solutions/begin.hpp"
#include <iostream>

int main(){
  int a;
  std::cin >> a;
  auto out = solveBegin27(a);
  std::cout << out[0] << "\n" << out[1] << "\n" << out[2] << "\n";
  return 0;
}

