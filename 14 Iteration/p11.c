// Develop a program that prints the multiplication table for a given number

#include <stdio.h>

int main(){
  int number,i=1;

  printf("Enter number : ");
  scanf("%d",&number);

  while(i<11){
    printf("%d X %d = %d\n",number,i,number * i);
    i++;
  }

  return 0;
}