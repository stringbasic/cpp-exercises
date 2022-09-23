/**
 *
 * AbundantNumber.h
 *
 */

#ifndef ABUNDANTNUMBER_H
#define ABUNDANTNUMBER_H

namespace cppexercises {
class AbundantNumber {
 public:
  AbundantNumber();
  ~AbundantNumber();
  bool isAbundantNumber(int);
  bool isAbundantNumberRecursive(const int &n);
  int recursiveNumberAbundance(const int &n, const int &);

 private:
  /* data */
};
}  // namespace cppexercises

#endif /* end of include guard: ABUNDANTNUMBER_H */
