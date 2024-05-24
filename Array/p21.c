// Create a program to do sum and average of all elements in a 2-array


#include <stdio.h>

int main(){
  int arr[][3] ={{1,2,3},{4,5,6},{7,8,9}},sum=0,count=0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum = sum + arr[i][j];
      count++;
    }
  }

  printf("Sum of 2D Array : %d\n",sum);
  printf("Average of 2D Array : %.2f",(float) sum/count);

  return 0;
}