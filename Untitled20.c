#include <stdio.h>
/*PROGRAM TO USE A 2 DIMENSIONAL ARRAY*/
main(){
	// AN ARRAY WITH 5 ROWS AND 2 COLUMNS
	int a[5][4]={{0,45},{1,2},{2,4},{3,6},{4,8}};
	
	int i,j;
	/*
	for(i=0,j=0; (i < 5) && (j < 2);i++,j++){
		
		printf("\n a[%d][%d] is = %d",i,j,a[i][j]);
	}*/
	
	for(i=0; i < 5; i++){
		for(j=0; j < 4; j++){
		
		printf("\n a[%d][%d] is = %d",i,j,a[i][j]);
		
		}
	}
	
getchar();	
}
