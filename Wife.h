//Header for the Wifey prog 
  
#ifndef WIFE_H
#define WIFE_H
using namespace std;
#include"Person.h"
class Child; //Declaration of class
typedef Child* ChildPtr; //Pointer, point.

class Wife: public Person
{
  friend class Family;
 protected:
  //Generates protected variables.
  ChildPtr myChildren;
  long husbandSSN;
  
 public:
  //Generates default constructors.
  Wife();
  Wife(long num, string FN, string LN, long num2);
  ~Wife();
};
#endif
