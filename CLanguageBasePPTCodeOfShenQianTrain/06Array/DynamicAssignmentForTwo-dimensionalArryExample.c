/**************************************
	
	为二维数组动态赋值

**************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j, num[4][2];
	printf("Enter number of 4*2 blocks\n");
	for (i = 0; i <= 3; i++)
	{
	     for (j = 0; j <=1 ; j++)
	     {
	        scanf("%d",&num[i][j]);
	      }
	}
	
		for (i = 0; i <= 3; i++)
	{
	     for (j = 0; j <=1 ; j++)
	     {
	        printf("num[%d][%d]  = %d\t",i,j,num[i][j]);
	      }
		 printf("\n");
	}
	return 0;
}