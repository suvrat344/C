// Use calloc to allocate an array for a set of char characters representing a sentence, ensuring all the memory is initialized to zero.


#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  char *arr;

  printf("Enter number of chracter to be stored : ");
  scanf("%d",&n);

  arr = (char *)calloc(n,sizeof(char));

  if (arr == NULL)
  {
    printf("Memory allocation failed");
  }
  else
  {
    printf("Enter sentence : ");
    scanf(" %[^\n]", arr);
    printf("%s",arr);
  }

  free(arr);
  
  return 0;
}