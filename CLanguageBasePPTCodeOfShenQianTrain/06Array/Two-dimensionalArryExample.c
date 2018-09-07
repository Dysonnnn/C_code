/**************************************
	
	二维数组示例
	3*2的数组

	三个学生的两科成绩

**************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{

	int i,j,student[3][2];
	for(i = 0;i < 3;i++)
	{
	     printf("\n 输入学号 %d 两个学期的成绩：",i+1);
	     for(j = 0;j < 2;j++)
	          scanf("%d",&student[i][j]);
	}
	
	printf("\n 学员的学号及其两个学期的成绩为：\n ");
	printf("\n \t学号\t第一学期\t第二学期");
	
	for(i = 0;i < 3;i++)
	{
	    printf("\n\t");
	    printf("%d\t",i+1);
	    for(j = 0;j < 2;j++)
	          printf("%d\t\t",student[i][j]);
	    printf("\n ");
	}


	return 0;
}