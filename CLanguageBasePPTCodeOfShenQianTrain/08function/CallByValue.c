/************************

传值调用

************************/
#include <stdio.h>
//定义函数func
void ChangeA(int  a)
{
   a = 10; //让参数a等于10
}

int main()
{
	//void func();
   int a = 0; //初始化a值为0

    ChangeA(a); //调用函数func
   printf("输出的a的值是%d  \n",a); //输出a的结果
}



//输出的还是0   ，a的值没有改变