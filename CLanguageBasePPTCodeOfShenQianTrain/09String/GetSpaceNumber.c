/*
	Name:
	Copyright:
	Author:
	Date:
	Description: string �ַ���ʾ��
	��ѭ��ִ��ʱ��ɨ������������ͳ�Ƴ��ո� �� �� ��������ֱ�������ַ� ��\0����ÿ��ѭ��ִ��ʱ��������¼����� i �� count��

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

