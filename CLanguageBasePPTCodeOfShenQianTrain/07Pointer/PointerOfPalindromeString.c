//ָ����Ĵ�

#include<stdio.h>
int main()
{


//���Ĵ�
   char name[5] = {'M', 'A', 'D', 'A', 'M'};

	int flag = 1;
   int i;
   char *start=name, *end=name+4;
   for(i=0;i<5;i++)
		printf("name[%d] = %c \n",i,name[i]);
		
   for(;start <= end; start++, end--) {
if(*start != *end)
{
 	    flag = 0;
    break;
}
  }
  if(flag)
printf("\n ���ַ����ǻ��Ĵ�\n");
  else
         printf("\n ���ַ������ǻ��Ĵ�\n");

	return 0;
	return 0;
}