// Create a program to print the area of a circle by inputting its radius.

#include <stdio.h>
#define PI 3.14

int main(){
  float radius;
  printf("Enter radius of circle : ");
  scanf("%f",&radius);
  printf("Area of Circle : %f",PI * radius * radius);

  return 0;
}