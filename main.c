#include <stdio.h>
#include "myMath.h"



int main()
{
double x;
printf("please insert a real number\n");
scanf("%lf",&x);
float f1=sub(add(Exponent((int)x),Power(x, 3)),2);
printf("the value of f(x)=𝑒^𝑥+𝑥^3−2 at the point %.4lf is: %.4lf\n", x, f1); 
float f2= add( mul(x,3),mul(Power(x,2),2));
 printf("the value of f(x)=3x + 2X^2 at the point %.4lf is: %.4lf\n", x, f2);
float f3=sub( div(mul( Power(x,3),4) ,5),mul(x,2) ) ;
 printf("the value of f(x)=(4x^3)/5 -2x at the point %.4lf is: %.4lf\n", x, f3);

return 0;

}