#include <stdio.h>
/*PROGRAM TO CALCULATE THE AREA OF A TRIANGLE*/
int main(){
	
	float h; //height
	
	float b;//base
	
	printf("Welcome to the program\n\n Please enter the base of the triangle\n");
	
	scanf("%f",&b);//require input of the base
	
	printf("Enter the height of the triangle\n");
	
	scanf("%f",&h);//require input of the height
	
	//CHECK IF THE HEIGHT IS > THE BASE
	if(h > b){//THE HEIGHT IS GREATER 
	
	float ans = 0.5*b*h;//Calculating the area of the triangle
	/*
	Note: 0.5 is the same as 1/2,to avoid stress
	*/
	
	printf("The answer is : %5.2f",ans);
	
	}
	
	else{//THE BASE IS GREATER
		float product = b*h;
		float sum = b+h;
		
		printf("The product of the two numbers is :\n%5.2f\n",product);
		printf("While the sum is: %5.2f",sum);
	}
	
	
	return 0;
}
