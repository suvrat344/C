// Pass a Car structure to a function that prints out a description of the car in one complete sentence.


#include <stdio.h>

struct Car
{
  char make[50];
  char model[50];
  char year[6];
  char color[25];
};

void print_details(struct Car c1);


int main(){
  struct Car cars[3] =
            {
             {"abc","def","2024","red"},
             {"abc","def","2023","blue"},
             {"abc","def","2022","black"}
            };


  for (int i = 0; i < 3; i++)
  {

    print_details(cars[i]);
  }
  

  return 0;
}


void print_details(struct Car c1){
  printf("Car Making Company : %s\n",c1.make);
  printf("Car Model : %s\n",c1.model);
  printf("Car Making Year : %s\n",c1.year);
  printf("Car Color : %s\n",c1.color);
  printf("---------xxxxxxxxxxxxxx------------\n");
}