// Create a program to print the area of a square by inputting its side length

#include <stdio.h>

int main(){
  int side;
  printf("Enter length of square : ");
  scanf("%d",&side);
  printf("Area of Square : %d",side*side);

  return 0;
}