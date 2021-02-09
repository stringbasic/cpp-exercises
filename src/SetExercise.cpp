/**
 *
 * SetExercise.cpp
 *
 */

#include "SetExercise.h"

using namespace std;
using namespace cppexercises;

SetExercise::SetExercise() {
    
}

SetExercise::Reply SetExercise::process(int op, int value) {
   switch (op) {
     case 1:
       this->numbers.insert(value);
       return SetExercise::Reply::none;
       break;
     case 2:
       this->numbers.erase(value);
       return SetExercise::Reply::none;
       break;
     case 3:
       set<int>::iterator itr=this->numbers.find(value);
       if (itr == this->numbers.end())
         return SetExercise::Reply::no;
       else
         return SetExercise::Reply::yes;
       break;
   }
}

SetExercise::~SetExercise() {
}
