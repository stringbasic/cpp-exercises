#include <gtest/gtest.h>

#include "UglyNumber.h"

using namespace cppexercises;

TEST(Numbers, IsUglyNumber) {
  UglyNumber uglyNumber;
  EXPECT_EQ(true, uglyNumber.classify(25));
  EXPECT_EQ(true, uglyNumber.classify(12));
  EXPECT_EQ(true, uglyNumber.classify(4));
  EXPECT_EQ(false, uglyNumber.classify(7));
  EXPECT_EQ(false, uglyNumber.classify(0));
}

TEST(Numbers, IsNotUglyNumber) {
  UglyNumber uglyNumber;
  EXPECT_EQ(false, uglyNumber.classify(7));
  EXPECT_EQ(false, uglyNumber.classify(0));
}
