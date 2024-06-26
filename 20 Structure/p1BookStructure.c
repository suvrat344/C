// Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.

#include <stdio.h>
#include <string.h>

struct Book{
  char title[50];
  char author[50];
  float price;
};


void input_book(struct Book *book,int size){

  for (int i = 0; i < size; i++)
  {
    printf("Enter title of Book : ");
    fgets((book + i) -> title,sizeof(book->title),stdin);
    book->title[strcspn(book->title,"\n")] = '\0';

    printf("Enter author of Book : ");
    fgets((book + i) -> author,sizeof(book->author),stdin);
    book->author[strcspn(book->author,"\n")] = '\0';

    printf("Enter price of Book : ");
    scanf("%f",&(book + i) -> price);
    while(getchar() !='\n');
    printf("----------xxxxxxxxxxx-------------\n");
  }

}

void print_book(struct Book *book,int size){
  
  printf("----------Details of Book------------\n");

  for (int i = 0; i < size; i++)
  {
    printf("Title of Book : %s\n",(book + i) -> title);
    printf("Author of Book : %s\n",(book + i)  -> author);
    printf("Price of Book : %.2f\n",(book + i) ->price);
    printf("----------xxxxxxxxxxx-------------\n");
  }

}


int main(){
  struct Book book[5];

  struct Book *book_ptr = book;

  input_book(book_ptr,2);
  print_book(book_ptr,2);

  return 0;
}