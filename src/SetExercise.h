/**
 *
 * SetExercise.h
 *
 */

#ifndef SETEXERCISE_H
#define SETEXERCISE_H

#include <set>

namespace cppexercises {
  class SetExercise
  {
  public:
    enum Reply {none, yes, no};
    SetExercise();
    ~SetExercise();

    Reply process(int, int);

  private:
    std::set<int> numbers;
  };
}

#endif /* end of include guard: SETEXERCISE_H */
