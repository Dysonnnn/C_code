//��while�����1��100���������ĺ͡�

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
		printf("��1�ӵ�%d�ĺ���%d\n",i-1,sum);
	}
	printf("/***************************/\n");
	printf("������󣬴�1�ӵ�100�ĺ���%d\n",sum);
}

