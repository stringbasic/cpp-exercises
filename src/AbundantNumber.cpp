/**
 *
 * AbundantNumber.cpp
 *
 */

#include "AbundantNumber.h"

using namespace cppexercises;

AbundantNumber::AbundantNumber() {
    
}

AbundantNumber::~AbundantNumber() {
}

bool AbundantNumber::isAbundantNumber(int number) {
  int sumDivisors = 0;
  for(int divisor=(number/2); divisor>0; divisor--) {
    if (number%divisor == 0) {
      sumDivisors += divisor;
    }
  }
  return sumDivisors > number;
}
