// Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.

#include <stdio.h>

int main(){
  float km;

  printf("Enter distance in km. : ");
  scanf("%f",&km);

  printf("Distance in miles : %lf\n",km * 0.621371);
  printf("Distance in miles : %llf",km * 0.621371);

  return 0;
}