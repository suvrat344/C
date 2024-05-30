// Allocate memory for a struct representing a Point with x and y coordinates, set some values, and then properly deallocate the memory using free

#include <stdio.h>
#include <stdlib.h>

struct Point{
  int x;
  int y;
};

void input(struct Point *p,int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("Enter x-coordinate : ");
    scanf("%d",&(p+i)->x);

    printf("Enter y-coordinate : ");
    scanf("%d",&(p+i)->y);
    printf("****************\n");
  } 
}


void display(struct Point *p,int size)
{
  printf("Enter coordinates by the user\n");
  for (int i = 0; i < size; i++)
  {
    printf("(%d,%d) ",(p+i)->x,(p+i)->y);
  }
}


int main(){
  int n;
  struct Point *p;

  printf("Enter no of points you want to store : ");
  scanf("%d",&n);
  
  p = (struct Point *)malloc(n * sizeof(struct Point));
  if(p == NULL){
    printf("Memory not allocated");
  }
  else{
    input(p,n);
  }

  display(p,n);
  
  free(p);
  p = NULL;

  return 0;
}