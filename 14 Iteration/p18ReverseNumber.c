// Create a program to reverse the digits of a number.

#include <stdio.h>

int main(){
  int num,rev=0;

  printf("Enter number : ");
  scanf("%d",&num);

  int temp = num;

  while(num > 0){
    rev = rev * 10 + num % 10;
    num /= 10;
  }

  printf("Reverse of %d is %d",temp,rev);

  return 0;
}