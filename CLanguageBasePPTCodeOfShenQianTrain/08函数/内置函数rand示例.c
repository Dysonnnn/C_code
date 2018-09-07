/***************************

常用内置函数--math.h 的
内置函数rand示例
rand()会返回一个范围在0到RAND_MAX（32767）之间的伪随机数（整数）。


三、使用rand()和srand()产生指定范围内的随机整数的方法

“模除+加法”的方法

因为，对于任意数，0<=rand()%(n-m+1)<=n-m

因此，0+m<=rand()%(n-m+1)+m<=n-m+m

因此，如要产生[m,n]范围内的随机数num，可用：

int num=rand()%(n-m+1)+m;

其中的rand()%(n-m+1)+m算是一个公式，记录一下方便以后查阅。

比如产生10~30的随机整数：

srand(time(0));

int a = rand() % (21)+10;

https://blog.csdn.net/chikey/article/details/66970397

程序为：
产生 10 个 0 到 99 之间的随机数序列：
44 73 26 58 37 94 27 42 28 90
Press any key to continue


***************************/
#include <stdio.h>
#include<stdlib.h>    //rand()函数用到
int main(int argc, char const *argv[])
{
       int i; 
       printf("产生 10 个 0 到 99 之间的随机数序列：\n\n"); 
       //srand((unsigned)time(NULL));
       for(i=0; i<10; i++) 
             printf("%d ", rand() % 100); 
        //     printf("%d ", rand() ); 
       printf("\n");

	return 0;
}
