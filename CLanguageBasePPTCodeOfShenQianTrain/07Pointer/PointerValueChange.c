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
		printf("\n �� %d ��Ԫ�صĴ洢��ַΪ��%x,ֵΪ�� %d\n",i+1, ptr, *ptr);
		i++;
		ptr++;
	}

/**
the size of data is 20

 �� 1 ��Ԫ�صĴ洢��ַΪ��62fe20,ֵΪ�� 5

 �� 2 ��Ԫ�صĴ洢��ַΪ��62fe24,ֵΪ�� 10

 �� 3 ��Ԫ�صĴ洢��ַΪ��62fe28,ֵΪ�� 15

 �� 4 ��Ԫ�صĴ洢��ַΪ��62fe2c,ֵΪ�� 20

 �� 5 ��Ԫ�صĴ洢��ַΪ��62fe30,ֵΪ�� 25
**/


	return 0;
}