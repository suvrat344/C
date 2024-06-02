// Create a program to find the maximum and minimum element in an array.

#include <stdio.h>
#include <limits.h>

void max_min(int *arr,int);

int main(){
  int arr[] = {110,204,4,93,301,7,-3,-11,1000,854,321},size;
  size = sizeof(arr)/sizeof(arr[0]);

  max_min(arr,size);

  return 0;
}


void max_min(int *arr,int size){
  int max = INT_MIN,min = INT_MAX;

  for (int i = 1; i < size; i++)
  {
    if(*(arr + i) > max){
      max = *(arr + i);
    }

    if(*(arr + i) < min){
      min = *(arr + i);
    }
  }
  printf("Maximum element of an array is %d\n",max);
  printf("Minimum element of an array is %d",min);
}