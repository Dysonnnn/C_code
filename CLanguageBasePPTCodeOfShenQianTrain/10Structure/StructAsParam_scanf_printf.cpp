/*
�����ṹ��Ϊ����

�Լ��Ӹ�����for  ʧ���ˡ�����

*/
#include <stdio.h>
#include <ostream>
#include <iostream>

typedef struct _Complex_
{
	float re; //the real number
	float im; //the im number
	struct _Complex_ operator=(const struct _Complex_ &src)
	{
		this->im = src.im;
		this->re = src.re;
		return (*this);
	}
}myComplex;

/**
 * @brief - the function is compute two complex number add
 * 
 * @return myComplex - the result complex
 */
myComplex add(const myComplex &,const myComplex &);

void myCopy(const myComplex &,myComplex &);

myComplex operator+(const myComplex &a,const myComplex &b){
	myComplex result;
	result.im = a.im + b.im;
	result.re = a.re + b.re;
	return result;
}

std::ostream &operator<<(std::ostream &os,const myComplex &a){
	os<<a.re<<"+"<<a.im<<"i";
	return os;
}

int main()
{
	 myComplex *pX;
	 myComplex sum;

	//the complex number!
	myComplex number[2];
	printf("\nplease input a complex number 1+i6 \n");
	for (pX = number; pX < number + 2; pX++)
	{
		printf("\n-------pX= %d----------\n",pX);
		scanf("%f+i%f",&pX->re, &pX->im);   //ȡ��ַ ��ֵ
		printf("input the second complex number\n");
	}
  	printf("\n-----------------------------------\n");

	//��ӡ����ĸ���
	for (pX = number; pX < number + 2; pX ++)
	{
		printf("under is your input number\n");
		std::cout<<"number["<<pX<<"]= "<<(*pX)<<std::endl;
		//printf("number[%d]= %.2f +i%.2f \n",pX, pX->re, pX->im);
	}
	std::cout<<"number[0]= "<<number[0]<<std::endl;
	std::cout<<"number[1]= "<<number[1]<<std::endl;
  	// printf("number[0]=  \n", number[0].re, number[0].im);
  	// printf("number[1]= %.2f +i%.2f \n", number[1].re, number[1].im);
  
	sum = add(number[0], number[1]);
	std::cout<<"number[0]+number[1]="<<sum<<std::endl;
	//printf("number[0]+number[1]=%5.2lf+i%5.2lf\n",sum.re,sum.im);

	myCopy(number[0],number[1]);
	std::cout<<"number[0]= "<<number[0]<<std::endl;
	std::cout<<"number[1]= "<<number[1]<<std::endl;
	return 0;
}

// complex  sum = a + b
 myComplex add(const myComplex &a,const myComplex &b)
{
	myComplex sum = a + b;  //define the sum complex
	return sum;
}

/**
 * @brief - copy one struct to another struct 
 * 
 * @param src - the source struct
 * @param dst - the destine struct 
 * @return NULL
 */

 void myCopy(const myComplex &src,myComplex &dst)
{
	dst = src;
}

