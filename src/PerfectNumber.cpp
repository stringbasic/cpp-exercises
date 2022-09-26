/**
 *
 * PerfectNumber.cpp
 *
 */

#include "PerfectNumber.h"

using namespace cppexercises;

PerfectNumber::PerfectNumber() {
}

PerfectNumber::~PerfectNumber() {
}

bool PerfectNumber::isPerfectNumber(int number) {
  int sum = 0;
  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      sum = sum + i;
    }
  }
  return sum == number;
}
