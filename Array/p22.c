// Create a program to find the sum of two diagonal elements

#include <stdio.h>

int main(){
  int arr[][3] ={{1,2,3},{4,5,6},{7,8,9}},sum=0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(i == j){
        sum = sum + arr[i][j];
      }
    }
  }

  printf("Sum of diagonal elements : %d\n",sum);

  return 0;
}