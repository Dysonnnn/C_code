/*
计算输入的字符数
*/

#include<stdio.h>
int main()
{
	int count=0,ch;
	printf("请输入一行字符(不要用空格隔开)，将输出你输入的字符数\n");
	while((ch=getchar())!='\n')
	{
		if(ch==' ')
			break;
		else
			count++;
	}
	printf("你输入了 %d个有效字符\n",count);
	return 0;
}
