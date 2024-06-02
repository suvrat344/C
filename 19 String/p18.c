// Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result

#include <stdio.h>
#include <string.h>

int isPallindrome(char *);

int main(){
  char text[100] = "raccar";

  int result = isPallindrome(text);

  result == 1 ? printf("Pallindrome") : printf("Not Pallindrome");

  return 0;
}

int isPallindrome(char *text){
  int length = strlen(text),Pallindrome = 1;

  for (int i = 0; i < length / 2; i++)
  {
    if(text[i] != text[length - 1 - i]){
      Pallindrome = 0;
    }
  }
  
  return Pallindrome;
}