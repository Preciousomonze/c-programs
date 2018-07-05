#include <stdio.h>
/*PROGRAM TO ADD UP STUFF IF A CONDITION IS TRUE*/
int main(){
	int a=1;
	
	int b=3;
	
	int c=7;
	
	if(a > c){
		
		int ans = a+b+c;
		printf("The answer is:%d",ans);
	}
	
	else{
		printf("The operation was not successful.");
		}
	
	return 0;
}
