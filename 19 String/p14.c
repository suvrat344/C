// Create a simple text-based user login system that compares a stored password string using strcmp

#include <stdio.h>
#include <string.h>

int main(){
  const char password[] = "adefg",text[100];

  printf("Enter password : ");
  fgets(text,sizeof(text),stdin);

  int length = strlen(text);

  if (length > 0 && text[length - 1] == '\n')
  {
    text[length - 1] = '\0';
  }
  
  if(strcmp(password,text) == 0){
    printf("Password Validated");
  }
  else{
    printf("Incorrect Password");
  }

  return 0;
}