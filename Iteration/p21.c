// . Create a program to verify if a number is a palindrome.

#include <stdio.h>

int main(){
  int num,rev=0;

  printf("Enter number : ");
  scanf("%d",&num);
  int temp = num;

  while(num > 0){
    rev = rev * 10 + num % 10;
    num = num / 10;
  }

  if(temp == rev){
    printf("%d is pallindrome number.",temp);
  }
  else{
    printf("%d is not pallindrome number.",temp);
  }

  return 0;
}