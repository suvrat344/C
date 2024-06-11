// Create a program to check if the given array is sorted.

#include <stdio.h>

int isSorted(int *arr,int size){
  int isSort_Asc = 1,isSort_Desc = 1;

  for (int i = 0; i < size - 1; i++)
  {
    if(*(arr + i + 1) < *(arr + i)){
      isSort_Asc = 0;
    }
    else if (*(arr + i + 1) > *(arr + i))
    {
      isSort_Desc = 0;
    }
  }

  return isSort_Asc || isSort_Desc;
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