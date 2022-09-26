#include <gtest/gtest.h>

#include "PerfectNumber.h"

using namespace cppexercises;

TEST(Numbers, IsPerfectNumber) {
  PerfectNumber perfectNumber;

  EXPECT_EQ(true, perfectNumber.isPerfectNumber(28))
      << "is perfect number failed for 28, should be perfect";
  EXPECT_EQ(false, perfectNumber.isPerfectNumber(56))
      << "is perfect number failed for 56, should not be perfect";
}
