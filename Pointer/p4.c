// Implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. Write a main function to test it with different values.

#include <stdio.h>

void min_max(int *,int *,int *,int *);

int main(){
  int a,b,min,max;

  printf("Enter first number : ");
  scanf("%d",&a);

  printf("Enter second number : ");
  scanf("%d",&b);

  min_max(&a,&b,&min,&max);
  printf("MIN(%d,%d) = %d and MAX(%d,%d) = %d",a,b,min,a,b,max);

  return 0;
}


void min_max(int *a,int *b,int *min,int *max){
  *max = *a > *b ? *a 
                 : *b;
  *min = *a < *b ? *a 
                 : *b;
}
