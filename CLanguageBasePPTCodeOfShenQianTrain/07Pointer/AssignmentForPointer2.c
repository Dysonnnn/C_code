#include<stdio.h>
int main()
{
     int num1 = 50, num2 = 100;
     int *ptr1, *ptr2;
     ptr1 = &num1;
     printf(" num1 ��ֵ�ǣ� %d", *ptr1);
     printf("\n num1 �ĵ�ַ�ǣ� %x \n", ptr1);
     ptr2 = &num2;
     printf("\n num2 ��ֵ�ǣ� %d", *ptr2);
     printf("\n num2 �ĵ�ַ�ǣ� %x \n", ptr2);
    *ptr2 = *ptr1;
     printf("\n ���¸�ֵ�� num2 ��ֵ�ǣ� %d", *ptr2);
     printf("\n ���¸�ֵ�� num2 �ĵ�ַ�ǣ� %x\n", ptr2);
/*

 num1 ��ֵ�ǣ� 50
 num1 �ĵ�ַ�ǣ� 62fe3c

 num2 ��ֵ�ǣ� 100
 num2 �ĵ�ַ�ǣ� 62fe38

 ���¸�ֵ�� num2 ��ֵ�ǣ� 50
 ���¸�ֵ�� num2 �ĵ�ַ�ǣ� 62fe38
 
 */

	return 0;
}