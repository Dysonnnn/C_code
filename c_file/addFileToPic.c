/*
以二进制 读写文件
将两个文件进行拼接，生成一个新的文件
图片+压缩文件
图片后缀名的时候显示为图片
压缩文件后缀名的时候可解压

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f_pic, *f_file, *f_finish;
	char ch_buf;
	char pic_name[20], file_name[20], finish_name[20];
	
	printf("请输入需要合成的图片和文件的名称：\n");
  	printf("图片：");
	scanf("%s", pic_name);
	printf("文件：");
	scanf("%s", file_name);
	printf("生成为：");
	scanf("%s", finish_name);
	
	if (!(f_pic = fopen(pic_name, "rb"))){
		printf("cannot open the  pic %s !\n", pic_name);
		return;
	} else{
		printf("open pic successfully\n");
	}

	if (!(f_file = fopen(file_name, "rb"))){
		printf("cannot open the file %s \n", file_name);
		return;
	} else{
		printf("open file successfully\n");
	}
	
	if (!(f_finish = fopen(finish_name, "wb"))){
		printf("cannot open the finish file %s !\n", finish_name);
		return;
	} else{
		printf("open finish successfully\n");
	}

	while(!(feof(f_pic))){
		ch_buf = fgetc(f_pic);
		fputc(ch_buf, f_finish);
	}
	fclose(f_pic);
	
	while(!(feof(f_file))){
		ch_buf = fgetc(f_file);
		fputc(ch_buf, f_finish);
	}
	fclose(f_file);
	fclose(f_finish);
	
	system("pause");
 return 0;
}

