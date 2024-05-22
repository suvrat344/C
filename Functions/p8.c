// Create a program using recursion to display the Fibonacci series upto a certain number.

#include <stdio.h>

int fibonacci(int);


int main(){
  int term;

  printf("Enter number of terms : ");
  scanf("%d",&term);

  for (int i = 0; i < term; i++)
  {
    printf("%d ",fibonacci(i));
  }

  return 0;
}


int fibonacci(int n){
  if(n == 0){
    return 0;
  }
  else if (n == 1){
    return 1;
  }
  else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}