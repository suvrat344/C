// Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.


#include <stdio.h>
#include <string.h>

int main(){
  char text[100];

  do
  {
    printf("Enter text : ");
    fgets(text,sizeof(text),stdin);
    int length = strlen(text);
    if(length > 0 && text[length - 1] == '\n'){
      text[length - 1] = '\0';
    }
  } while (strcmp("exit",text) != 0);
  
  return 0;
}