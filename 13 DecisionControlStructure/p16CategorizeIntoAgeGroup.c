// Create a program that categorize a person into different age groups 
// Child -> below 13 Teen -> below 20
// Adult -> below 60 Senior-> above 60

#include <stdio.h>

int main(){
  int age;

  printf("Enter age : ");
  scanf("%d",&age);

  if(age <= 13){
    printf("Child");
  }
  else if(age <= 20){
    printf("Teen");
  }
  else if(age <= 60){
    printf("Adult");
  }
  else{
    printf("Senior");
  }

  return 0;
}
