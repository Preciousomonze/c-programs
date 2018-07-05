#include <stdio.h>
/*PROGRAM TO USE AN ARRAY*/
int main(){
	int num[5];//DECLARING AN ARRAY TO HOLD 5 VALUES . I.E FROM 0 - 5
	
	int i;
	
	num[0] = 10;
	num[1] = 70;
	num[2] = 60;
	num[3] = 40;
	num[4] = 50;
	
	for(i=0; i<5; i++)
	printf("\n Number at [%d] is %d",i,num[i]);
	return 0;
}
