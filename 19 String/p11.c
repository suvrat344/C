// Read a line of text from the user using fgets and then print it using puts.

#include <stdio.h>

int main(){
  char line[100];

  printf("Enter line : ");
  fgets(line,sizeof(line),stdin);

  puts(line);

  return 0;
}