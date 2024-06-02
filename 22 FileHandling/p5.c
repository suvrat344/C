// Develop a program that appends user input to the end of a log file each time it's run.

#include <stdio.h>

int main(){
  FILE *fptr = fopen("logfile.txt","a");

  if(fptr == NULL)
  {
    printf("File doesn't exist.");
    return 1;
  }

  char name[25];

  printf("Enter name : ");
  fgets(name,sizeof(name),stdin);

  fputs(name,fptr);

  fclose(fptr);
  fptr = NULL;
  
  return 0;
}