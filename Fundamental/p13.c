// Create a program to input name of the person and respond with "Welcome NAME to KG Coding"

#include <stdio.h>

int main(){
  char name[50];
  printf("Enter your name : ");
  scanf("%s",&name);
  printf("Welcome %s to KG Coding",name);

  return 0;
}