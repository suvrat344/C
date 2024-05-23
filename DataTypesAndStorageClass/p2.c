// Write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.

#include <stdio.h>

int main(){
  long int fact1 = 1;
  long long int fact2 = 1;

  for (int i = 1; i <= 20; i++)
  {
    fact1 = fact1 * i;
    fact2 = fact2 * i;
  }
  printf("Factorial of %d is %ld\n",20,fact1);  
  printf("Factorial of %d is %lld",20,fact2);  

  return 0;
}