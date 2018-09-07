/*
指向结构体数组的指针

*/
#include <stdio.h>

struct student
{
	int num;
    char name[20];
    char sex;
    int age;

}stu[3]={ {10101,"Li Lin Hai",'M',18},
               {10102,"Zhang Fun",'M',19},
	   		   {10104,"Wang Min",'F',20} };

int main(int argc, char const *argv[])
{
	struct student *p;
	for(p = stu; p < stu + 3; p++)
	{
		printf("学号： %d \t 名字： %s \t 性别：%c \t 年龄： %d \t \n", 
			p->num, p->name, p->sex, p-> age);
	}
	return 0;
}