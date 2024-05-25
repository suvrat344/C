// Create a program to find the sum of two diagonal elements

#include <stdio.h>
#define SIZE 3

void print_diagonal_sum(int arr[][SIZE]);

int main(){
  int arr[][3] ={{1,2,3},{4,5,6},{7,8,9}};

  print_diagonal_sum(arr);

  return 0;
}


void print_diagonal_sum(int arr[][SIZE]){
  int sum_right_diagonal = 0,sum_left_diagonal=0;
  for (int i = 0; i < SIZE; i++)
  {
    sum_left_diagonal += arr[i][i];
    sum_right_diagonal +=arr[i][SIZE - 1];
  }
  printf("Sum of left diagonal is %d\n",sum_left_diagonal);
  printf("Sum of right diagonal is %d\n",sum_right_diagonal);

  int total_diagonal_sum = sum_left_diagonal + sum_right_diagonal;
  
  if(SIZE % 2 == 1){
    int index = SIZE / 2;
    total_diagonal_sum -= arr[index][index];
  }
  printf("Sum of both diagonals is %d",total_diagonal_sum);
}