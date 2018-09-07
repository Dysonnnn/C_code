#include<stdio.h>
int main()
{


	
//比较两个指针

int *ptrnum1, *ptrnum2;
	int value = 1;
	ptrnum1 = &value;
	value += 10;
	ptrnum2 = &value;
	if (ptrnum1 == ptrnum2)
		printf("\n 两个指针指向同一个地址\n");    //这是输出结果
	else
		printf("\n 两个指针指向不同的地址\n");


	return 0;
}