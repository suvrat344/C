// Create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.

#include <stdio.h>

int main(){
  int num;

  do
  {
    printf("Enter positive number : ");
    scanf("%d",&num);
  } while (num > 0);
  
  return 0;
}