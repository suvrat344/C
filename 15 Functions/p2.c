// Write a function that adds that takes 4 int parameters and returns the sum.

#include <stdio.h>

int sum(int,int,int,int);

int main(){
  int first,second,third,fourth;

  printf("Enter first number : ");
  scanf("%d",&first);

  printf("Enter second number : ");
  scanf("%d",&second);

  printf("Enter third number : ");
  scanf("%d",&third);

  printf("Enter fourth number : ");
  scanf("%d",&fourth);

  int result = sum(first,second,third,fourth);

  printf("%d + %d + %d + %d = %d",first,second,third,fourth,result);

  return 0;
}


int sum(int num1,int num2,int num3,int num4){
  return num1 + num2 + num3 + num4;
}