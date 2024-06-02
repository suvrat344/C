// Create a function max that takes two float arguments and returns the larger value.

#include <stdio.h>

float max(float,float);

int main(){
  float first,second;

  printf("Enter first number : ");
  scanf("%f",&first);

  printf("Enter second number : ");
  scanf("%f",&second);

  printf("Max of %.2f and %.2f is %.2f",first,second,max(first,second));

  return 0;
}

float max(float num1,float num2){
  return num1 > num2 ? num1 : num2;
}