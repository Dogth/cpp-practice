#include "gtest/gtest.h"

#include "../begin/begin6.cpp"
#include "../begin/begin8.cpp"
#include "../begin/begin16.cpp"
#include "../begin/begin27.cpp"
#include "../begin/begin29.cpp"

TEST(begin6_test, Begin6) {
  EXPECT_EQ(begin6::solve(1,2,3), std::pair<int,int>(6,22});  
}

TEST(begin16_test, Begin16) {
  EXPECT_EQ(begin16::solve(std::tuple<int,int>(3,7)), 4);
}

TEST(begin27_test, Begin27) {
  EXPECT_EQ(begin27::solve(2), std::tuple<int,int,int>(4, 16, 256));
}

TEST(begin29_test, Begin29) {
  EXPECT_EQ(begin29::solve(3.14), 180;
}
