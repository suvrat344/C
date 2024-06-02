// Create a program that computes the sum of the digits of an integer

#include <stdio.h>

int main(){
  int number,sum=0;

  printf("Enter number : ");
  scanf("%d",&number);

  int temp = number;

  while(number > 0){
    sum = sum + number % 10;
    number = number / 10;
  }

  printf("Sum of digits of %d is %d",temp,sum);

  return 0;
}