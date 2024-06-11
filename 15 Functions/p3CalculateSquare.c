// . Define a function square that takes an int and returns its square.

#include <stdio.h>

int square(int);

int main(){
  int number;

  printf("Enter number : ");
  scanf("%d",&number);

  printf("Square of %d is %d",number,square(number));

  return 0;
}


int square(int num){
  return num * num;
}