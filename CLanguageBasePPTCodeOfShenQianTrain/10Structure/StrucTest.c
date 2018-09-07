/*
问题 :
存储一个班级中5名学员的信息（学号，姓名，性别和成绩）

功能：
输出结构体的内容
输出嵌套结构体内的内容
*/
#include<stdio.h>
#include<string.h>
struct  date
{    int month;
      int day;
      int year;
};

typedef struct  student
{
	char num	[15];
	char name[10];
	char sex;
	float score;
	struct date birthday; //嵌套定义
}student;

int main(int argc, char const *argv[])
{
	//结构初始化   嵌套赋值，
	student student1 = {"001", "Lion", 'M', 90.0,{2,22,2001}};  //一定要完整写一行,
	//student1 = {"001", "Lion", 'M', 90.0};   //单独这样写是错的
	
	/*
	//单独赋值
	student1.birthday.month = 2;  
	student1.birthday.day = 22;
	student1.birthday.year = 2000;
	*/
	printf(" num = %s \n name = %s \n sex = %c \n score = %.1f  birthday %d, %d, %d \n", student1.num, student1.name, student1.sex, student1.score, student1.birthday.month, student1.birthday.day, student1.birthday.year);

	//printf("整个作为输出  num = %s \n name = %s \n sex = %c \n score = %.1f  birthday %d, %d, %d \n", student1);// 这是错误写法

	student student2 ={"002", "halo"};
	//结构赋值 
	//student2.num = "002";  // 不能这样写 char *不能转char[15]么
	//student2.name = "halo";  //不能这样写
	strcpy(student2.num,"003");  //推荐这样赋值
	strcpy(student2.name,"Tony");  //推荐这样赋值
	student2.sex = 'M';
	student2.score = 90.5;

	printf(" num = %s \n name = %s \n sex = %c \n score = %.1f \n", student2.num, student2.name, student2.sex, student2.score);


	return 0;
}