#include <gtest/gtest.h>
#include "AbundantNumber.h"

using namespace cppexercises;

TEST(Numbers, IsAbundantNumber) {
  AbundantNumber abundantNumber;
  EXPECT_EQ(true, abundantNumber.isAbundantNumber(12));
  EXPECT_EQ(true, abundantNumber.isAbundantNumber(56));
  EXPECT_EQ(true, abundantNumber.isAbundantNumber(112));
}

TEST(Numbers, IsNotAbundantNumber) {
  AbundantNumber abundantNumber;
  for (int i=0; i<12; i++)
    EXPECT_EQ(false, abundantNumber.isAbundantNumber(i));
}
