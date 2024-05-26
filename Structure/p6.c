// Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.

#include <stdio.h>

struct Borrowed{
  int total_book_borrow;
};

struct Student
{
  int id;
  char name[25];
  char year[5];
  struct Borrowed borrowed;
  float gpa;
  char grade;

};

void print_details(struct Student *,int);

int main(){
  struct Student stu[5]=
    {
      {1,"Ram","2024",{7},7.5,'C'},
      {2,"Mohan","2023",{3},9,'A'},
      {3,"Sohan","2023",{2},9.5,'A'},
      {4,"Neha","2024",{1},8.5,'B'},
      {5,"Nisha","2022",{5},6,'E'}
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
    printf("Total Book Borrow : %d\n",(stu + i)->borrowed.total_book_borrow);
    printf("GPA : %.2f\n",stu[i].gpa);
    printf("Grade : %c\n",stu[i].grade);
    printf("----------********----------\n");
  }
}