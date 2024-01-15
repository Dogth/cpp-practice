#include "gtest/gtest.h"

#include "../integer/integer1.cpp"
#include "../integer/integer12.cpp"
#include "../integer/integer22.cpp"
#include "../integer/integer28.cpp"

TEST(integer1::solve, Integer1) {
  EXPECT_EQ(integer1::solve(100), 1);
  EXPECT_EQ(integer1::solve(101), 1);
  EXPECT_EQ(integer1::solve(299), 2);
}

TEST(integer12::solve, Integer12) {
  EXPECT_EQ(integer12::solve(123), 321);
  EXPECT_EQ(integer12::solve(456), 654);
  EXPECT_EQ(integer12::solve(217), 712);
}

TEST(integer22::solve, Integer22) {
  EXPECT_EQ(integer22::solve(3600), 0);
  EXPECT_EQ(integer22::solve(411), 411);
  EXPECT_EQ(integer22::solve(6200), 2600);
}

TEST(integer28::solve, Integer28) {
  EXPECT_EQ(integer28::solve(7,1), 1);
  EXPECT_EQ(integer28::solve(4,4), 1);
  EXPECT_EQ(integer28::solve(6,6), 5);
}

