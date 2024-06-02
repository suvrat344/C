// Create a program using do-while to find password checker until a valid password is entered

#include <stdio.h>
#include <string.h>

int main(){
  char password[10]="ghij",user_password[10];
  do
  {
    printf("Enter password without space: ");
    scanf("%s",user_password);
  } while (strcmp(password,user_password) != 0);
  
  printf("Password Validated");
  
  return 0;
}