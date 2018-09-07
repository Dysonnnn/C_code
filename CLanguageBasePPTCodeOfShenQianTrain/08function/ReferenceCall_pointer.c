/************************

引用调用
-这里引用又用了指针

************************/
void TestChangeValue();
int main()
{
   int value = 0; //初始化value值为0

   TestChangeValue(&value); //调用函数

   printf("原来的a=0,输出a的值是%d\n",value); //输出value的结果
}

//定义函数，改变参数的值
void TestChangeValue(int *value)
{
   *value = 10; //让参数value等于10
}

//输出的a = 10

/*
编程规范

func 这个函数名就很有大问题

17-梁宇航 18.9.3 10:40:48
变量名别 a bc的

17-梁宇航 18.9.3 10:41:03
除了一般的i j可以直接写单字母

17-梁宇航 18.9.3 10:41:20
一般C语言定义了

*/