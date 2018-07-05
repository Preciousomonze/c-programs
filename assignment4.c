#include <stdio.h>
/*ASSIGNMENT PROGRAM TO MULTIPLY NUMBERS IF THE FIRST NUMBER IS GREATER THAN 15,ELSE ADD UP THE 2 NUMBERS */
main(){
	
//DECLARE A VARIABLE TO HOLD THE VALUES OF the input
float firstNum,secondNum;	
	
printf("Welcome to this Program, \n\nPlease Enter The First Number:");
scanf("%f",&firstNum);//ALLOW FOR INPUT
//CHECK IF THE NUMBER IS LESS THAN  OR EQUAL TO 10

while(firstNum <= 10)
{//KEEP PRINTING IN A NEW LINE

	printf("the number is %f\n\n",firstNum);

//	if(firstNum == 30)
//	{
//		break;
//	}
	firstNum++;
}

if(firstNum <= 15)
{//THE NUMBER IS LESS TAHN 15, ADD UP
	printf("\nEnter a second Number: ");
	scanf("%f",&secondNum);//ALLOW FOR INPUT
	float ans = firstNum + secondNum;//add up the first and second number
	printf("\nThe sum of the 2 numbers are: %5.2f",ans);
}

else{//The Number the number the user put in is greater than 15

	printf("\nEnter a second Number: ");
	scanf("%f",&secondNum);//Alow for Input
	float ans = firstNum * secondNum;//Multiply the first and second number
	printf("\nThe Product of the 2 numbers are: %5.2f",ans);
}
	

} 


