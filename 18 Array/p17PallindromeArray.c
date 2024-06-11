// Create a program to check is the array is palindrome or not

#include <stdio.h>

int isPallindrome(int *arr,int);

int main(){
  int arr[] = {1,2,3,3,2,1},size;

  size = sizeof(arr)/sizeof(arr[0]);
  int result = isPallindrome(arr,size);

  if (result == 1)
  {
    printf("Array is pallindrome");
  }
  else{
    printf("Array is not pallindrome");
  }

  return 0;
}


int isPallindrome(int *arr,int size){
  int isPallindrome=1;
  for(int i = 0; i < size / 2; i++)
  {
    if(*(arr + i) != *(arr + size - i - 1)){
      isPallindrome = 0;
      break;
    }
  }

  return isPallindrome;
}