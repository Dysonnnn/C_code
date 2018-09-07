#include<stdio.h>
int main()
	{
	int i;
	int a[5]={0},*pa;
	pa = &a;
	printf("the size of *p is %d\n",sizeof(*pa));
	printf("please input 5 number\n");

	for (i = 0;i <5 ; i++)
		scanf("%d",&a[i]);
		
	for (i = 0;i <5 ; i++)
	{
		printf("a[%d] = %d \n",i,a[i]);
		
		printf("pa[%d] = %d \n",i,*pa);
		printf("the meney of pa is %x\n",pa);
		pa ++;
	}

/*
输出结果：
the size of *p is 4   //所以+1 之后的地址是隔开4位

please input 5 number
9 5 1 7 4
a[0] = 9
pa[0] = 9
the meney of pa is 62fe20
a[1] = 5
pa[1] = 5
the meney of pa is 62fe24
a[2] = 1
pa[2] = 1
the meney of pa is 62fe28
a[3] = 7
pa[3] = 7
the meney of pa is 62fe2c
a[4] = 4
pa[4] = 4
the meney of pa is 62fe30

*/
	return 0;
}