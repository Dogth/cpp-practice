#include "boolean.h"
#include "gtest/gtest.h"
#include "../boolean/boolean11.cpp"
#include "../boolean/boolean20.cpp"
#include "../boolean/boolean29.cpp"
#include "../boolean/boolean35.cpp"

#define TEST = true

TEST(boolean11::solve, Boolean11) {
  EXPECT_EQ(boolean11::solve(3,5), true);
  EXPECT_EQ(boolean11::solve(6,3), false);
  EXPECT_EQ(boolean11::solve(3,3), true);
  EXPECT_EQ(boolean11::solve(3,4), false);
}

TEST(boolean20::solve, Boolean20) {
  EXPECT_EQ(boolean20::solve(123), true);
  EXPECT_EQ(boolean20::solve(335), false);
  EXPECT_EQ(boolean20::solve(541), true);
  EXPECT_EQ(boolean20::solve(111), false);
}

TEST(boolean29::solve, Boolean29) {
  namespace boolean29;
  EXPECT_EQ(solve(rect{},{0,0}, true);
  EXPECT_EQ(solve(rect({1,1},{3,3}),{0,0}, false);
  EXPECT_EQ(solve(rect{1,2},{0,0}, true);
}

TEST(boolean35::solve, Boolean35) {
  EXPECT_EQ(boolean35::solve({0,0},{2,2}), false);
  EXPECT_EQ(boolean35::solve({1,1},{2,2}), true);
}

#TODO: NEG&OOB
