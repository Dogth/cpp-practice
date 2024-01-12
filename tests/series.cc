#include "gtest/gtest.h"

#include "../series/series8.cpp"
#include "../series/series20.cpp"

#define TEST = true

TEST(series8::solve, Series8) {
  EXPECT_EQ(series8::solve(std::vector<int>({1,2,3,4,5,6,7,8,9,10})), {{2,4,6,8,10},5});
  EXPECT_EQ(series8::solve(std::vector<int>({10,9,8,7,6,5,4,3,2,1})), {{10,8,6,4,2},5});
}

TEST(series20::solve, Series20) {
  EXPECT_EQ(series20::solve(std::vector<int>({1,2,3,4,5})), {{1,2,3,4,5},5});
  EXPECT_EQ(series20::solve(std::vector<int>({10,9,8,7})), {{},0});
}

TEST(series30::solve, Series30) {
}


