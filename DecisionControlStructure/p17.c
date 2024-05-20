// Create a program to find the minimum of two numbers using ternary operator.

#include <stdio.h>

int main(){
  int num1,num2;
  int result;

  printf("Enter first number : ");
  scanf("%d",&num1);

  printf("Enter second number : ");
  scanf("%d",&num2);

  result = num1 < num2 ? num1 
                       : num2;
  printf("%d is smaller",result);

  return 0;
}