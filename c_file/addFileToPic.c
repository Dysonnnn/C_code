/*
�Զ����� ��д�ļ�
�������ļ�����ƴ�ӣ�����һ���µ��ļ�
ͼƬ+ѹ���ļ�
ͼƬ��׺����ʱ����ʾΪͼƬ
ѹ���ļ���׺����ʱ��ɽ�ѹ

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f_pic, *f_file, *f_finish;
	char ch_buf;
	char pic_name[20], file_name[20], finish_name[20];
	
	printf("��������Ҫ�ϳɵ�ͼƬ���ļ������ƣ�\n");
  	printf("ͼƬ��");
	scanf("%s", pic_name);
	printf("�ļ���");
	scanf("%s", file_name);
	printf("����Ϊ��");
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

