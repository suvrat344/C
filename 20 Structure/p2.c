// Initialize an array of Book structures with different data for each book using designated initializers

#include <stdio.h>

struct Book{
  char title[50];
  char author[50];
  float price;
};


int main(){
  // Designated Initialization
  struct Book b1 = {.title="Let Us C++",.author="Yashwant Kanetkar",.price=380};


  // Details Of Book
  printf("Title of Book is %s\n",b1.title);
  printf("Author of Book is %s\n",b1.author);
  printf("Price of Book is %.2f",b1.price);

  return 0;
}