// Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.

# include <stdio.h>

int main(){
  int a;
  float b;
  double c;
  char d;
  printf("Size of Integer : %d\n",sizeof(a));
  printf("Size of Float : %d\n",sizeof(b));
  printf("Size of Double : %d\n",sizeof(c));
  printf("Size of Character : %d\n",sizeof(d));

  return 0;
}