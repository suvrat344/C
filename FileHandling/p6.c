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

  // Reading content of file
  int ch;

  while((ch = fgetc(fptr)) != EOF)
  {
    printf("%c",ch);
  }

  // Writing Content to the file
  char s[25] = "line3",s1="line4\n";
  fprintf(fptr,"%s\n",s);
  fputs(fptr,s1);
  fwrite(fptr,s1);

  fclose(fptr);

  return 0;
}