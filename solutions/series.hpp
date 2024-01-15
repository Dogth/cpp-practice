#ifndef SERIES_HEADER
#define SERIES_HEADER

#include <utility>
#include <vector>
#include <algorithm>
#include <iterator>

std::pair<std::vector<int>,int> solveSeries8(const std::vector<int> &numbers){
  std::vector<int> res{};
  std::for_each(numbers.begin(), numbers.end(), 
                [&](int val){
                val % 2 ? res.push_back(val):void();
                });
  return {res, res.size()};
}

std::pair<std::vector<int>,int> solveSeries20(const std::vector<int> &numbers){
  std::vector<int> res{};
  std::for_each(numbers.begin(), numbers.end(), 
                [&](const int val){
                val <= val+1 ? res.push_back(val):void();
                });
  return {res, res.size()};
}

#endif
