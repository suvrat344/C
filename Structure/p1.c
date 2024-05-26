// Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.

#include <stdio.h>

struct Book{
  char title[50];
  char author[50];
  float price;
};

int main(){
  // Direct Initialization
  struct Book b1 = {"Let Us C","Yashwant Kanetkar",350};

  // Details Of Book
  printf("Title of Book is %s\n",b1.title);
  printf("Author of Book is %s\n",b1.author);
  printf("Price of Book is %.2f",b1.price);

  return 0;
}