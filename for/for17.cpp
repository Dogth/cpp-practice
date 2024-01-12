int solve(int a, int n){
  int res{};
  for(n; n > 0; n--){
    res = res + a * n;
  };
  return res;
}
