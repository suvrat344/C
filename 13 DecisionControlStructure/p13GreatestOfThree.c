// Create a program that determines the greatest of the three numbers

#include <stdio.h>

int main(){
  int a,b,c;

  printf("Enter first number : ");
  scanf("%d",&a);

   printf("Enter second number : ");
  scanf("%d",&b);

   printf("Enter third number : ");
  scanf("%d",&c);

  if(a > b && a > c){
    printf("%d is greatest",a);
  }
  else if(b > c){
    printf("%d is greatest",b);
  }
  else{
    printf("%d is greatest",c);
  }

  return 0;
}