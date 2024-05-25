// Write a function that takes a string and reverses it in place

#include <stdio.h>
#include <string.h>

int main(){
  char text[100],temp;

  printf("Enter string : ");
  fgets(text,sizeof(text),stdin);

  int length = strlen(text);

  if(length > 0 && text[length - 1] == '\n'){
    text[length - 1] = '\0';
  }

// printf("%d",strlen(text));
  for (int i = 0; i < strlen(text) / 2; i++)
  {
    temp = text[i];
    text[i] = text[strlen(text) - i - 1];
    text[strlen(text) - i - 1] = temp;
  }
  
  puts(text);

  return 0;
}