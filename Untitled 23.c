#include <stdio.h>
#include <string.h>
/*Program to use strings and some of its functions*/

int main(){
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	
	strcpy(str3,str1);//COPY THE CONTENT OR VALUE OF str1 TO str3
	printf("strcpy(str3,str1) : %s",str3);
	
	return 0;
}
