/***************************
作者：dyson
日期：20180901
内容：输出函数输出的内容

***************************/
#include <stdio.h>
int main()
{
	unsigned int uint = 100;
	int int_test=10;
	long int longInt_test = 9999999;
	float float_test=654321.123456;
	double double_test=12.123456789;
	char char_test='a';
	char char_test_s[20] ="test 字符串";


	printf("%%d 将参数按整数形式转换输出，对应参数应是int 类型  %d",int_test);

	printf("\n\n");  //换行

	printf("%%ld 将参数按长整数形式转换输出，对应参数应是long 类型 %ld",longInt_test);

	printf("\n\n");  //换行
	
	printf("%%c 输出一个字符，对应参数应该是一个字符%c",char_test);


	printf("\n\n");  //换行

	printf("%%s 输出一个字符串，对应参数应该是一个字符串 %s",char_test_s);

	printf("\n\n");  //换行

	printf("按带小数点数形式输出单、双精度数，默认情况下%%f 精确到 6 位小数  %f  %f",float_test,double_test);

	printf("\n\n");  //换行

	printf("%%u 以无符号十进制形式输出整数 %u",uint);

	printf("%%o八进制无符号（不输出前导符0），十六进制无符号（%%x小写输出”a…f”，%%X大写输出”A…F”）");
	
	printf("\n\n");  //换行


	printf("%%nd   -->  输出一个占用十个位的数字，不足的在前面补空格%10d" ,  int_test);

	printf("\n\n");  //换行


	printf("%%n.mf   -->  输出一个占用n个位的数字(包括小数点)，小数点后精确到m位，例如 n=8,m=2   %8.2f" ,  float_test);

	printf("\n\n");  //换行

	printf("\n\n");  //换行	
	return 0;
}

/*
1)类型：类型字符用以表示输出数据的类型，其格式符和意义如下表所示： 
d 以十进制形式输出带符号整数(正数不输出符号) 
o 以八进制形式输出无符号整数(不输出前缀 0) 
x,X 以十六进制形式输出无符号整数(不输出前缀 Ox) 
u 以十进制形式输出无符号整数 
f 以小数形式输出单、双精度实数 
e,E 以指数形式输出单、双精度实数 
g,G 以%f 或%e 中较短的输出宽度输出单、双精度实数 
c 输出单个字符 
s 输出字符串 

https://www.cnblogs.com/mls-ztx/p/5300763.html

*/