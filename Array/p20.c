// Create a program to search an element in a 2-D array

#include <stdio.h>

int main(){
  int arr[][3] ={{1,2,3},{4,5,6},{7,8,9}};
  
  int search = 5;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(arr[i][j] == search){
        printf("Row Number : %d and Column Number : %d",i+1,j+1);
        break;
      }
    }
  }

  return 0;
}