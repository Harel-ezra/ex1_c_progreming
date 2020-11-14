#include <stdio.h>
#include "myMath.h"

double Exponent(int x) // return e^x
{
  double exp=2.7182;
  double number=exp;
  int positive=0;
  if(x<0)
  {
      x=-x;
    positive=-1;
  }
for (size_t i = 0; i < x-1 ;i++)
{
number*=exp;
}
if(positive==-1)
{
    return 1/number;
}
    return number;
}

double Power (double x, int y) // return x^y
{
    double number=x;
for (size_t i = 0; i < y-1 ;i++)
{
number*=x;
}
    return number;
}


