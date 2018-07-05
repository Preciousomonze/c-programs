#include <stdio.h>
#include <string.h>
/*PROGRAM TO USE STRUCT*/



struct books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(){
	struct books book1; //Declare book1 of type book	
	
	struct books book2;//Declare book2 to type book
	
	//book 1 specification
	
	strcpy(book1.title,"C programming");
	
	strcpy(book1.author,"Precious");
	
	strcpy(book1.subject,"C programming Tutorial");
	
	book1.book_id = 6495408;
	
	/*book 2 specification*/
	
	strcpy(book2.title,"Telecom Billing");
	strcpy(book2.author,"Kingsley");
	strcpy(book2.subject,"Html");
	
	book2.book_id = 6495700;
	
	/*print book 1 into */
	
	printf("Book1 title is : %s\n",book1.title);
	
	printf("Book1 author is : %s\n",book1.author);
	
	printf("Book1 subject is : %s\n",book1.subject);
	
	printf("Book1 book_id is : %d\n",book1.book_id);
	
	
	/*print book 2 into */
	
	printf("Book2 title is : %s\n",book2.title);
	
	printf("Book2 author is : %s\n",book2.author);
	
	printf("Book2 subject is : %s\n",book2.subject);
	
	printf("Book2 book_id is : %d\n",book2.book_id);
	
	
	
	return 0;
}


