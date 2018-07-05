#include <stdio.h>
#include <string.h>

int main(){
	
	char str1[10] = "Class ";
	char str2[16] = "Student";
	
	strcat(str1,str2);
	
	printf("%s",str1);
	
	return 0;
}
