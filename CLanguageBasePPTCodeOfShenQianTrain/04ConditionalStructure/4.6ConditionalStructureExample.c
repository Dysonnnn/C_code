/***********************

 条件运算符示例

************************/
#include <stdio.h>
int main()
{
	double sal;
	double rate;
	printf("\n 请输入基本工资：");
	scanf("%lf",&sal);
	rate= (sal<=5000) ? 0 : 0.05;
	sal=sal-(sal-5000)*rate;
	printf("\n 工资超过5000开始收税\n 税后工资为：%7.2f \n",sal);
	printf("\n***************************\n");

	return 0;
} 
