/**************************************
����һά����
	datatype arrayName[size];
	����˵���� int��char��float  ��
	������
	�������ʽ�������С

���磺
int num[50];
char list_of_initials[20];
double pressure_level[6];

�����ĳ�ʼ�������
int arr[10] = {10,9,8,7,6,5,4,3,2,1,0};? //����Խ����
int arr[10] = {9,8,7,5}; //��ȷ�������6��Ԫ��δ��ʼ��
int arr[] = {9,8,7};? //��ȷ��Ԫ�ظ���Ϊ 3
int arr[]={};? //���󣬵����Ǽ���Ԫ�أ�

Ϊһά���鶯��ֵ

	int price[10]={1,2,3,5,3}

��ά����
	int books[4][2] = {{11, 1294},{22,450}, {33,4000}, {44,79}};
	int arr[ ][3] = { {1,2,3}, {4,5,6}?};
	int arr[2][ ] = { {1,2,3}, {4,5,6}?};----���󣡣�����



**************************************/
#include<stdio.h>
int main()
{
	//Ϊһά���鶯̬��ֵ
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
	
	
	//��ά���鸳ֵ
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
	
	//��ά����ʾ��
  /****
	int i,j,student[3][2];
	for(i = 0;i < 3;i++)
	{
	     printf("\n ����ѧ�� %d ����ѧ�ڵĳɼ���",i+1);
	     for(j = 0;j < 2;j++)
	          scanf("%d",&student[i][j]);
	}
	
	printf("\n ѧԱ��ѧ�ż�������ѧ�ڵĳɼ�Ϊ��\n ");
	printf("\n \tѧ��\t��һѧ��\t�ڶ�ѧ��");
	
	for(i = 0;i < 3;i++)
	{
	    printf("\n\t");
	    printf("%d\t",i+1);
	    for(j = 0;j < 2;j++)
	          printf("%d\t\t",student[i][j]);
	    printf("\n ");
	}

	*****/
	
	//��������Сֵ
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
  
  printf("\n���ֵΪ��%d",max);
  printf("\n��СֵΪ��%d\n",min);


	return 0;
}
