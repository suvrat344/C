// Create a program to calculate simple interest.
//  Simple Interest = (P x T x R)/100

#include <stdio.h>

int main(){
  int principal = 10000,rate = 10,time = 5;
  printf("Simple Interest : %.2f",principal * rate * time * 0.01);

  return 0;
}