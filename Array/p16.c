// Create a program to reverse an array

#include <stdio.h>

void reverse(int *arr,int);

int main(){
  int arr[] = {3,7,5,2,9,1,8},size;

  size = sizeof(arr)/sizeof(arr[0]);
  reverse(arr,size);

  printf("Print Array After Reverse\n");

  for(int i = 0; i < size; i++)
  {
    printf("%d ",arr[i]);
  }
  
  return 0;
}


void reverse(int *arr,int size){
  int temp;
  for(int i = 0; i < size / 2; i++)
  {
     temp = *(arr + i);
     *(arr + i) =  *(arr + size - i - 1);
     *(arr + size - i - 1) = temp;
  }
}