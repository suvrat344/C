// .Create a program that calculates grades based on marks 
// A -> above 90% B -> above 75%
// C -> above 60% D -> above 30%
// F -> below 30

#include <stdio.h>

int main(){
  int marks;
  
  printf("Enter marks : ");
  scanf("%d",&marks);

  if(marks >= 90){
    printf("A Grade");
  }
  else if(marks >= 75){
    printf("B Grade");
  }
  else if(marks >= 60){
    printf("C Grade");
  }
  else if(marks >= 30){
    printf("D Grade");
  }
  else{
    printf("F Grade");
  }

  return 0;
}