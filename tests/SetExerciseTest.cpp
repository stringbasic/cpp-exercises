#include <gtest/gtest.h>
#include "SetExercise.h"

using namespace cppexercises;

TEST(NoOutput, SetExercise) {
  SetExercise sut;
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 9));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 6));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 10));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 4));
  EXPECT_EQ(SetExercise::Reply::yes, sut.process(3, 6));
  EXPECT_EQ(SetExercise::Reply::no, sut.process(3, 14));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(2, 6));
  EXPECT_EQ(SetExercise::Reply::no, sut.process(3, 6));
}
