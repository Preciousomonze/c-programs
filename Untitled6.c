#include <stdio.h>
/*PROGRAM TO CALCULATE AREA OF A TRIANGLE*/
int main(){
	float b;//base
	float h;//height
	
	printf("Please enter the base\n");
	scanf("%f", &b);
	
	printf("Please enter the height\n");
	scanf("%f", &h);
	
	float ans=0.5*b*h;
	
	printf("The area of the triangle is %5.2f",ans);
	
	return 0;
}
