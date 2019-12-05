#include <gtest/gtest.h>
#include "UglyNumber.h"

using namespace cppexercises;

TEST(Numbers, IsUglyNumber) {
  UglyNumber uglyNumber;
  EXPECT_EQ(true, uglyNumber.isUglyNumber(25));
  EXPECT_EQ(true, uglyNumber.isUglyNumber(12));
  EXPECT_EQ(true, uglyNumber.isUglyNumber(4));
  EXPECT_EQ(false, uglyNumber.isUglyNumber(7));
  EXPECT_EQ(false, uglyNumber.isUglyNumber(0));
}

TEST(Numbers, IsNotUglyNumber) {
  UglyNumber uglyNumber;
  EXPECT_EQ(false, uglyNumber.isUglyNumber(7));
  EXPECT_EQ(false, uglyNumber.isUglyNumber(0));
}
