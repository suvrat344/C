// Define a Car structure with fields for make, model, year, and color.

#include <stdio.h>

struct Car
{
  char make[50];
  char model[50];
  char year[6];
  char color[25];
};

typedef struct Car car;



int main(){
  car ford = {"Ford","Aspire","2024","Red"};

  printf("Car Making Company is %s.\n",ford.make);
  printf("Car Model is %s.\n",ford.model);
  printf("Car Making Year is %s.\n",ford.year);
  printf("Car Color is %s.",ford.color);

  return 0;
}