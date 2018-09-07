/******************************

输入六个数字，求最大最小值

*******************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num[6],max,min,i;
	printf("input 6 number:\n");
	for (i=0;i<6;i++)
		scanf("%d",&num[i]);
		max = num[0];
		min = num[0];
		
	for (i=0;i<6;i++)
	{
	 	if (num[i]>max)
				max = num[i];
		if (num[i]<min)
				min = num[i];
  }
  
  printf("\n最大值为：%d",max);
  printf("\n最小值为：%d\n",min);

	return 0;
}
