// Pass a Car structure to a function that prints out a description of the car in one complete sentence.


#include <stdio.h>

struct Car
{
  char make[50];
  char model[50];
  char year[6];
  char color[25];
};


typedef struct Car Cars;
void print_details(Cars *,int);


int main(){
  Cars c[3] =
            {
             {"Ford","Aspire","2022","Red"},
             {"Tata","Alto","2023","Blue"},
             {"Swift","Desire","2022","Black"}
            };
  Cars *car_ptr = c;

  print_details(car_ptr,3);

  return 0;
}


void print_details(Cars *c,int size){

  for (int i = 0; i < size; i++)
  {
    printf("Car Making Company : %s\n",c->make);
    printf("Car Model : %s\n",c->model);
    printf("Car Making Year : %s\n",c->year);
    printf("Car Color : %s\n",c->color);
    printf("---------xxxxxxxxxxxxxx------------\n");
  }
  
}