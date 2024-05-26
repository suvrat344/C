// Write a function that takes a string and reverses it in place

#include <stdio.h>
#include <string.h>

int main(){
  char text[100],temp;

  printf("Enter string : ");
  fgets(text,sizeof(text),stdin);

  int length = strlen(text);

  for (int i = 0; i < length / 2; i++)
  {
    temp = text[i];
    text[i] = text[length - i - 1];
    text[length - i - 1] = temp;
  }
  
  puts(text);

  return 0;
}