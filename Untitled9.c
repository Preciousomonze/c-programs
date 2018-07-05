#include <stdio.h>
/*PROGRAM TO USE THE get() FUNCTION*/
int main(){
	char a[] = "\n Hello how are you?\n";
	printf("%s",a);
	printf("Please enter your name:\n");
	
	char b[20];
	
	gets(b);
		printf("Your name is %s",b);
	
	return 0;
}



