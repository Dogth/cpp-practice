#include "../solutions/begin.hpp"
#include <iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  auto [volume, area] = solveBegin6(a, b, c);
  std::cout << volume << "\n" << area << "\n";
  return 0;
}
