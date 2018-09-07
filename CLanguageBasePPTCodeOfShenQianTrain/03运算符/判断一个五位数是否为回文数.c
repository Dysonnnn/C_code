/********

判断一个五位数是否是 回文数

*******/
#include <stdio.h>
int main()
{
	long ge,shi,qian,wan,x;
	printf("\n 请输入一个五位整数：");
	scanf("%ld",&x);
	wan=x/10000; //分解出万位数
	qian=x%10000/1000; //分解出千位数
	shi=x%100/10;  //分解出十位数
	ge=x%10; //分解出个位数
	if (ge==wan && shi==qian) /*个位等于万位并且十位等于千位*/
		printf("\n 这个数是回文数\n");
	else
		printf("\n 这个数不是回文数\n");
}
