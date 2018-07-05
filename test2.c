#include <stdio.h>
/*TEST2*/

main(){
	float Henry[3] = {10.8,12.9,15.7};
	
	int i;
	for(i=0;i<3;i++){
		printf("\nHenry[%d] is = %3.1f ", i,Henry[i]);
	}
	
	getchar();
}
