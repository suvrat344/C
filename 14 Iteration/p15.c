// Create a program to find the Least Common Multiple (LCM) of two numbers.

#include <stdio.h>

int main(){
  int first,second,min,max;

  printf("Enter first number : ");
  scanf("%d",&first);

  printf("Enter second number : ");
  scanf("%d",&second);

  min = first < second ? first 
                       : second;

  max = first * second;

  for (int i = min; i <= max; i++)
  {
    if(i % first == 0 && i % second == 0){
      printf("LCM(%d,%d) = %d",first,second,i);
      break;
    }
  }

  return 0;
}