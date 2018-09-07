/************************

静态局部变量示例

************************/
#include <stdio.h>

void format() 
{
	static int m = 0; 
	m++;
	if (m % 10 == 0)
		putchar('\n'); 
	else
		putchar(' '); 
}

int main(int argc, char const *argv[])
{
	
	int i;
	for(i=0;i<50;i++)
	{
		printf("%d",i);
		format();
	}

	return 0;
}