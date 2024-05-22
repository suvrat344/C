// Declare a pointer to a char and use it to read and print a character entered by the user.

#include <stdio.h>

int main(){
  char c,*ptr=&c;

  printf("Enter any character : ");
  scanf("%c",ptr);

  printf("Character entered by user is %c.",*ptr);

  return 0;
}