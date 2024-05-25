// Use printf with format specifiers to format and print a date string (day, month, year).

#include <stdio.h>

int main(){
  int day,month,year;

  printf("Enter day of the year : ");
  scanf("%d",&day);

  printf("Enter month of the year : ");
  scanf("%d",&month);

  printf("Enter year of the year : ");
  scanf("%d",&year);

  printf("Date : %d-%d-%d",day,month,year);

  return 0;
}