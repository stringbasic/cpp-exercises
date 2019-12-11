/**
 *
 * AbundantNumber.h
 *
 */

#ifndef ABUNDANTNUMBER_H
#define ABUNDANTNUMBER_H

namespace cppexercises {
  class AbundantNumber
  {
  public:
    AbundantNumber();
    ~AbundantNumber();
    bool isAbundantNumber(int);
    bool isAbundantNumberRecursive(const int& n);
    int abundantNumberRecursive(const int& n, const int& d=-1);

  private:
    /* data */
  };
}

#endif /* end of include guard: ABUNDANTNUMBER_H */
