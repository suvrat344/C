// Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.

#include <stdio.h>

int main(){
  int sum = 0,num;

  do
  {
    printf("Enter number : ");
    scanf("%d",&num);
    sum += num;
  } while (num != 0);
  
  printf("Sum of all number entered by user is %d",sum);

   return 0;
}