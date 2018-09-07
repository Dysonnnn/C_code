/*
*name : 字符串作为函数参数
*function :  字符串作为函数参数-自定义字符拷贝-字符长度计算函数
*
*
*/
#include<stdio.h>

//声明函数
void myStrCpy();
int myStrLen();

int main(int argc, char const *argv[])
{
	char aArr[30] = "123456";
	char bArr[30] = "000000";
	int arrCount = 0;

	printf("old bArr = %s \n",bArr );
	printf("aArr = %s \n",aArr );
	
	printf("\n-------COPY aArr TO bArr-------------------\n");
	//复制aArr到bArr
	myStrCpy(bArr,aArr);
	printf("new bArr = %s \n",bArr );
	
	//计算字符串长度
	arrCount = myStrLen(aArr);
	printf("the number of aArr is %d \n", arrCount);

	printf("-------------------------------\n");
	return 0;
}

//复制 sourceStr数组到 destStr
void myStrCpy(char destStr[],char sourceStr[])
{
	int i = 0;

	//复制字符型数组
	while (sourceStr[i] != '\0')
	{
		destStr[i] = sourceStr[i];
		i++;
	}
	destStr[i] = 0; //最后一位是 '\0'
}

//计算字符串长度
int myStrLen(char *str)
{
	int count =  0;
	while (*str != '\0' )
	{
		++count;
		++str;
	}
	return count;
}