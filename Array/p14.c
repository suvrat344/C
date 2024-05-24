// Create a program to check if the given array is sorted.

#include <stdio.h>

int isSorted(int *arr,int size){
  int isSort_Asc = 1,isSort_Desc = 1;

  // Check if array is sort in ascending order
  for (int i = 0; i < size - 1; i++)
  {
    if(*(arr + i + 1) < *(arr + i)){
      isSort_Asc = 0;
      break;
    }
  }

  // Check if array is sort in descending order
  for (int i = 0; i < size - 1; i++)
  {
    if(*(arr + i + 1) > *(arr + i)){
      isSort_Desc = 0;
      break;
    }
  }

  if(isSort_Asc == 1 || isSort_Desc == 1){
    return 1;
  }
  else{
    return 0;
  }
}


int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10},size;
  size = sizeof(arr)/sizeof(arr[0]);

  int result = isSorted(arr,size);

  if(result == 1){
    printf("Array is sorted.");
  }
  else{
    printf("Array is not sorted");
  }

  return 0;
}