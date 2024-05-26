// Define a Car structure with fields for make, model, year, and color.

#include <stdio.h>

struct Car
{
  char make[50];
  char model[50];
  char year[6];
  char color[25];
};


int main(){
  struct Car c1 = {"abc","def","2024","red"};

  printf("Car Making Company is %s.\n",c1.make);
  printf("Car Model is %s.\n",c1.model);
  printf("Car Making Year is %s.\n",c1.year);
  printf("Car Color is %s.",c1.color);

  return 0;
}