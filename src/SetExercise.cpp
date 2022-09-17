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
     case SetExercise::Operation::Insert:
       this->numbers.insert(value);
       return SetExercise::Reply::none;
       break;
     case SetExercise::Operation::Erase:
       this->numbers.erase(value);
       return SetExercise::Reply::none;
       break;
     case SetExercise::Operation::Find:
       set<int>::iterator itr=this->numbers.find(value);
       if (itr == this->numbers.end())
         return SetExercise::Reply::no;
       else
         return SetExercise::Reply::yes;
       break;
   }
   return SetExercise::Reply::unknown;
}

SetExercise::~SetExercise() {
}
