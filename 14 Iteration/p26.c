// Create a program using for to display if a number is prime or not.

#include <stdio.h>
#include <math.h>

int main(){
  int num,isPrime=1;

  printf("Enter number : ");
  scanf("%d",&num);

  if(num == 1){
    printf("%d is not prime number",num);
  }
  else if(num == 2 || num == 3){
    printf("%d is prime number",num);
  }
  else{
    for (int i = 2; i <= sqrt(num); i++)
    {
      if(num % i == 0){
        isPrime = 0;
        printf("%d is not prime number.",num);
        break;
      }
    }
    if(isPrime == 1){
      printf("%d is prime number.",num);
    }
  }
  
  return 0;
}