// Create a program that determines if a number is odd or even.

#include <stdio.h>

int main(){
  int num;

  printf("Enter number : ");
  scanf("%d",&num);

  if(num % 2 == 0){
    printf("even");
  }
  else{
    printf("odd");
  }

  return 0;
}