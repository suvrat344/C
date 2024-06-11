// Create a program that determines if a number is positive, negative, or zero.

#include <stdio.h>

int main(){
  int num;
  
  printf("Enter number : ");
  scanf("%d",&num);

  if(num > 0){
    printf("Positive");
  }
  else if(num == 0){
    printf("Zero");
  }
  else{
    printf("Negative");
  }

  return 0;
}