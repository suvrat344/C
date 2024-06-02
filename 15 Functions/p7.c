// Call a function get_average that takes five int numbers and returns the average.

#include <stdio.h>

float get_average(int num1,int num2,int num3,int num4, int num5){
  return (float) (num1 + num2 + num3 + num4 + num5)/5;
}

int main(){
  int first,second,third,fourth,fifth;

  printf("Enter first number : ");
  scanf("%d",&first);

  printf("Enter second number : ");
  scanf("%d",&second);

  printf("Enter third number : ");
  scanf("%d",&third);

  printf("Enter fourth number : ");
  scanf("%d",&fourth);

  printf("Enter fifth number : ");
  scanf("%d",&fifth);

  printf("Average of %d,%d,%d,%d,%d is %.2f",first,second,third,fourth,fifth,get_average(first,second,third,fourth,fifth));


  return 0;
}