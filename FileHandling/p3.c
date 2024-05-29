// Write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file

#include <stdio.h>

int main(){
  int ch;
  FILE *fptr = fopen("demo.txt","r"),*fptr1 = fopen("demo1.txt","w");

  if(fptr == NULL){
    printf("File doesn't exist");
    return 1;
  }

  while((ch = fgetc(fptr)) != EOF)
  {
    putc(ch,fptr1);
  }

  fclose(fptr);
  fclose(fptr1);
  
  return 0;
}