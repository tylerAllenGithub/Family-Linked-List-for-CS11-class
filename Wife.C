#ifndef WIFE_CPP
#define WIFE_CPP
#include<iostream>
#include"Wife.h"

//Generates, trying to use more than same word everytime, the default constructors.
Wife::Wife()
{
  myChildren = NULL;
  husbandSSN = 0;
}

Wife::Wife(long num, string FN, string LN, long num2)
{
  myChildren = NULL;
  setData(num, FN, LN);
  husbandSSN = num2;
}

Wife::~Wife(){}
#endif
