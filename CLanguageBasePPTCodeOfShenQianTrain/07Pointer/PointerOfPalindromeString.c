//指针回文串

#include<stdio.h>
int main()
{


//回文串
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
printf("\n 该字符串是回文串\n");
  else
         printf("\n 该字符串不是回文串\n");

	return 0;
	return 0;
}