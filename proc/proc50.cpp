#include <tuple>

std::tuple<int,int,int> solve(int seconds) {
  int minutes = seconds / 60;
  int hours = minutes / 60;
  return std::tuple<int,int,int>(hours, minutes % 60, seconds % 60);
}
