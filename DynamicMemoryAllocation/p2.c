// Create a program that uses malloc to dynamically allocate an array for a specified number of float values entered by the user and then stores user-entered numbers into it.


#include <stdio.h>
#include <stdlib.h>

void print_array(float *arr,int size){
  printf("Element of Array\n");
  for (int i = 0; i < size; i++)
  {
    printf("%.2f ",arr[i]);
  } 
}

int main(){
  int n;
  float *arr;

  printf("Enter no of element you want to store in an array : ");
  scanf("%d",&n);

  arr = (float *)malloc(n * sizeof(float));

  if(arr == NULL)
  {
    printf("Memory Allocation Failed");
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if ((i+1) == 1)
      {
        printf("Enter %dst element of array : ",i+1);
        scanf("%f",&arr[i]);
      }
      else if ((i+1) == 2)
      {
        printf("Enter %dnd element of array : ",i+1);
        scanf("%f",&arr[i]);
      }
      else if ((i+1) == 3)
      {
        printf("Enter %drd element of array : ",i+1);
        scanf("%f",&arr[i]);
      }
      else{
        printf("Enter %dth element of array : ",i+1);
        scanf("%f",&arr[i]);
      }
    }
  }
  
  print_array(arr,n);

  return 0;
}