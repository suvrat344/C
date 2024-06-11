// Create a program to swap two numbers. 

#include <stdio.h>

int main(){
  int a = 20,b = 15,temp;
  printf("Before Swapping a = %d and b = %d\n",a,b);
  temp = a;
  a = b;
  b = temp;
  printf("After Swapping a = %d and b = %d",a,b);

  return 0;
}