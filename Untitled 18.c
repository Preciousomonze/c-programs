#include <stdio.h>
/*PROGRAM USING AN ARRAY*/
 main(){

int balance[7] = {2000,500,50,1500,20,10,2};
//DECLARING THE VARIABLE "BALANCE" AS AN ARRAY THAT CAN HOLD A MAXIMUM OF 7 VALUES
//EACH VALUE IS SEPERATED WITH A COMMA

/////////////////////////////////////////////////////////
int a;//THE PURPOSE OF THE FOR LOOP
for(a=0; a < 7; a++ ){

printf("\nThe value of index[%d] is %d",a,balance[a]);

}
/////////////////////////////////////////////////////
/*
//INITIAL PROGRAM OF THE CLASS
printf(" The value of index[0] is %d",balance[0]);
printf("\n The value of index[1] is %d",balance[1]);
printf("\n The value of index[2] is %d",balance[2]);
printf("\n The value of index[3] is %d",balance[3]);
printf("\n The value of index[4] is %d",balance[4]);
printf("\n The value of index[5] is %d",balance[5]);
printf("\n The value of index[6] is %d",balance[6]);
*/


getchar();
}

