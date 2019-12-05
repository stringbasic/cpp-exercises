#include <gtest/gtest.h>
#include "UglyNumber.h"

using namespace cppexercises;

TEST(Numbers, UglyNumber) {
  UglyNumber uglyNumber;
  EXPECT_EQ(true, uglyNumber.isUglyNumber(25));
}
