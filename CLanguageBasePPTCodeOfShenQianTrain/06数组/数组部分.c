/**************************************
声明一维数组
	datatype arrayName[size];
	类型说明符 int、char、float  …
	数组名
	常量表达式：数组大小

例如：
int num[50];
char list_of_initials[20];
double pressure_level[6];

其他的初始化情况：
int arr[10] = {10,9,8,7,6,5,4,3,2,1,0};? //错误！越界了
int arr[10] = {9,8,7,5}; //正确，后面的6个元素未初始化
int arr[] = {9,8,7};? //正确：元素个数为 3
int arr[]={};? //错误，到底是几个元素？

为一维数组动赋值

	int price[10]={1,2,3,5,3}

二维数组
	int books[4][2] = {{11, 1294},{22,450}, {33,4000}, {44,79}};
	int arr[ ][3] = { {1,2,3}, {4,5,6}?};
	int arr[2][ ] = { {1,2,3}, {4,5,6}?};----错误！！！！



**************************************/
#include<stdio.h>
int main()
{
	//为一维数组动态赋值
	/*
	int i=0;
	float price[10];
	printf("Enter prices of 10 books\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&price[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("The price of NO.%d BOOK is %f\n",i,price[i]);
	}
	*/
	
	
	//二维数组赋值
	/*
	int i, j, num[4][2];
	printf("Enter number of 4*2 blocks\n");
	for (i = 0; i <= 3; i++)
	{
	     for (j = 0; j <=1 ; j++)
	     {
	        scanf("%d",&num[i][j]);
	      }
	}
	
		for (i = 0; i <= 3; i++)
	{
	     for (j = 0; j <=1 ; j++)
	     {
	        printf("num[%d][%d]  = %d\t",i,j,num[i][j]);
	      }
		 printf("\n");
	}
	*/
	
	//二维数组示例
  /****
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

	*****/
	
	//求出最大最小值
	int num[6],max,min,i;
	printf("input 6 number:\n");
	for (i=0;i<6;i++)
		scanf("%d",&num[i]);
		max = num[0];
		min = num[0];
		
	for (i=0;i<6;i++)
	{
	 	if (num[i]>max)
				max = num[i];
		if (num[i]<min)
				min = num[i];
  }
  
  printf("\n最大值为：%d",max);
  printf("\n最小值为：%d\n",min);


	return 0;
}
