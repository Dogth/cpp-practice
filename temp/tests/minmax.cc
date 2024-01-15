#include "gtest/gtest.h"

#include "../minmax/minmax3.cpp"
#include "../minmax/minmax13.cpp"
#include "../minmax/minmax20.cpp"

#define TEST = true

TEST(minmax3::solve, MinMax3) {
  #Finds rectangle with largest area in a 2D array
  namespace minmax3;
  EXPECT_EQ(solve(std::vector<rect>{
    rect({0,0},{1,1}), rect({0,0},{2,2}), rect({0,0},{5,5})}), 25);
  EXPECT_EQ(solve(std::vector<rect>{
    rect({0,0},{0,0}), rect({0,0},{0,0}), rect({0,0},{0,0})}), 4);
}

TEST(minmax13::solve, MinMax13) {
  #given array of N integers return first index of the largest odd number
  namespace minmax13;
  EXPECT_EQ(minmax13::solve({1,3,5,6,7,8,2,2,4,8}), 6);
  EXPECT_EQ(minmax13::solve({1,3,5,3,7,1,3,3,7,9}), 0);
  EXPECT_EQ(minmax13::solve({1,3,5,6,7,8,2,2,4,2}), 6);
}

TEST(minmax20::solve, MinMax20) {
  #given array of N integers find number of extreme values
  EXPECT_EQ(minmax20::solve({1,1,1,4,4,4}), {3,3});
  EXPECT_EQ(minmax20::solve({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}), {0,20});
  EXPECT_EQ(minmax20::solve({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}), {1,1});
}

