/************************

函数递归调用 

此函数用于计算 a 的阶乘 

************************/
#include <stdio.h>
///#include <stdint>  //int_64t

int main(int argc, char const *argv[])
{
	/*
	//输入数字，求该数字的阶乘
	int test,i;
	long int result;
	printf("\n输入一个数字，输出该数字的阶乘结果\n");	
	scanf("%d",&test);
	result = factorial(test);
	printf("\n%d 阶乘结果是%ld\n",test,result);
	*/
	int factorial();
	int test,i;
	long int result;
	//int_64t  result;
	printf("\n输出从1到20阶乘的结果：\n");
	for(i= 1;i<=20;i++)
	{
		result = factorial(i);
		printf("\n%d 阶乘结果是%ld\n",i,result);
	} 
	
	/*********long int 最多算到 15的阶乘*********/

	return 0;
}

 int factorial(long int a) 
//int factorial(int_64t a) 
{
	if(a == 0)
	{
		a=1;
		printf("\n!!!!!!!阶乘的数字不能为0!!!!!!!\n");
	}
     if (a == 1)
        return 1;
     else
     {
         a = a * factorial(a-1);
         return a;
     }
}











