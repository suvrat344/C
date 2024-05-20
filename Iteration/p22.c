// Create a program that print patterns:
/*
*            *****          *
**            ****         ** 
***            ***        ***
****            **       ****
*****            *      *****
*/

#include <stdio.h>

int main(){
  int row = 5,i = 1,j;

  printf("Pattern1\n");

  while(i <= row){
    j = 1;
    while(j <= i){
      printf("*");
      j++;
    }
    printf("\n");
    i++;
  }

  printf("Pattern2\n");
  i = 1;

  while(i <= row){
    j = 1;
    while(j <= row + 1 - i){
      printf("*");
      j++;
    }
    printf("\n");
    i++;
  }

  printf("Pattern3\n");
  i = 1;

  while(i <= row){
    j = 1;
    while(j <= row){
      if(j < row - i + 1){
        printf(" ");
      }
      else{
        printf("*");
      }
      j++;
    }
    printf("\n");
    i++;
  }
  
  return 0;
}