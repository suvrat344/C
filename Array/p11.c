// Create a program to find the sum and average of all elements in an array.

#include <stdio.h>

int sum(int arr [],int);

int main(){
  int arr[]={4,7,8,2,1,3,9,11,12,3},size;
  float average;

  size = sizeof(arr)/sizeof(arr[0]);

  int total = sum(arr,size);
  printf("Size of array is %d\n",size);
  printf("Sum of array is %d\n",total);
  printf("Average of array is %.2f",(float) total/size);

  return 0;
}

int sum(int arr[],int size){
  int sum;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  return sum;
}