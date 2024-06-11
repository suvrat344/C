// Demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function

#include <stdio.h>

void change(int);

int main(){
  int num;

  printf("Enter number : ");
  scanf("%d",&num);
  printf("Value before function calling : %d",num);
  change(num);
  printf("\nValue after function calling : %d",num);

  return 0;
}

void change(int num){
  num = num + 2;
}