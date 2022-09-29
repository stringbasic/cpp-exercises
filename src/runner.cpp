#include <iostream>
#include <string>

#include "AbundantNumber.h"
#include "PerfectNumber.h"
#include "SetExercise.h"
#include "UglyNumber.h"
#include "cxxopts.hpp"

using namespace std;
using namespace cppexercises;

int main(int argc, char *argv[]) {
  cxxopts::Options options("runner", "Run C++ exercises");
  options.add_options()("uglyNumber", "checks if given number is ugly",
                        cxxopts::value<int>())(
      "isAbundantNumber", "checks if given number is abundante",
      cxxopts::value<int>())("isPerfectNumber",
                             "checks if given number is perfect",
                             cxxopts::value<int>())(
      "listAbundantNumbers", "list abundant numbers until limit given",
      cxxopts::value<int>())("setExerciseCount", "set exercise array size",
                             cxxopts::value<int>())("h,help",
                                                    "print this help");

  if (argc == 1) {
    cout << options.help({""}) << endl;
    exit(0);
  }

  auto result = options.parse(argc, argv);
  if (result.count("help")) {
    cout << options.help({""}) << endl;
    exit(0);
  }

  if (result.count("uglyNumber")) {
    UglyNumber uglyNumber;
    if (uglyNumber.classify(result["uglyNumber"].as<int>())) {
      cout << "It is an Ugly number." << endl;
    } else {
      cout << "It is not an Ugly number." << endl;
    }
  }

  if (result.count("isAbundantNumber")) {
    AbundantNumber abundantNumber;
    if (abundantNumber.classify(result["isAbundantNumber"].as<int>())) {
      cout << "It is an Abundant number." << endl;
    } else {
      cout << "It is not an Abundant number." << endl;
    }
  }

  if (result.count("isPerfectNumber")) {
    PerfectNumber perfectNumber;
    if (perfectNumber.classify(result["isPerfectNumber"].as<int>())) {
      cout << "It is a perfect number." << endl;
    } else {
      cout << "It is not a perfect number." << endl;
    }
  }

  if (result.count("listAbundantNumbers")) {
    AbundantNumber abundantNumber;
    for (int i = 0; i < result["listAbundantNumbers"].as<int>(); i++)
      if (abundantNumber.isAbundantNumberRecursive(i)) cout << i << " ";
    cout << endl;
  }

  if (result.count("setExerciseCount")) {
    SetExercise setExercise;
    int length = result["setExerciseCount"].as<int>();
    cout << "Input " << length << " operands (1..3) and values: " << endl;
    while (length--) {
      int op, value;
      cin >> op >> value;
      SetExercise::Reply result = setExercise.process(op, value);
      if (result == SetExercise::Reply::yes)
        cout << "Yes" << endl;
      else if (result == SetExercise::Reply::no)
        cout << "No" << endl;
    }
    cout << endl;
  }
}
