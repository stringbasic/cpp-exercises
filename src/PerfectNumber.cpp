/**
 *
 * PerfectNumber.cpp
 *
 */

#include "PerfectNumber.h"

using namespace cppexercises;

bool PerfectNumber::classify(const int number) {
  int sum = 0;
  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      sum = sum + i;
    }
  }
  return sum == number;
}
