/*
do-while循环输入数字   ，输入n退出输入模式
*/
#include<stdio.h>
int main()
{
   int i,num;
   char answer;
   do
   {
		printf("请输入一个数：");
		scanf("%d",&num);
		printf("\n");
		for (i = 1; i <= 10; i++)
		{
			printf("=");
		}
		printf("\n 该数是 %d",num);
		printf("\n\n 您是否还要输入其他的数(y/n)？");
		fflush(stdin);        //这是啥
		answer = getchar();
	} while (answer != 'n');
}

