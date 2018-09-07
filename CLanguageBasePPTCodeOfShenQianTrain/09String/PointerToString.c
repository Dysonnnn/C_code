/*
*name : 指向字符串的指针
*function : 测试字符串指针
*	--改变指针指向的位置
*	--计算数组内的字符数,或者特定字符出现的次数
*
*
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
	char *ps = "test string 1234567890";
	char *pCount;
	char countNumber[30] = "123456789AAAsss";
	int locationOfNumber = 12; //数字字符的位置
	int numCount = 0;//数字出现的次数
	int engCount = 0; //英文字母出现的次数

	printf("Source string is:\n  %s \n\n",ps );
	//改变了指针的位置
	ps = ps +locationOfNumber;
	printf("New string is:\n %s \n",ps );

	for(pCount = countNumber; *pCount != '\0'; pCount++)
	{
		//计算数字出现的次数
		if (*pCount >= '0' &&  *pCount <= '9')
			{
				numCount ++;
			}

		//计算英文字母出现的次数	
		if (*pCount >= 'A' && *pCount <= 'z')
		{
			engCount ++;
		}
	}

	printf("\n数字1出现的次数是: %d \n", numCount);
	printf("\n英文字母出现的次数是: %d \n",engCount);
	printf("\n-------------------------------\n");

	return 0;
}