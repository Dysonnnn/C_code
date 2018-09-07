/*
整个结构作为参数

自己加个输入for  失败了。。。

*/
#include<stdio.h>

struct myComplex
{
     double re;//实部
     double im;//虚部
};


struct myComplex add(struct myComplex a,struct myComplex b)
{
	struct myComplex c;
	c.re=a.re+b.re;
	c.im=a.im+b.im;
	return c;
}

//定义结构变量
struct myComplex add(struct myComplex,struct myComplex);

int main()
{
	struct myComplex x={6.5,8.9},y={7.1,9.4};
	struct myComplex sum;
	

	printf("x为：%5.2lf+i%5.2lf\n",x.re,x.im);
	printf("y为：%5.2lf+i%5.2lf\n",y.re,y.im);
	
  sum=add(x,y);
  printf("sum为：%5.2lf+i%5.2lf\n",sum.re,sum.im);

  return 0;
}


