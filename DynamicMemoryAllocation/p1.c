// Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program


#include <stdio.h>
#include <stdlib.h>

typedef struct Car
{
  char make[50];
  char model[50];
  char year[6];
  char color[25];
} car;


void input_car(car *Cars,int size){
  for (int i = 0; i < size; i++)
  {
    printf("Enter name of company : ");
    scanf("%s",(Cars+i)->make);
    printf("Enter model of car : ");
    scanf("%s",(Cars+i)->model);
    printf("Enter year of manufacturing : ");
    scanf("%s",(Cars+i)->year);
    printf("Enter color of car : ");
    scanf("%s",(Cars+i)->color);
    printf("---------**********------------\n");
  }
}


void display(car *Cars,int size){
  for (int i = 0; i < size; i++)
  {
    printf("Name of Company : %s\n",(Cars+i)->make);
    printf("Model of Car : %s\n",(Cars+i)->model);
    printf("Manufacturing Year : %s\n",(Cars+i)->year);
    printf("Color : %s\n",(Cars+i)->color);
    printf("-------**********--------------\n");
  }
}


int main(){
  int n;

  printf("Enter no of car you want to enter : ");
  scanf("%d",&n);

  car *Cars = (car *)malloc(n*sizeof(car));
  if (Cars == NULL)
  {
    printf("Memory not allocated");
  }
  else
  {
    input_car(Cars,n);
  }

  display(Cars,n);

  free(Cars);
  Cars = NULL;

  return 0;
}