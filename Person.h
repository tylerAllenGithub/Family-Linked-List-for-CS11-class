#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
 protected:
  //Declare the protected variables.
  long SSN;
  string Fname;
  string Lname;
  
 public:
  //Declare the default constructors.
  Person();
  Person(long num, string FN, string LN);
  ~Person();
  
  //Coding for setting and printing data.
  void setData(long num, string FN, string LN);
  void print() const;
};
#endif
