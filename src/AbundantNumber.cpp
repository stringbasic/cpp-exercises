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

bool AbundantNumber::isAbundantNumberRecursive(const int &number) {
  return this->abundantNumberRecursive(number) > number;
}

int AbundantNumber::abundantNumberRecursive(const int &number, const int &divisor) {
  if (-1 == divisor)
    return this->abundantNumberRecursive(number, sqrt(number));
  if (divisor <= 1)
    return divisor;
  if (number%divisor == 0) {
    // if n/d1 = d2 then n/d2 = d1, d1 and d2 need to be added
    // if d1 == d2, then only one division takes place
    if (number/divisor != divisor)
      return divisor + number/divisor + this->abundantNumberRecursive(number, divisor-1);
    return number/divisor + this->abundantNumberRecursive(number, divisor-1);
  }
  return this->abundantNumberRecursive(number, divisor-1);
}
