/**********************************************
*	PPT		ָ���½�
*
*
************************************************/
#include<stdio.h>
int main()
{
	
//	printf("hello world\n");
//	return 0;



//���Ĵ�
   //char name[5] = {'M', 'A', 'D', 'A', 'M'};

//��ǿ�棬�ֶ������ַ��ж��Ƿ��ǻ��Ĵ���
//����count���������˶��ٸ�����
   char name[50] = {0,0};
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


}
