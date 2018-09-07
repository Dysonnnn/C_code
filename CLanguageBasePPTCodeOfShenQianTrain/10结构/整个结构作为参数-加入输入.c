/*
整个结构作为参数

自己加个输入for  失败了。。。

*/
#include<stdio.h>

struct myComplex
{
     float re;//实部
     float im;//虚部
};
//定义结构变量
struct myComplex add(struct myComplex,struct myComplex);

int main()
{
     //struct myComplex x={6.5,8.9},y={7.1,9.4};
		//struct myComplex x[2]={{1, 2},{2, 3}	};
	struct myComplex *pX;
	struct myComplex sum;


//手动输入参数
	struct myComplex x[2];
	printf("\n请输入两个复数，例如 1+i6 \n");
	for (pX = x; pX < x + 2; pX++)
	{
		printf("\n-------pX= %d----------\n",pX);
		scanf("%f+i%f",&pX->re, &pX->im);   //取地址 赋值
	}
  printf("\n-----------------------------------\n");

	//打印输入的复数
	for (pX = x; pX < x + 2; pX ++)
	{
		printf("输入的复数是");
		printf("x[%d]= %.2f +i%.2f \n",pX, pX->re, pX->im);
	}
	
  printf("x[0]= %.2f +i%.2f \n", x[0].re, x[0].im);
  printf("x[1]= %.2f +i%.2f \n", x[1].re, x[1].im);
  
	sum = add(x[0], x[1]);
	printf("x[0]+x[1]和为：%5.2lf+i%5.2lf\n",sum.re,sum.im);

	return 0;
}

// complex  sum = a + b
struct myComplex add(struct myComplex a,struct myComplex b)
{
	struct myComplex sum;
	sum.re=a.re+b.re;
	sum.im=a.im+b.im;
	return sum;
}

// copy complex  sour to dest

struct myComplex myCopy(struct myComplex sour, struct myComplex dest)
{
		*dest.re = sour.re;
		*dest.im = sour.im;
}

