#include <algorithm>

int solveWhle2(int length, int line){ //Impure
  int counter{};
  while(length>=line){
    length = length - line;
    counter++;
  }
  return counter;
}

int solveWhile7(const int &num){
  int res{1};
  while(res^2 <= num){
    res++;
  }
  return res;
}

bool solveWhile21(int num){
  while(num != 0){
    if(num % 2 == 0) num = num / 10;
    else return false;
  }
  return true;
}

bool solveWhile24(const int &num){
  return num == 0 || num == 1 || solveWhile24(num-1) || solveWhile24(num-2);
}
