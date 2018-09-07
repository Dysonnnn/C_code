#include <stdio.h>
int main()
{
	char char_1,char_2;
	printf("请输入两个个字符,用空格隔开\n");

	char_1 = getchar();  
	setbuf(stdin, NULL);	   //清空输入缓冲区
	
	char_2 = getchar();
	setbuf(stdin, NULL);	   //清空输入缓冲区

	printf("输出之前输入的字符：\n");

	putchar(char_1);
	putchar(char_2);

	putchar('\n');


	return 0;
}