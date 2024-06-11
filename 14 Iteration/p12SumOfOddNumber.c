// 2. Create a program to sum all odd numbers from 1 to a specified number N.

#include <stdio.h>

int main(){
  int number,i=1,sum=0;

  printf("Enter number : ");
  scanf("%d",&number);

  while(i<=number){
    sum += i;
    i = i + 2;
  }
  printf("Sum of odd number from 1 to %d is %d",number,sum);

  return 0;
}