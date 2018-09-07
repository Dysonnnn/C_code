/**********

4.2 多重 if 结构示例

*********/9
#include <stdio.h>
int main()
{
	float grade;
	printf("\n 请输入期末考试成绩： ");
	scanf("%f", &grade);
	if(grade>=90)
		printf("\n 优");
	else if ((grade>=80) && (grade<90))
		printf("\n 良");
	else if ((grade>=60) && (grade<80))
		printf("\n 中");
	else 
		printf("\n 差");
	printf("\n");
} 
