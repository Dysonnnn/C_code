/*
	Name:
	Copyright:
	Author:
	Date:
	Description: using string 用字符串的相关函数
			strscp   ---string copy
			strcmp   ---string compare
			strlen   ---string lenght
			strcat   ---string 连接
*/
#include <stdio.h>
#include <string.h>  //using string
int main()
{
 char arr[] = "Beijing test strlen";
 char arrSource[] = "test strcpy";
 char arrCopyTarget[20];
 int lenArr, lenString;
 
 char arrUsername[15];
 char arrSetUsername[] = "user";
 char arrPasswd[15];
 char arrSetPasswd[] = "root";
 
 char arrFirst[] = "Hello";
 char arrSecond[] = " World";
 
 
 lenArr = strlen(arr);
 lenString = strlen("Shanghai");
 
 strcpy(arrCopyTarget,arrSource);
 
 //test strcat    add second to the end of first
 puts(" origon arrFirst is ");
 puts(arrFirst);
 strcat(arrFirst,arrSecond);
 printf("\n arrSecond = %s \n after strcat, arrFirst was changed to %s \n",arrSecond,arrFirst);
 
 //test strlen and strcpy
 printf("\n string = %s length = %d", arr, lenArr);
 printf("\n string = %s length = %d \n","Shanghai",lenString);
 printf("\n arrSource = %s \n arrCopyTarget = %s \n",arrSource,arrCopyTarget);

	//test strcmp
	printf("\n please input username: ");
	gets(arrUsername);
	printf("\n please input password: ");
	gets(arrPasswd);
	
	if((strcmp(arrUsername,arrSetUsername) == 0)
				&& (strcmp(arrPasswd,arrSetPasswd) == 0))
				{
					printf("\n login success \n");
				}
	 else
	 {
			printf("\n username or password  error\n");
	 }
	 
 return 0;
}
