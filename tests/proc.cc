#include "gtest/gtest.h"

#include "../proc/proc3.cpp"
#include "../proc/proc26.cpp"
#include "../proc/proc30.cpp"
#include "../proc/proc50.cpp"
#include "../proc/proc56.cpp"

TEST(proc3::solve, Proc3) { 
  EXPECT_EQ(proc3::solve(1, 3), {2,2});
  EXPECT_EQ(proc3::solve(5, 5), {5,3.1622});
  EXPECT_EQ(proc3::solve(0, 0), {0,0});
  EXPECT_EQ(proc3::solve(0, 1), {0.5,1});
}

TEST(proc26::solve, Proc26) {
  EXPECT_EQ(proc26::solve(25),true);
  EXPECT_EQ(proc26::solve(5), true);
  EXPECT_EQ(proc26::solve(0), true);
  EXPECT_EQ(proc26::solve(4), false);
}

TEST(proc30::solve, Proc30) {
  EXPECT_EQ(proc30::solve(1256,3), 2);
  EXPECT_EQ(proc30::solve(1256,4), 1);
  EXPECT_EQ(proc30::solve(1256,5), -1);
  EXPECT_EQ(proc30::solve(1256,6), -1);
}

TEST(proc50::solve, Proc50) {
  EXPECT_EQ(proc50::solve(0), {0,0,0});
  EXPECT_EQ(proc50::solve(1), {0,0,1});
  EXPECT_EQ(proc50::solve(60), {0,1,0});
  EXPECT_EQ(proc50::solve(3600), {1,0,0});
  EXPECT_EQ(proc50::solve(86399), {23,59,59});
}

TEST(proc56::solve, Proc56) {
  EXPECT_EQ(proc56::solve({0,0},{3,4}), 5);
  EXPECT_EQ(proc56::solve({0,0},{0,0}), 0);
  EXPECT_EQ(proc56::solve({0,0},{0,3}), 3);
  EXPECT_EQ(proc56::solve({0,0},{3,0}), 3);
  EXPECT_EQ(proc56::solve({0,0},{-3,0}), 3);
}
