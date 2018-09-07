/************************

传值调用 2

************************/
#include <stdio.h>
void increment(int,int);
int main()
{
	int num1,num2;
	printf("\n 请输入两个数: ");
	scanf(" %d %d",&num1,&num2);
	printf("\n 递增前的值是 %d 和 %d\n", num1, num2);
	increment(num1,num2);
	printf("\n 递增后的值是 %d 和 %d\n", num1, num2);
}
void increment(int val1,int val2)
{
	val1++;
	val2++;
	printf("\n 子函数中值 %d 和 %d\n", val1, val2);
}

/*   输出的结果是：


 请输入两个数: 65 85

 递增前的值是 65 和 85

 子函数中值 66 和 86

 递增后的值是 65 和 85


改变函数内的值，不改变原来变量的值

*/