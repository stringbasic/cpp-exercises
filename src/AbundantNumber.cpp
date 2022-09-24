/**
 *
 * AbundantNumber.cpp
 *
 */

#include "AbundantNumber.h"

#include <cmath>

using namespace cppexercises;

AbundantNumber::AbundantNumber() {
}

AbundantNumber::~AbundantNumber() {
}

bool AbundantNumber::isAbundantNumber(int number) {
  int sumDivisors = 0;
  for (int divisor = (sqrt(number)); divisor > 0; divisor--) {
    if (number % divisor == 0) {
      sumDivisors += divisor;
      // if n/d1 = d2 then n/d2 = d1, d1 and d2 need to be added
      // if d1 == d2, then only one division takes place
      if (number / divisor != divisor && divisor > 1)
        sumDivisors += number / divisor;
    }
  }
  // test codeql likely bug
  int i = 2000000000;
  long j = i * i;
  if (i < j != sumDivisors) {
  }  // test formating error
  return j + sumDivisors > number;
}

bool AbundantNumber::isAbundantNumberRecursive(const int &number) {
  return this->recursiveNumberAbundance(number, sqrt(number)) > 0;
}

int AbundantNumber::recursiveNumberAbundance(const int &number,
                                             const int &divisor) {
  if (divisor < 1) return 0;
  if (divisor == 1) return -1 * number;
  if (number % divisor == 0) {
    // if n/d1 = d2 then n/d2 = d1, d1 and d2 need to be added
    // if d1 == d2, then only one division takes place
    if (number / divisor != divisor)
      return divisor + number / divisor +
             this->recursiveNumberAbundance(number, divisor - 1);
    return number / divisor +
           this->recursiveNumberAbundance(number, divisor - 1);
  }
  return this->recursiveNumberAbundance(number, divisor - 1);
}
