/**
 *
 * SetExercise.h
 *
 */

#ifndef SETEXERCISE_H
#define SETEXERCISE_H

#include <set>

namespace cppexercises {
class SetExercise {
 public:
  enum Reply { none, yes, no, unknown };
  enum Operation { Insert = 1, Erase = 2, Find = 3 };
  SetExercise();
  ~SetExercise();

  Reply process(int, int);

 private:
  std::set<int> numbers;
};
}  // namespace cppexercises

#endif /* end of include guard: SETEXERCISE_H */
