// Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.

#include <stdio.h>

int main(){
  char filename[100];

  printf("Enter file name : ");
  scanf("%s",filename);

  FILE *fptr = fopen(filename,"r");

  if(fptr == NULL)
  {
    printf("File doesn't exist.");
  }
  else
  {
    printf("Operation Successful");
  }

  fclose(fptr);
  fptr = NULL;

  return 0;
}