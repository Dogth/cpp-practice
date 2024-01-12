#include <utility>

bool solve(std::pair<int,int>x, std::pair<int,int>y){
  return (x.first + x.second) % 2 == (y.first + y.second) % 10;
}

int main(){
  return 0;
}
