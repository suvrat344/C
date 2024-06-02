// Create a program using continue to sum all positive numbers entered by the user; skip any negative numbers

#include <stdio.h>

int main(){
  int num,sum = 0,count;

  count = printf("Enter number you want to enter : ");
  scanf("%d",&count);

  for (int i = 0; i < count; i++)
  {
    printf("Enter number : ");
    scanf("%d",&num);

    if(num < 0){
      continue;
    }
    sum = sum + num;
  }

  printf("Sum of positive number entered by user : %d",sum);
  
  return 0;
}