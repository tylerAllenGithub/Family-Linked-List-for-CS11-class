//Header for Family.
  
#ifndef FAMILY_H
#define FAMILY_H
#include<string>
using namespace std;
#include"Husband.h"
#include"Wife.h"
#include"Child.h"

class Family
{
 protected: 
  //Declare protected pointer.
  HusbandPtr top;
  
 public:
  //Declare default constructors.
  Family();
  ~Family();
  
  //Coding for adding and removing nodes.
  void AddHusband(long SSN, string Fname, string Lname);
  void RemoveHusband(long SSN);
  void AddWife(long SSN, string Fname, string Lname, long husbandSSN);
  void RemoveWife(long husbandSSN);
  void AddAChild(long SSN, string Fname, string Lname, long fatherSSN);
  void RemoveAChild(long FatherSSN, long childSSN);
  
  //Coding for printing and searching.
  void PrintAFamily(long fatherSSN);
  void PrintAllFamilies();
  bool SearchHusband(long SSN);
  bool SearchChild(long fSSN, long cSSN);
  
  //Coding for opening a transaction file.
  bool ReadTransactionFile(string filename);
};
#endif
