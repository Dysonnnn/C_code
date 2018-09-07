/*
结构指针变量

(*结构体指针名).成员名  <==> 结构体指针名->成员名  <==> 结构体变量名.成员名
*/
#include <stdio.h>

struct student
{
	int num;
	char *name;
	char sex;
	float score;
}stu = {1, "Gogo", 'F', 80.5},*pStu;


int main(int argc, char const *argv[])
{
	pStu = &stu;
	
	printf("--------stu.num stu.name的内容----------\n");
	printf("学号： %d  \t 姓名： %s \n", stu.num, stu.name);
	printf("性别： %c  \t 成绩： %.1f \n",stu.sex, stu.score);

	printf("\n--------(*pStu).num (*pStu).name的内容----------\n");
	printf("学号： %d  \t 姓名： %s \n", (*pStu).num, (*pStu).name);
	printf("性别： %c  \t 成绩： %.1f \n",(*pStu).sex, (*pStu).score);

	printf("\n--------pStu->num pStu->name的内容----------\n");
	printf("学号： %d  \t 姓名： %s \n", pStu->num, pStu->name);
	printf("性别： %c  \t 成绩： %.1f \n",pStu->sex, pStu->score);

	//(*pstu).num   等价于   pstu->num

	return 0;
}