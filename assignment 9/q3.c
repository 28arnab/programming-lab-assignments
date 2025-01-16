/*Create a structure named Book to store book details like title, author, and
price. Write a C program to input details for three books, find the most
expensive and the lowest priced books, and display their information.*/

#include <stdio.h>

int main() {
  struct Book {
    char title[21], author[21];
    unsigned int price;
  } book_1, book_2, book_3;

  printf("Book 1\n");
  printf("Title: ");
  scanf("%20s", book_1.title);
  printf("Author: ");
  scanf("%20s", book_1.author);
  printf("Price: ");
  scanf("%u", &book_1.price);

  printf("Book 2\n");
  printf("Title: ");
  scanf("%20s", book_2.title);
  printf("Author: ");
  scanf("%20s", book_2.author);
  printf("Price: ");
  scanf("%u", &book_2.price);

  printf("Book 3\n");
  printf("Title: ");
  scanf("%20s", book_3.title);
  printf("Author: ");
  scanf("%20s", book_3.author);
  printf("Price: ");
  scanf("%u", &book_3.price);

  struct Book highest = book_1;
  struct Book lowest = book_1;

  if (book_2.price > highest.price) {
    highest = book_2;
  }
  if (book_2.price < lowest.price) {
    lowest = book_2;
  }

  if (book_3.price > highest.price) {
    highest = book_3;
  }
  if (book_3.price < lowest.price) {
    lowest = book_3;
  }

  printf("\nHighest:\n Title: %s \n Author: %s \n Price: %u \n", highest.title,
         highest.author, highest.price);
  printf("Lowest:\n Title: %s \n Author: %s \n Price: %u \n", lowest.title,
         lowest.author, lowest.price);

  return 0;
}
