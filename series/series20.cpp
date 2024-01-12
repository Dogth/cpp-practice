std::pair<std::vector<int>,int> solve(std::vector<int> numbers) {
  std::vector<int> result;
  auto iter = numbers.begin();
  for (auto & number : numbers) {
    number <= next(number) ? result.push_back(number):void();
  }
  return std::make_pair(result, result.size());
}
