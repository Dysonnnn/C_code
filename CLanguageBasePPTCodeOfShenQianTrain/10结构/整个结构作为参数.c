/*
�����ṹ��Ϊ����

�Լ��Ӹ�����for  ʧ���ˡ�����

*/
#include<stdio.h>

struct myComplex
{
     double re;//ʵ��
     double im;//�鲿
};


struct myComplex add(struct myComplex a,struct myComplex b)
{
	struct myComplex c;
	c.re=a.re+b.re;
	c.im=a.im+b.im;
	return c;
}

//����ṹ����
struct myComplex add(struct myComplex,struct myComplex);

int main()
{
	struct myComplex x={6.5,8.9},y={7.1,9.4};
	struct myComplex sum;
	

	printf("xΪ��%5.2lf+i%5.2lf\n",x.re,x.im);
	printf("yΪ��%5.2lf+i%5.2lf\n",y.re,y.im);
	
  sum=add(x,y);
  printf("sumΪ��%5.2lf+i%5.2lf\n",sum.re,sum.im);

  return 0;
}


