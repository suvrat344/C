// Create a program that reads integers from a file and calculates their sum

#include <stdio.h>

int main(){
  FILE *fptr = fopen("sum.txt","r");

  if(fptr == NULL){
    printf("Operation Failed");
    return 1;
  }

  int sum=0,num1;

  while(fscanf(fptr,"%d",&num1) == 1){
    sum = sum + num1;
  }

  printf("%d",sum);

  fclose(fptr);

  return 0;
}