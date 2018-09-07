//用while语句求1～100所有整数的和。

#include <stdio.h>
int main()
{
	int i;
	int sum=0;

	i=1;
	while(i<=100)
	{
		sum=sum+i;
		i++;
		printf("从1加到%d的和是%d\n",i-1,sum);
	}
	printf("/***************************/\n");
	printf("所以最后，从1加到100的和是%d\n",sum);
}

