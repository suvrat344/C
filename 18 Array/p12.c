// Create a program to find number of occurrences of an element in an array.

#include <stdio.h>
#define SIZE 10

void count_occurence(int arr[],int);

int main(){
  int arr[] = {1,3,2,3,5,7,9,1,2,5,1,9},size;

  size = sizeof(arr)/sizeof(arr[0]);
  count_occurence(arr,size);

  return 0;
}



void count_occurence(int arr[],int size){
  int count_arr[SIZE] = {0};

  for (int i = 0; i < size; i++)
  {
    count_arr[arr[i]]++;
  }
  
  printf("Count Occurence of Elements in an array\n");
  printf("Element | Occurence\n");

  for (int i = 0; i < SIZE; i++)
  {
    if(count_arr[i] != 0){
      printf("%d | %d\n",i,count_arr[i]);
    }
  }
}