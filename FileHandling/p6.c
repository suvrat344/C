// Create a program that performs both reading and writing operations on a file called data.txt

#include <stdio.h>

int main()
{
  FILE *fptr = fopen("data.txt","r+");

  if(fptr == NULL)
  {
    printf("File doesn't exist");
    return 1;
  }

  char ch;

  while((ch = fgetc(fptr)) != EOF)
  {
    printf("%c",ch);
  }

  fseek(fptr,0,SEEK_END);
  fputs("This message was written by program.",fptr);

  fclose(fptr);
  fptr = NULL;

  return 0;
}