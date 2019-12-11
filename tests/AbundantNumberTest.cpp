#include <gtest/gtest.h>
#include "AbundantNumber.h"

using namespace cppexercises;

TEST(Numbers, IsAbundantNumber) {
  AbundantNumber abundantNumber;
  EXPECT_EQ(true, abundantNumber.isAbundantNumber(12));
}
