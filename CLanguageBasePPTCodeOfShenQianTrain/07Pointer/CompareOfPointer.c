#include<stdio.h>
int main()
{


	
//�Ƚ�����ָ��

int *ptrnum1, *ptrnum2;
	int value = 1;
	ptrnum1 = &value;
	value += 10;
	ptrnum2 = &value;
	if (ptrnum1 == ptrnum2)
		printf("\n ����ָ��ָ��ͬһ����ַ\n");    //����������
	else
		printf("\n ����ָ��ָ��ͬ�ĵ�ַ\n");


	return 0;
}