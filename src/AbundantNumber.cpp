/**
 *
 * AbundantNumber.cpp
 *
 */

#include <cmath>
#include "AbundantNumber.h"

using namespace cppexercises;

AbundantNumber::AbundantNumber() {
    
}

AbundantNumber::~AbundantNumber() {
}

bool AbundantNumber::isAbundantNumber(int number) {
  int sumDivisors = 0;
  for(int divisor=(sqrt(number)); divisor>0; divisor--) {
    if (number%divisor == 0) {
      sumDivisors += divisor;
      // if n/d1 = d2 then n/d2 = d1, d1 and d2 need to be added
      // if d1 == d2, then only one division takes place
      if (number/divisor != divisor && divisor > 1)
        sumDivisors += number/divisor;
    }
  }
  return sumDivisors > number;
}
