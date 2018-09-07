#include<stdio.h>
int main()
{
     int num1 = 50, num2 = 100;
     int *ptr1, *ptr2;
     ptr1 = &num1;
     printf(" num1 的值是： %d", *ptr1);
     printf("\n num1 的地址是： %x \n", ptr1);
     ptr2 = &num2;
     printf("\n num2 的值是： %d", *ptr2);
     printf("\n num2 的地址是： %x \n", ptr2);
    *ptr2 = *ptr1;
     printf("\n 重新赋值后 num2 的值是： %d", *ptr2);
     printf("\n 重新赋值后 num2 的地址是： %x\n", ptr2);
/*

 num1 的值是： 50
 num1 的地址是： 62fe3c

 num2 的值是： 100
 num2 的地址是： 62fe38

 重新赋值后 num2 的值是： 50
 重新赋值后 num2 的地址是： 62fe38
 
 */

	return 0;
}