#include<stdio.h>
int main()
{
	int var = 10;
	int *ptr_var;
	ptr_var = &var;
	printf(" the value of var is %d \n",var);
	printf("\n the menery address of var is %x",&var);
	printf("\n the address of ptr_var is %x\n",&ptr_var);
	printf("\n the value of var is %d",*ptr_var);
	printf("\n the address of var is %x\n",ptr_var);

/*±àÒë½á¹û
 the value of var is 10

 the menery address of var is 62fe4c
 the address of ptr_var is 62fe40

 the value of var is 10
 the address of var is 62fe4c
*/

	return 0;
}