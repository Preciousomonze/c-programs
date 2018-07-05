#include <stdio.h>
#include <string.h>
/*PROGRAM TO BE MADE AS A CALCULATOR, Different VERSION OF THE Untitled 13 C Program :) */
int main(){
	
	int num1,num2,result,option;//DECLARE ALL VARIABLES AT A GO,
	//NUM1 TO STORE THE FIRST NUMBER
	//NUM2 TO STORE THE SECOND NUMBER
	//RESULT TO STORE THE CALCULATION OF NUM1 AND NUM2
	//OPTION TO STORE THE OPTIONS PROVIDED
	
	printf("Enter any two numbers:\t");
	
	scanf("%d %d",&num1,&num2);
	
	printf("Choose an option below:\n 1:add\n2:subtract\n3:multiply\n4:divide\t");
	scanf("%d",&option);
	
	switch(option){
		case 1:
			result=num1+num2;
			printf("%d",result);
			break;
			
		case 2:
			result=num1-num2;
			printf("%d",result);
			break;
			
		case 3:
			result=num1*num2;
			printf("%d",result);
			break;	
			
		case 4:
			result=num1+num2;
			printf("%d",result);
			break;
			
		default:
			printf("An error Occured");
					
	}
	
	return 0;
}
