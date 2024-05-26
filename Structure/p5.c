// Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.

#include <stdio.h>

struct Student
{
  int id;
  char name[25];
  char year[4];
  float gpa;
  char grade;

};

void print_details(struct Student *,int);

int main(){
  struct Student stu[5]=
    {
      {1,"Ram","2024",7.5,'C'},
      {2,"Mohan","2023",9,'A'},
      {3,"Sohan","2023",9.5,'A'},
      {4,"Neha","2024",8.5,'B'},
      {5,"Nisha","2022",6,'E'}
    };

  struct Student *student_ptr = stu;

  print_details(student_ptr,5);

  return 0;
}



void print_details(struct Student *stu,int size){
  for (int i = 0; i < size; i++)
  {
    printf("Id : %d\n",(stu + i)->id);
    printf("Name : %s\n",(stu + i)->name);
    printf("Year : %s\n",(stu + i)->year);
    printf("GPA : %.2f\n",stu[i].gpa);
    printf("Grade : %c\n",stu[i].grade);
    printf("----------********----------\n");
  }
}