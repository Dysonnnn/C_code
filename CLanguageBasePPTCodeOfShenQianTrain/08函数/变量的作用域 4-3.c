/************************

变量的作用域 4-3

************************/
#include <stdio.h>
void addNumbers()
{
     int num1,num2,sum;
     printf("\n 请输入两个数：");
     scanf("%d %d",&num1,&num2);
     sum=num1+num2;
     printf(" 子函数中 sum 的值是 %d \n",sum);
}
int main()
{
    int sum=0;
    addNumbers();
    printf("\n 主函数中 sum 的值是 %d \n ",sum);
}
