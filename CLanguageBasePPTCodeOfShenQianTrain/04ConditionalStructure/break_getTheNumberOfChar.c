/*
����������ַ���
*/

#include<stdio.h>
int main()
{
	int count=0,ch;
	printf("������һ���ַ�(��Ҫ�ÿո����)���������������ַ���\n");
	while((ch=getchar())!='\n')
	{
		if(ch==' ')
			break;
		else
			count++;
	}
	printf("�������� %d����Ч�ַ�\n",count);
	return 0;
}
