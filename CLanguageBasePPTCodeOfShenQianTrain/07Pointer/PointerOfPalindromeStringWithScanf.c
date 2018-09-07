//回文串
//加强版，手动输入字符判断是否是回文串，
//加入count计算输入了多少个数字
#include<stdio.h>
int main()
{
	char name[50] = {0};
	int flag = 1;
   int i=0,count=0; //conut 记录输入了多少个字符
   char c; //输入的字符
   char *start,*end;
   printf("求是否输入的字符串为回文串，请输入字符\n");
   while((c=getchar())!='\n')
   {
		//scanf("%c",&name[count]);
   		name[count]	= c;
		count++;
		printf("count = %d\n",count);
   }
   
   for(i=0;i<count;i++)
		printf("name[%d] = %c \n",i,name[i]);

	 start =&name[0];
	 end =&name[count-1];	

	 //*start = name;    //
	 //*end = name[count-1];   //这样定义失败了
	 printf("start = %c,end = %c \n",*start,*end );

	  for(;start <= end; start++, end--)
	  {
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