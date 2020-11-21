#define _CRT_SECURE_NO_WARNINGS 1
////局部变量
//#include<stdio.h>
//int main()
//{ 
//	int a;//定义局部变量a
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int i=1;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}


//静态局部变量
//#include<stdio.h>
//int main()
//{
//	static int a;//静态局部变量a
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//void test()
//{
//	static int i = 0;//静态局部变量
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int i = 1;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

////全局变量
//#include<stdio.h>
//int num = 10;//定义全局变量num
//int main()
//{ 
//	int a=0;//定义局部变量a
//	printf("%d\n", num);
//	return 0;
//}

////全局变量
//#include<stdio.h>
//int num = 10;//定义全局变量num
//extern n;//告诉编译器从外部引入n
//int main()
//{
//	printf("%d\n", n);
//	printf("%d\n", num);
//	return 0;
//}
//函数
#include<stdio.h>
int Add(int x,int y)//定义一个加法函数
{
	return x + y;//返回x+y的值
}
int main()
{
	printf("%d\n",Add(2, 3));
	return 0;
}