#include <stdio.h>
/*PROGRAM TO FIND THE RECTANGLE USING SCANF*/
 main(){
	float l;//LENGTH
	float b;//BREADTH
	
	printf("Please enter length \n");
	scanf("%f",&l);
	printf("Please enter breadth \n");
	scanf("%f",&b);
	float c=l*b;//THE AREA
	
	printf("The area of the rectangle is \n\n %5.2f",c);
	return 0;
}
