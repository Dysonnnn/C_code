/**************************************
	
	为一维数组动态赋值

**************************************/
#include<stdio.h>
int main()
{

	
	int i=0;
	float price[10];
	printf("Enter prices of 10 books\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&price[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("The price of NO.%d BOOK is %f\n",i,price[i]);
	}

	return 0;
}