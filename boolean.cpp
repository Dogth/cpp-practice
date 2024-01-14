#include <utility>
#include <array>

bool solveBoolean11(int a, int b){
  return a % 2 == b % 2;
}

bool solveBoolean20(int number){
  return number / 100 == number % 10 ||
    (number / 10) % 10 == number % 10 ||
    number / 10 == (number / 10) % 10;
}

bool solveBoolean29(std::array<std::pair<int,int>,3> coords){
  return coords[0].first <=coords[1].second; 
}

bool solveBoolean35(std::pair<int,int> x, std::pair<int,int> y){
  return (x.first + x.second) % 2 == (y.first+y.second) % 10;
}
