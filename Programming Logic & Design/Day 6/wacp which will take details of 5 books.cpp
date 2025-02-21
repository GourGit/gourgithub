#include<stdio.h>

struct book{
	char book_name[50];
	char author_name[50];
	int ISBN_No;
	int price;
};

int main(){
	struct book books[5];
	for(int i=0;i<=4;i++){
		printf("Enter book details: \n");
		printf("**********************\n");
		//take details of the books
		printf("Enter name of the book: ");
		gets(books[i].book_name);
		printf("Enter name of the Author: ");
		gets(books[i].author_name);
		printf("Enter the ISBN number: ");
		scanf("%d",&books[i].ISBN_No);
		printf("Enter price of thr book: ");
		scanf("%d",books[i].price);
	}
		
		printf("Print Details: ");
		for(int i=0;i<=4;i++){
			printf("Book Name: %s\n",books[i].book_name);
			printf("Author Name: %s\n",books[i].author_name);
			printf("ISBN: %d\n",books[i].ISBN_No);
			printf("Price: %d\n",books[i].price);
			printf("\n");
		}
	return 0;
}