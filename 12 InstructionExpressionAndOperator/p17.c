// Create a program to calculate Compound interest.
//  Compound Interest = P(1 + R/100)^t - P

#include <stdio.h>
#include <math.h>

int main(){
  int principal = 10000,rate = 10,time = 2;
  printf("Compund Interest = %.2f",principal * pow((1 + rate * 0.01),time)-principal);

  return 0;
}