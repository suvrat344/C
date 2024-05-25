// Create a program to search an element in a 2-D array

#include <stdio.h>

void search(int arr[][3],int,int,int);


int main(){
  int arr[][3] ={{1,2,3},{4,5,6},{7,8,9}};

  search(arr,3,3,5);

  return 0;
}


void search(int arr[][3],int row,int col,int element){
  int isFound = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if(arr[i][j] == element){
        printf("Row Number : %d and Column Number : %d",i+1,j+1);
        isFound = 1;
        break;
      }
    }
  }
  if(isFound==0) printf("Element is not found");
}