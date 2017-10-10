//Header for Child 
  
#ifndef CHILD_H
#define CHILD_H
using namespace std;
#include"Person.h"

class Child; 
typedef Child* ChildPtr; // Defining the Pointer.
//Displaying inheritence
class Child: public Person
{
  //Child's is friend to class
  friend class Family;
 protected:
  //Declaration of protected variables.
  ChildPtr mySibling;
  long dadSSN;
  
 public:
  //Declaration of default constructors.
  Child();
  Child(long num, string FN, string LN, long num2);
  ~Child();
};
#endif
