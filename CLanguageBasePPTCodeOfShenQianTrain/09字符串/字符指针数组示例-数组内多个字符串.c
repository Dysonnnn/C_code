/*
*name : 指向字符串的指针--指针数组内多个字符串
*function :  交换两个字符指针
*
*
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *name[] = { "Gogo", "Tony", "Tina", "Jenny"};
	char *temp;

	printf("\n old: name1 = %s  name2 = %s \n", name[1], name[2] );

	//交换两个名字
	temp = name[1];
	name[1] = name[2];
	name[2] = temp;

	printf("\n New: name1 = %s  name2 = %s \n", name[1], name[2]);
	printf("\n-------------------------------\n");

	return 0;
}