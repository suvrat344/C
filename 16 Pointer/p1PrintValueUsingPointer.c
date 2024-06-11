// Write a program that declares an integer variable and a pointer to it. Assign a value and print it using the pointer.

#include <stdio.h>

int main(){
  int num = 10,*ptr = &num;

  printf("Value of num is %d\n",num);
  printf("Address of num is %p\n",ptr);
  printf("Value of num using pointer is %d",*(ptr));

  return 0;
}