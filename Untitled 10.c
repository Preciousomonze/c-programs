#include <stdio.h>
#include <string.h>
/*Program to use string characters with get() function part 2*/
int main(){
	
	char a[] = "\n Hello how are you";
	//str[0]= "H";
	printf("%s",a);
	printf("\n\n Please enter your name: ");
	char b[]=" ";
	gets(b);
	printf("\n Please enter age: ");
	char c[] = " ";
	gets(c);
	printf("\n Please enter State: ");
	char d[]=" ";
	gets(d);
	
	printf("\n Hello %s",b);
	printf("\n You are %s ",c);
	printf("Years Old");
	printf("\n You are from %s",d);
	
	return 0;
}


