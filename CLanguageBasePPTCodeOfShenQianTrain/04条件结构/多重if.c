/**********

多重if用法

*********/

#include <stdio.h>
int main()
{
	char c;
	printf("\n 请输入一个字符: ");
	c=getchar();
	if(c<32)
		printf("\n 该字符是一个控制字符。\n");
	else if(c>='0'&&c<='9')
		printf("\n 该字符是一个数字。\n");
	else if(c>='A'&&c<='Z')
		printf("\n 该字符是一个大写字母。\n");
	else if(c>='a'&&c<='z')
		printf("\n 该字符是一个小写字母。\n");
	else
		printf("\n 该字符是其他字符。\n");
	return 0;
}	