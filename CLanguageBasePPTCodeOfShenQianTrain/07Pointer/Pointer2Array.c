#include<stdio.h>
int main()
{


//指向数组的指针



int a[5]={1,2,3,4,5};
int i,*pa ;
//pa = a;   //a被隐式转换为指针；
pa = &a[0];
 for(i=0;i<5;i++)
 {
	printf("*pa = %d\n",*pa);
	pa ++;
 }
 
/*
输出结果
*pa = 1
*pa = 2
*pa = 3
*pa = 4
*pa = 5

*/
	return 0;
}