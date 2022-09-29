/**
 *
 * AbundantNumber.h
 *
 */

#ifndef ABUNDANTNUMBER_H
#define ABUNDANTNUMBER_H

#include "NumberClassifier.h"

namespace cppexercises {
class AbundantNumber : NumberClassifier {
 public:
  bool isAbundantNumber(int);
  bool isAbundantNumberRecursive(const int &n);
  int recursiveNumberAbundance(const int &n, const int &);
  bool classify(const int);
};
}  // namespace cppexercises

#endif /* end of include guard: ABUNDANTNUMBER_H */
