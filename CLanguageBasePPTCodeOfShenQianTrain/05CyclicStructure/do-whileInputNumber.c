/*
do-whileѭ����������   ������n�˳�����ģʽ
*/
#include<stdio.h>
int main()
{
   int i,num;
   char answer;
   do
   {
		printf("������һ������");
		scanf("%d",&num);
		printf("\n");
		for (i = 1; i <= 10; i++)
		{
			printf("=");
		}
		printf("\n ������ %d",num);
		printf("\n\n ���Ƿ�Ҫ������������(y/n)��");
		fflush(stdin);        //����ɶ
		answer = getchar();
	} while (answer != 'n');
}

