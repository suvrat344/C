// Create a program to return a new array deleting a specific element.

#include <stdio.h>

void delete(int *arr,int,int);


int main(){
  int arr[] = {10,16,22,34,55,11,19,21,67,72,73,53},size,deleted_element;
  size = sizeof(arr)/sizeof(arr[0]);

  printf("Enter element you want to delete : ");
  scanf("%d",&deleted_element);

  delete(arr,deleted_element,size);
  
  // Print New Array
  for (int i = 0; i < size - 1; i++)
  {
    printf("%d ",arr[i]);
  }
  
return 0;
}



void delete(int *arr,int element,int size){
   for (int i = 0; i < size; i++)
  {
    if(arr[i] == element){
      for (int j = i; j < size-1; j++)
      {
        *(arr + j) = *(arr + j + 1);
      }
      break;
    }
  }
}