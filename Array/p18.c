// Write a function that uses pointer arithmetic to copy an array of char into another

#include <stdio.h>

void copy(char *arr,int size);


int main(){
  char arr[] = {'H','e','l','l','o'};
  int size;
  size = sizeof(arr) / sizeof(arr[0]);

  copy(arr,size);

  return 0;
}

void copy(char *arr,int size){
  char new_arr[50];

  for (int i = 0; i < size; i++)
  {
    *(new_arr + i) = *(arr + i);
  }
  
  printf("New Array\n");

  for (int i = 0; i < size; i++)
  {
    printf("%c ",*(new_arr+i));
  }
  
}