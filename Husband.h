#ifndef HUSBAND_H
#define HUSBAND_H
using namespace std;
#include"Person.h"
#include"Wife.h"
//Decalring Husband and Wife
class Husband;
class Wife;
//Defines Pointer for Husband and Wife
typedef Husband* HusbandPtr;
typedef Wife* WifePtr;

class Husband: public Person
{
  friend class Family;
 protected:
  //Declare protected variables.
  HusbandPtr nextFamily;
  WifePtr myWife;

 public:
  //Declare default constructors.
  Husband();
  Husband(long num, string FN, string LN);
  ~Husband();
};
#endif
