#include "gtest/gtest.h"

#include "../case/case2.cpp"
#include "../case/case10.cpp"
#include "../case/case16.cpp"

#define TEST = true

TEST(case2::solve, Case2) {
  EXPECT_STREQ(case2::solve(1),"Плохо"); 
  EXPECT_STREQ(case2::solve(2),"Неудовлетворительно");
  EXPECT_STREQ(case2::solve(3),"Удовлетворительно");
  EXPECT_STREQ(case2::solve(4),"Хорошо");
  EXPECT_STREQ(case2::solve(5),"Отлично");
}

TEST(case10::solve, Case10) {
  EXPECT_STREQ(case10::solve("С", 0),"С");
  EXPECT_STREQ(case10::solve("В", 1),"С");
  EXPECT_STREQ(case10::solve("Ю",-1),"В");
  #TODO: Add more cases
}

TEST(case16::solve, Case16) {
  EXPECT_STREQ(case16::solve(20),"Двадцать");
  EXPECT_STREQ(case16::solve(21),"Двадцать один");
  EXPECT_STREQ(case16::solve(23),"Двадцать три");
  EXPECT_STREQ(case16::solve(32),"Тридцать два");
  EXPECT_STREQ(case16::solve(40),"Сорок");
  EXPECT_STREQ(case16::solve(41),"Сорок один");
  #TODO: Out of bounds value
  #TODO: Negative value FOR ALL
}
