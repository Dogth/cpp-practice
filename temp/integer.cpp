int solveInteger1(int length){
  return length % 100;
}

int solveInteger12(int number){
  return (number%10)*100+(number/10)%10*10+number/100;
}

int solveInteger22(int seconds){
  return seconds % 3600;
}

int solveInteger28(int day, int jan1){
  return (day+jan1) % 7;
}
