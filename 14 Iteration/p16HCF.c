// Create a program to find the Greatest Common Divisor (GCD) of two integers

#include <stdio.h>

int main(){
  int first,second,max,min,quotient,remainder,gcd;

  printf("Enter first number : ");
  scanf("%d",&first);

  printf("Enter second number : ");
  scanf("%d",&second);

  max = first > second ? first 
                       : second;

  min = first < second ? first 
                       : second;

  while(1){
    quotient = max / min;
    remainder = max % min;
    
    if(remainder == 0){
      gcd = min;
      break;
    }

    max = min;
    min = remainder;
  }

  printf("GCD : %d",gcd);
  
  return 0;
}