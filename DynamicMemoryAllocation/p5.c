// Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int n,*arr;
  srand(time(NULL));

  printf("Enter how many random number you want to store in array : ");
  scanf("%d",&n);

  arr = (int *)calloc(n,sizeof(int));  

  if(arr == NULL)
  {
    printf("Memory not allocated");
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      *(arr + i) = rand();
    }
  }


  printf("Array of random numbers\n");

  for (int i = 0; i < n; i++)
  {
    printf("%d ",*(arr + i));
  }
  
  arr = realloc(arr,(n/2) * sizeof(int));

  printf("\nArray of random number after realloc\n");

  for (int i = 0; i < n/2; i++)
  {
    printf("%d ",*(arr + i));
  }

  free(arr);

  return 0;
}