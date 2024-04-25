#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};
void printBook (struct Books book);
int main(int argc, char *argv[]) {
	struct Books Book1;
	struct Books Book2;
	strcpy(Book1.title,"C Programming");
	strcpy(Book1.author,"Nuha Ali");
	strcpy(Book1.subject,"C Programming Tutorial");
	Book1.book_id=6495407;
	strcpy(Book2.title,"Telecom Billing");
	strcpy(Book2.author,"Zara Ali");
	strcpy(Book2.subject,"Telecom Billing Tutorial");
	Book2.book_id=6495700;
    printBook(Book1);
    
    printBook(Book2);
	return 0;
}
void printBook(struct Books book){
	printf("Book 1 title: %s\n",book.title);
	printf("Book 1 author: %s\n",book.author);
	printf("Book 1 subject: %s\n",book.subject);
	printf("Book 1 book id: %d\n",book.book_id);
}
