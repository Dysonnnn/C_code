/*
	Name:
	Copyright:
	Author:
	Date: 04.09.18 16:37
	Description: �ַ����򵥵�������� string scanf printf
*/
#include<stdio.h>
int main()
{
  char name[30];

	//do not input space
	printf("please input string(do not input space)\n\n");
  scanf("%s",name);
  printf("the string you input is %s\n",name);

  return 0;
}

