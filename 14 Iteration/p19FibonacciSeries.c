// Create a program to print the Fibonacci series up to a certain number

#include <stdio.h>

int main(){
  int term,num1=0,num2=1,num3;

  printf("Enter term : ");
  scanf("%d",&term);

  term = term -2;
  printf("%d %d ",num1,num2);

  while(term > 0){
    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
    printf("%d ",num2);
    term--;
  }

  return 0;
}