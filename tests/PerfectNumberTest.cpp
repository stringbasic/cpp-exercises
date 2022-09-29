#include <gtest/gtest.h>

#include "PerfectNumber.h"

using namespace cppexercises;

TEST(Numbers, IsPerfectNumber) {
  PerfectNumber perfectNumber;

  EXPECT_EQ(true, perfectNumber.classify(28))
      << "is perfect number failed for 28, should be perfect";
  EXPECT_EQ(false, perfectNumber.classify(56))
      << "is perfect number failed for 56, should not be perfect";
}
