/************************

引用调用2  
-取地址  指针 

************************/
#include <stdio.h>
void increment(int*, int*);
int main()
{
	int num1,num2;
	printf("\n 请输入两个数: ");
	scanf(" %d %d",&num1,&num2);
	printf("\n 递增前的值是 %d 和 %d\n",num1,num2);
	increment(&num1,&num2);
	printf("\n 递增后的值是 %d 和 %d\n", num1, num2);
}
void increment(int *ptr1, int *ptr2)
{
	(*ptr1)++;
	(*ptr2)++;
	printf("\n 子函数中值 %d 和 %d\n", *ptr1, *ptr2);
}


/*
输出的结果是：

 请输入两个数: 100 200

 递增前的值是 100 和 200

 子函数中值 101 和 201

 递增后的值是 101 和 201




*/