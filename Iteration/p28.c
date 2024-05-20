// Create a program using continue to print only even numbers using continue for loop.

#include <stdio.h>

int main(){
  int num;

  printf("Enter number upto which you want to print even number : ");
  scanf("%d",&num);

  for (int i = 0; i <= num; i++)
  {
    if(i % 2 == 1){
      continue;
    }
    else{
      printf("%d ",i);
    }
  }
  
  return 0;
}