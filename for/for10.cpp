int solve(int x){
  return 1/x + [](int y){return y == 0 ? 1 : 1 / solve(y - 1);};
}
