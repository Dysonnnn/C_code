/*
	Name:
	Copyright:
	Author:
	Date:
	Description: string 字符串示例
	在循环执行时，扫描整个数组以统计出空格 ‘ ‘ 的数量，直到遇到字符 ’\0’。每次循环执行时，都会更新计数器 i 和 count。

*/
#include<stdio.h>
int main()
{
  char line[30];
  int i, count = 0;

  printf("\n please input a line of character \n");
  gets(line);
  i = 0;
  while(line[i] != '\0')
  {
  	if (line[i] == ' ')
		{
			count++;
		}
		i++;
	}

	printf("\n the number of space you input in string is: %d \n",count);

	return 0;
}

