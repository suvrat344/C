// Create a program to find the Least Common Multiple (LCM) of two numbers.

#include <stdio.h>

int main(){
  int first,second,lcm,max,min,gcd,quotient,remainder;

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

  printf("LCM : %d",first * second / gcd);  

  return 0;
}