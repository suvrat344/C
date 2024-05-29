// Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.

#include <stdio.h>

int main(){
  FILE *fptr = fopen("demo.txt","r");

  if(fptr == NULL)
  {
    printf("File doesn't exist.");
  }
  else
  {
    printf("Operation Successful");
  }

  fclose(fptr);

  return 0;
}