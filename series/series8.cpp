std::pair<std::vector<int>,int> solve(std::vector<int> numbers) {
  std::vector<int> result;
  for (auto & number : numbers) {
    number % 2 ? result.push_back(number):void();
  }
  return std::make_pair(result, result.size());
}
