// Create a program to calculate the absolute value of a given integer using ternary operator

#include <stdio.h>

int main(){
  int num,result;

  printf("Enter number : ");
  scanf("%d",&num);

  result = num < 0 ? num * (-1) 
                   : num;
  printf("Absolute Value : %d",result);

  return 0;
}