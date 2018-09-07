/************************

数组作为函数参数2
	求输入数字内的 最大值
************************/
#include <stdio.h>
int find_larg(int *);
int main()
{
   int arr1[5];
   int i, larg_num;
   printf("\n 请输入 5 个不同的值，存储在一个数组中 \n");
   for (i = 0; i <= 4; i++)
   {
      scanf("%d", &arr1[i]);
   }
   larg_num = find_larg(arr1);
   printf("\n 最大的数是：%d\n ", larg_num);
}

int find_larg(int *ptr)
{
   int high = *ptr,i;
   ptr++;
   for (i = 1; i <=4; i++)
   {
         if (high < *ptr)
               high = *ptr;
         ptr++;
   }
   return high;
}

