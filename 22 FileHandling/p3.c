// Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file

#include <stdio.h>

int main(){
  char ch;
  FILE *fptr = fopen("demo.txt","r"),*fptr1 = fopen("demo1.txt","w");

  if(fptr == NULL){
    printf("File doesn't exist");
    return 1;
  }

  while((ch = fgetc(fptr)) != EOF)
  {
    fputc(ch,fptr1);
  }

  fclose(fptr);
  fclose(fptr1);
  fptr,fptr1 = NULL;
  
  return 0;
}