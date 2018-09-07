/************************

数组作为函数参数
	将输入的数字排序

************************/


#include <stdio.h>
#define SIZE 5
void sort(float[]);  //函数 全局声明，在main外面
int main()
{
     float grade[SIZE];
     int i;
     printf("\n 输入 %d 个学员的成绩：\n",SIZE);
     for(i=0;i<SIZE;i++)
		scanf("%f",&grade[i]);
     sort(grade);
     printf("\n 排序后的成绩为：\n");
     for(i=0;i<SIZE;i++)
	 printf("%5.2f ",grade[i]);
     printf("\n");
}

void sort(float a[N])  //冒泡排序
{
       int i,j;  float temp;
       for(i=0;i<N;i++)
       {
			for(j=0;j<N-i-1; j++)  //对比n-i-1次
			{
			      if(a[j] > a[j+1])   //相邻两个数字对比大小
		           {
	                    temp = a[j+1];
						a[j+1] = a[j];
						a[j] = temp;   //如果大于，则交换两个数字
						//最大的数字在右边
			       }
			 }
        }
}

//另一种冒牌排序写法：
/*
//定义函数：
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}
//调用函数
bubble_sort(number, SIZE);
//声明函数
void bubble_sort(int a[], int n);
*/

/*
输出结果为

 输入 5 个学员的成绩：
1 2 3 5 4

 排序后的成绩为：
 1.00  2.00  3.00  4.00  5.00


*/