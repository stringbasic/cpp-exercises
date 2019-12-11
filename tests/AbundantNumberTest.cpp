#include <gtest/gtest.h>
#include "AbundantNumber.h"

using namespace cppexercises;

TEST(Numbers, IsAbundantNumber) {
  AbundantNumber abundantNumber;
  int abundantNumbers[] {12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66, 70, 72, 78, 80, 84, 88, 90, 96, 100, 102, 104, 108, 112, 114, 120, 126, 132, 138, 140, 144, 150, 156, 160, 162, 168, 174, 176, 180, 186, 192, 196, 198, 200, 204, 208, 210, 216, 220, 222, 224, 228, 234, 240, 246, 252, 258, 260, 264, 270};
  int j=0;
  for (auto& i : abundantNumbers) {
    for (;j<=i;j++) {
      EXPECT_EQ(j==i, abundantNumber.isAbundantNumber(j))
        << "is abundant failed for " << j << ", should be " << (j==i);
    }
  }
}
