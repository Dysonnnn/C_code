/**********

switch 用法  + - * /

*********/

#include <stdio.h>
int main()
{
int a,b;	char op;
printf("\n 输入操作数1,运算符,操作数2:  ");

//scanf("%d,%c,%d",&a,&op,&b);  //逗号隔开

scanf("%d%c%d",&a,&op,&b);  //直接输入算式

switch(op)
{
   case '+':  printf("\n %d+%d=%d\n",a,b,a+b);
	   break;
   case '-':  printf("\n %d-%d=%d\n",a,b,a-b);
	   break;
   case '*':  printf("\n %d×%d=%d\n",a,b,a*b);
	   break;
   case '/':   printf("\n %d/%d=%d\n",a,b,a/b);
	   break;
   default:   printf("\n 运算符错误！");
} 

return 0;
}
