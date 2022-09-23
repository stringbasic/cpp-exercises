#include <gtest/gtest.h>

#include "SetExercise.h"

using namespace cppexercises;

TEST(FindMiddle, SetExercise) {
  SetExercise sut;
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 9));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 6));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 10));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 4));
  EXPECT_EQ(SetExercise::Reply::yes, sut.process(3, 6));
}

TEST(NotFound, SetExercise) {
  SetExercise sut;
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 9));
  EXPECT_EQ(SetExercise::Reply::no, sut.process(3, 14));
}

TEST(EraseAndNotFoune, SetExercise) {
  SetExercise sut;
  EXPECT_EQ(SetExercise::Reply::none, sut.process(1, 6));
  EXPECT_EQ(SetExercise::Reply::yes, sut.process(3, 6));
  EXPECT_EQ(SetExercise::Reply::none, sut.process(2, 6));
  EXPECT_EQ(SetExercise::Reply::no, sut.process(3, 6));
}

TEST(UnknownOp, SetExercise) {
  SetExercise sut;
  EXPECT_EQ(SetExercise::Reply::unknown, sut.process(999, 4));
}
