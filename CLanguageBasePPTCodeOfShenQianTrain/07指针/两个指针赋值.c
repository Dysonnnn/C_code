#include<stdio.h>
int main()
{

int x=100,*ptr_x,*ptr_y;
ptr_x = &x;
ptr_y = ptr_x;

printf("ptr_x  = %x\n",ptr_x);
printf("ptr_y  = %x\n",ptr_y);

/*
Êä³ö½á¹û
ptr_x  = 62fe3c
ptr_y  = 62fe3c
*/

	return 0;
}