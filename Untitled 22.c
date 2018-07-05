#include <stdio.h>
/*PROGRAM TO USE A POINTER*/

main(){

	int var = 20; //ACTUAL VARIABLE DECLERATION
	
	int *ip; // POINTER VARIABLE DECLARATION
	
	ip = &var; //STORE ADDRESS OF VAR IN A POINTER
	
	printf("Address of var variable : %x \n",&var); 	
	
	printf("Address sto\nred\n in ip variable : %x\n",ip);

	printf("Value of *ip variable: %d\n",*ip);

	int x=7+3*2;
	printf("%d",x);

getchar();

}
