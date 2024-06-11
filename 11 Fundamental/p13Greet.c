// Create a program to input name of the person and respond with "Welcome NAME to this site"

#include <stdio.h>

int main(){
  char name[50];
  printf("Enter your name : ");
  scanf("%s",&name);
  printf("Welcome %s to this site",name);

  return 0;
}