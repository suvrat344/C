// Write a program that calculates the factorial of a given number.

#include <stdio.h>

int main(){
  int fact = 1,number,i=1;

  printf("Enter number : ");
  scanf("%d",&number);

  while(i<=number){
    fact = fact * i;
    i = i + 1;
  }

  printf("Factoraial of %d is %d",number,fact);
  
  return 0;
}