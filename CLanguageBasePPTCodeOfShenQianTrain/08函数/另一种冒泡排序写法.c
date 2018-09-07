/****************************

另一种冒泡排序写法
数组的长度宏定义


****************************/

#include <stdio.h>
#define SIZE 8
 
void bubble_sort(int a[], int n);
 
void bubble_sort(int a[], int n)
{
    int i, j, temp;
    for (j = 0; j < n - 1; j++) //选择n-1次要对比大小的对象
        for (i = 0; i < n - 1 - j; i++)  //进行n-i-1次对比大小
        {
            if(a[i] > a[i + 1])  //如果大于，则交换
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
}
 
int main()
{
    int number[SIZE] = {95, 45, 15, 78, 84, 51, 24, 12};
    int i;
    bubble_sort(number, SIZE);
    printf("将数字从小到大排序:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d  ", number[i]);
    }
    printf("\n");
}