/*
	Name:
	Copyright:
	Author:
	Date:
	Description: 字符串简单的输入输出 string gets puts
*/
#include<stdio.h>
int main()
{
	char name_string[30];
	
  printf("please input string(you can input space)\n\n");
  gets(name_string); //you can input space
  puts("the string you input is: ");
  puts(name_string);

 return 0;
}

/*
please input string(you can input space)

test
the string you input is:
test


*/
