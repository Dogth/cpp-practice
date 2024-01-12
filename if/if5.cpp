int solve(int a, int b, int c){
  std::vector<int> vec{a,b,c};
  return std::unique(vec.begin(), vec.end()) - vec.begin();
}
