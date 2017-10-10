// Person.cpp file.
  
#ifndef PERSON_CPP
#define PERSON_CPP
#include<iostream>
#include"Person.h"

//Default Constructors! construct!
Person::Person()
{
  SSN = 0;
  Fname = "First name";
  Lname = "Last name";
}

Person::Person(long num, string FN, string LN)
{
  SSN = num;
  Fname = FN;
  Lname = LN;
}

Person::~Person(){}

//Set up for my setting and printing data.
void Person::setData(long num, string FN, string LN)
{
  SSN = num;
  Fname = FN;
  Lname = LN;
}

void Person::print() const
{
  cout << "SSN:\t" << SSN << "\tName: " << Fname << " " << Lname << endl;
}
#endif
