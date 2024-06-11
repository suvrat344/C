// Create a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main(){
  int num,sum=0;

  printf("Enter number : ");
  scanf("%d",&num);
  
  int temp = num;

  while(num > 0){
    sum = sum  + pow(num % 10,3);
    num /= 10;
  }

  if(temp == sum){
    printf("%d is an Armstrong Number.",temp);
  }
  else{
    printf("%d is not an Armstrong Number.",temp);
  }

  return 0;
}