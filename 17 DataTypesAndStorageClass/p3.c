// Write a C program that initializes an unsigned int to its maximum possible value and an int to a negative number. Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow

#include <stdio.h>
#include <limits.h>

int main(){
  unsigned int max_unsigned = UINT_MAX;
  int negative_number = INT_MIN;

  printf("Maximum value of unsigned int is %u\n",max_unsigned);
  printf("Minimum value of int is %d\n",INT_MIN);

  max_unsigned++;
  negative_number++;

  printf("Value of usigned int after increment is %u\n",max_unsigned);
  printf("Value of int after increment is %d",INT_MIN);

  return 0;
}
