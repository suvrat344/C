// Write a program to change the value of an integer variable using a pointer and the * operator

#include <stdio.h>

int main(){
  int num = 10;
  int *ptr = &num;

  printf("Value of num is %d\n",num);

  *ptr = *ptr + 10;
  printf("Value of num after change : %d",num);

  return 0;
}