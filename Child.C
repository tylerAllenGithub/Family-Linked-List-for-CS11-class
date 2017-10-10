//This is the Child class
//Joshua Balzano

#ifndef CHILD_CPP
#define CHILD_CPP
#include<iostream>
#include"Child.h"

//Implementation the constructors.
Child::Child()
{
  mySibling = NULL; //Sets the value to Null
  dadSSN = 0; // Sets the value to 0
}

/*The father's SSN connected to the childs. */
Child::Child(long num, string FN, string LN, long num2)
{
  mySibling = NULL;
  setData(num, FN, LN);
  dadSSN = num2; //Father's SSN
}

Child::~Child(){}
#endif 
