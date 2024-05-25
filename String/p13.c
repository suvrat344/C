// Write a program to convert a input string to uppercase

#include <stdio.h>
#include <ctype.h>

int main(){
  char text[100];

  printf("Enter text : ");
  fgets(text,sizeof(text),stdin);

  // for (int i = 0; i < sizeof(text); i++)
  // {
  //   text[i] = toupper(text[i]);
  // }

  for (int i = 0; text[i] !='\0'; i++)
  {
    if(text[i] >= 'a' && text[i] <= 'z'){
      text[i] = text[i] - 32;
    }
  }
  
  printf("%s",text);

  return 0;
}