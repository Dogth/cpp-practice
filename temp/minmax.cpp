#include <vector>
#include <algorithm>

int solveMinmax3(std::vector<double> areas){
  return *std::max_element(areas.begin(), areas.end(),
                        [](double area1, double area2){
                        return area1 > area2;
                        });
}

int solveMinmax13(const std::vector<int> &nums){
  return *std::max_element(nums.begin(), nums.end(),
                        [&](const auto &num1, const auto &num2){
                        return num1 % 2 == 0;
                        });
}


