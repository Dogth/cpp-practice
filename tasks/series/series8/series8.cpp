#include "../../../solutions/series.hpp"
#include <iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  auto out = solveSeries8({a,b,c});
  std::cout << out.first[0] << out.first[1] << out.first[2] << "\n" << out.second << "\n";
  return 0;
}
