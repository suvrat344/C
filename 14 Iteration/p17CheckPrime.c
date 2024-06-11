// Create a program to check whether a given number is prime using while.

#include <stdio.h>
#include <math.h>

int main(){
  int num,i=2,isPrime=1;

  printf("Enter number : ");
  scanf("%d",&num);

  while(i <= sqrt(num)){
    if(num % i == 0){
      isPrime = 0;
      break;
    }
    i++;
  }

  if(isPrime == 1 && num != 1){
    printf("%d is prime number.",num);
  }
  else{
    printf("%d is not prime number.",num);
  }

  return 0;

}