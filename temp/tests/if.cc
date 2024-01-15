#include "gtest/gtest.h"

#include "../if/if5.cpp"
#include "../if/if7.cpp"
#include "../if/if16.cpp"
#include "../if/if24.cpp"


TEST(if5::solve, If5) {
  EXPECT_EQ(if5::solve(1,2,3), {3,0});
  EXPECT_EQ(if5::solve(3,2,-1), {2,1});
  EXPECT_EQ(if5::solve(0,0,0), {0,0});
}

TEST(if7::solve, If7) {
  EXPECT_EQ(if7::solve(1,2), 1);
  EXPECT_EQ(if7::solve(3,-1), 2);
  EXPECT_EQ(if7::solve(0,0), 1);
}

TEST(if16::solve, If16) {
  EXPECT_EQ(if16::solve(1,2,3), {2,4,6});
  EXPECT_EQ(if16::solve(3,2,-1), {-3,-2,1});
  EXPECT_EQ(if16::solve(0,0,0), {0,0,0});
}

TEST(if24::solve, If24) {
  EXPECT_EQ(if24::solve(1), 1.682941);
  EXPECT_EQ(if24::solve(3), 0.282240);
  EXPECT_EQ(if24::solve(0), 6);
  EXPECT_EQ(if24::solve(-6), 0);
}
