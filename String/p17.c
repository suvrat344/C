// Implement a trim function that removes leading and trailing spaces from a string

#include <stdio.h>
#include <string.h>

void trim(char *text){
  int start_index = 0,end_index = strlen(text);

  while(text[start_index] == ' ' && start_index < end_index){
    start_index++;
  }

  while(text[end_index] == ' ' && start_index >= end_index){
    end_index--;
  }

  int length = end_index - start_index + 1;

  strncpy(text,text+start_index,length);
  text[length] = '\0';
}


int main(){
  char text[65] = "     hello     ";
  
  printf("String before trimming : %s",text);
  trim(text);

  printf("\nTrimmed String : %s",text);

return 0;
}