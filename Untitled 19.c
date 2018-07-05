#include <stdio.h>
/*PROGRAM TO USE AN ARRAY WITH A FOR LOOP, ADVANCED OF THE COMMENTED PRINTF PART IN UNTITLED 18.c*/
main(){
	
	int a[7] = {1000,2,3,8,9,15,1};
	
	int r;
	for(r=0; r < 7; r++){
		printf("\nThe value of index[%i] is %i",r,a[r]);
	}
	
	getchar();
}
