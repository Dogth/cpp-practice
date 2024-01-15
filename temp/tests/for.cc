#include "gtest/gtest.h"

#include "../for/for10.cpp"
#include "../for/for17.cpp"
#include "../for/for24.cpp"

#define TEST = true

TEST(for10::solve, For10) {
  EXPECT_EQ(for10::solve(1), 1);
  EXPECT_EQ(for10::solve(3), 1.833333);
}

TEST(for17::solve, For17) {
  EXPECT_EQ(for17::solve(1,1), 2);
  EXPECT_EQ(for17::solve(5,2), 31);
}

TEST(for24::solve, For24) {
  EXPECT_EQ(for24::solve(1,1), 1); #TODO:WRITE THIS ONE PROPERLY
}

TEST(for29::solve, For29) {
  EXPECT_EQ(for29::solve(4,4), {1,{1,2,3,4}});
}

TEST(for37::solve, For37) {
  #Boring one 2 lazy 2 count
}
