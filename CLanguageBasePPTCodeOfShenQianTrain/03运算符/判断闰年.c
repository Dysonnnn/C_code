/****************************
判断闰年
什么是闰年？
	能被4整除但是不能被100整除的 
	或者
	能被400整除的
	叫做闰年

*************************/
#include <stdio.h>
int main()
{
  int year;
  printf("\n 请输入年份：");
  scanf("%d",&year);
  if((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0))
	  printf("\n %d 年是闰年 \n ", year);
  else
	  printf("\n %d 年不是闰年 \n\n ", year);
}
