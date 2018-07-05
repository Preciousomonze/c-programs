#include <stdio.h>
/*PROGRAM FOR TESTING OUT THE SWITCH STATEMENT*/
int main(){
	char grade= 'a';	
	
	  
	
	switch(grade){
		case 'a':
			printf("Excellent\n");
			break;
			
			//SECOND CASE
			case 'b':
				printf("Weldone\n");
				break;
				
				//Third case
				case 'd':
					printf("You Passed\n");
					break;
					//Fourth case
					case 'f':
						printf("Try Again\n");
					break;
					
					//Default statement
					default:
						printf("Invalid grade\n");
		
	}
	
	printf("Your grade is %c",grade);
	return 0;
}


