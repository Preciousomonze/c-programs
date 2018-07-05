#include<stdio.h>
#include<string.h>
 main()
{
	//char a[20]= "This is crazy";
	//int numb[3]= {20,20,25};
	
	printf("Welcome to this program");
	printf("\n Please enter a number");
	
	int num;
	scanf("%d",&num);
	
	printf("Please enter another number:");
	
	int secNum;
	scanf("%d",&secNum);//gets(secnum);
	
	printf("Please enter your name\n");
	
	char name[]=" ";//char 2name;
	
	scanf("%s",&name);
	
	printf("%d,%d,%s",num, secNum,name);
	

}
