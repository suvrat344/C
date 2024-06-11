// Call a function print_date that prints the current date. Define the function without any parameters.

#include <stdio.h>
#include<time.h>

void print_date(){
  time_t current_date;
  time(&current_date);

  char *date_string = asctime(localtime(&current_date));
  printf("Current Date is %s",date_string);
}

int main(){
  print_date();

  return 0;
}