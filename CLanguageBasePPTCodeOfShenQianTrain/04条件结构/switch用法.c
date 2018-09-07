/**********

switch用法

*********/

#include <stdio.h>
int main()
{
     char in_char;
     printf("\n 请输入一个小写字母： ");
     scanf("%c", &in_char);
     switch(in_char)
     {
          case 'a':  printf("\n 您输入的是元音字母 a\n");
     	        break;
          case 'e':  printf("\n 您输入的是元音字母 e\n");
     	        break;
          case 'i':   printf("\n 您输入的是元音字母 i\n");
     	        break;
          case 'o':  printf("\n 您输入的是元音字母 o\n");
     	        break;
          case 'u':  printf("\n 您输入的是元音字母 u\n");
     	        break;
          default:  printf("\n 您输入的不是元音字母 \n");
     } 

     return 0;
}     
