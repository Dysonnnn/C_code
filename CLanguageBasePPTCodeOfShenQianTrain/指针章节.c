/**********************************************
*	PPT		指针章节
*
*
************************************************/
#include<stdio.h>
int main()
{
	
//	printf("hello world\n");
//	return 0;



//回文串
   //char name[5] = {'M', 'A', 'D', 'A', 'M'};

//加强版，手动输入字符判断是否是回文串，
//加入count计算输入了多少个数字
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
printf("\n 该字符串是回文串\n");
  else
         printf("\n 该字符串不是回文串\n");

	return 0;


}
