#include <stdio.h>
#include <string.h>
/*PROGRAM TO BE MADE AS A CALCULATOR ADVANCED VERSION OF THE Untitled 13 C Program :) */
int main(){
	
	float firstNum,secondNum;//DECLARE VARIABLE TO HOLD THE INPUTS
	
	char sign;//VARIABLE TO HOLD THE SIGNS
	
	printf("Welcome to this program\n\n Please Calculate the two numbers you want: ");
	
	scanf("%f %s %f",&firstNum,&sign,&secondNum);
	
	
	char statement[] = "The answer is:";//STORE A STATEMENT TO AVOID WASTE OF 
	
	//CHECK FOR CONDITIONS IF YOUR'E TO ADD, SUBTRACT ,MULTIPLY OR DIVIDE
	
	if(sign == '+'){//THE user put in the + SIGN,SO ADD UP
			printf("%s %5.0f",statement,firstNum+secondNum);
	}
	
	else if(sign == '-'){//ITS A MINUS SIGN,SO SUBTRACT
			printf("%s %5.0f",statement,firstNum-secondNum);
	}
	else if(sign == '*'){//ITS A MULTIPLAICATION SIGN,MULTIPLY
	printf("%s %5.0f",statement,firstNum*secondNum);
	}
	
	else if(sign == '/'){//ITS A DIVISION SIGN DIVIDE
		printf("%s %5.0f",statement,firstNum/secondNum);
	
	}
	
	else{//ITS SOMETHING ELSE
		printf("You put in an invalid sign,try again.");
	
	}

	return 0;
}



