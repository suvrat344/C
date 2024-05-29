// Write a program that takes user input and writes it to a file, ensuring each entry is on a new line.

#include <stdio.h>

int main(){
  char name[5][100];

  FILE *fptr = fopen("name.txt","w");

  if(fptr == NULL)
  {
    printf("File doesn't open");
    return 1;
  } 

  // Taking User Name
  for (int i = 0; i < 5; i++)
  {
    printf("Enter name : ");
    fgets(name[i],sizeof(name),stdin);
    fputs(name[i],fptr);
  }
  
  fclose(fptr);

  return 0;
}