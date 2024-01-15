#include <cmath>

int solveFor10(int x){ //Impure
  int res = 1;
  for(x; x > 0; x--){
    res = res + 1/x;
  }
  return res;
}

int solveFor17(int num, int power){ //Impure
  int res = 1;
  for(power; power > 0; power--){
    res = res + std::pow(num, power);
  }
  return res; 
}

int solveFor24(int N, int A){ //Impure function. Mutates stuff
  double res = 0.0;
  double factorial = 1.0;
  
  for(int i = 2; i <= N; i += 2){
    factorial *= (i * (i - 1));
    double term = std::pow(A, i) / factorial;
    if(i % 4 == 0){
      res -= term;
    } else{
      res += term;
    }
  }
  return res;
}
