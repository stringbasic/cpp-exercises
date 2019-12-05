#include <iostream>
#include <string>
#include "UglyNumber.h"

using namespace std;
using namespace cppexercises;

int main()
{
  int n,x=0;
  cout << "\n\n Check whether a given number is an Ugly number:\n";
  cout << "----------------------------------------------------\n";
  cout << "Input an integer number: ";
  cin >> n;
  UglyNumber uglyNumber;
  if (n <= 0) {
    cout <<"Input a correct number.";
  }
  if (uglyNumber.isUglyNumber(n))
  {
    cout << "It is an Ugly number."<<endl;
  } else {
    cout << "It is not an Ugly number."<<endl;
  }
}
