#include <iostream>
#include <string>
#include "cxxopts.hpp"
#include "UglyNumber.h"
#include "AbundantNumber.h"

using namespace std;
using namespace cppexercises;

int main(int argc, char* argv[])
{
  cxxopts::Options options("runner", "Run C++ exercises");
  options.add_options()
    ("uglyNumber", "checks if given number is ugly", cxxopts::value<int>())
    ("isAbundantNumber", "checks if given number is abundante", cxxopts::value<int>())
    ("listAbundantNumbers", "list abundant numbers until limit given", cxxopts::value<int>())
    ("h,help", "print this help")
    ;

  if (argc == 1)
  {
    cout << options.help({""}) << endl;
    exit(0);
  }

  auto result = options.parse(argc, argv);
  if (result.count("help"))
  {
    cout << options.help({""}) << endl;
    exit(0);
  }

  if (result.count("uglyNumber")) {
    UglyNumber uglyNumber;
    if (uglyNumber.isUglyNumber(result["uglyNumber"].as<int>()))
    {
      cout << "It is an Ugly number."<< endl;
    } else {
      cout << "It is not an Ugly number."<< endl;
    }
  }

  if (result.count("isAbundantNumber")) {
    AbundantNumber abundantNumber;
    if (abundantNumber.isAbundantNumberRecursive(result["isAbundantNumber"].as<int>()))
    {
      cout << "It is an Abundant number."<< endl;
    } else {
      cout << "It is not an Abundant number."<< endl;
    }
  }

  if (result.count("listAbundantNumbers")) {
    AbundantNumber abundantNumber;
    for (int i=0; i<result["listAbundantNumbers"].as<int>(); i++)
        if (abundantNumber.isAbundantNumberRecursive(i))
          cout << i << " ";
    cout << endl;
  }
}
