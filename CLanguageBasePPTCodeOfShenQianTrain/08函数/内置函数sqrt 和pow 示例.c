/***************************

常用内置函数--math.h 的
内置函数sqrt 和pow 示例
--求平方根  立方 

***************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x=1;
   double squareroot,power;
   while(x <= 10)
   {
	squareroot=sqrt(x);    //求平方根
	power=pow(x,3);			//求立方
	printf(" %d的平方根:%3.2f\t\t\t%d的立方:%5.0f \n",
                x,squareroot,x,power);
	x++;
   }


	return 0;
}
