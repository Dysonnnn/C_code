/*
结构成员作为函数参数

gets(f1.name);
       fflush(stdin);  //清空输入缓冲,读入完一个字符串后又读入的话要清空

*/
#include <stdio.h>

struct film
{
      char name[25]; //电影名
      char director[25]; //导演
      int duration; //片长
};

void display(char *n, char *d, int *m); //声明函数 

int main(int argc, char const *argv[])
{
       struct film f1; 

       printf("\n\t 请输入电影的详细信息");
       printf("\n\n 请输入影片名：");
       gets(f1.name);
       fflush(stdin);  //清空输入缓冲,读入完一个字符串后又读入的话要清空

       printf("\n 请输入导演姓名： ");
       gets(f1.director);
       fflush(stdin); //清空输入缓冲

       printf("\n 请输入电影片长（分钟）： ");
       scanf("%d",&f1.duration);

       display(f1.name,f1.director,&f1.duration);  //为什么第三个是取地址？

	return 0;
}

//根据输入的参数输出
void display(char *n, char *d, int *m)
{
	printf("\n\t 电影的详细信息\n");
	printf("\n   片名： %s",n);
	printf("\n   导演： %s",d);
	printf("\n   片长： %d\n",*m);  
}
