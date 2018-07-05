#include <stdio.h>
#include <string.h>
/*Program to use string characters*/
int main(){
	
	char a[] = "\n Hello how are you";
	//str[0]= "H";
	printf("%s",a);
	printf("\n\n Please enter your name: ");
	char b[]=" ";
	scanf("%s",&b);
	printf("\n Please enter age: ");
	char c[] = " ";
	scanf("%s",&c);
	printf("\n Please enter State: ");
	char d[]=" ";
	scanf("%s",&d);
	
	printf("\n Hello %s",b);
	printf("\n You are %s ",c);
	printf("Years Old");
	printf("\n You are from %s",d);
	
	return 0;
}


