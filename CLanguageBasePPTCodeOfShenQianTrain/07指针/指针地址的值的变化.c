#include<stdio.h>
int main()
{

int data[] = {5, 10, 15, 20, 25};
	int i = 0;
	int *ptr;
	ptr = data;
	printf("the size of data is %d\n",sizeof(data));
	while(i < 5)
	{
		printf("\n 第 %d 个元素的存储地址为：%x,值为： %d\n",i+1, ptr, *ptr);
		i++;
		ptr++;
	}

/**
the size of data is 20

 第 1 个元素的存储地址为：62fe20,值为： 5

 第 2 个元素的存储地址为：62fe24,值为： 10

 第 3 个元素的存储地址为：62fe28,值为： 15

 第 4 个元素的存储地址为：62fe2c,值为： 20

 第 5 个元素的存储地址为：62fe30,值为： 25
**/


	return 0;
}