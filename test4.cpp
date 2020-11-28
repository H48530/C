#define _CRT_SECURE_NO_WARNINGS 1
//水仙花数1000以内
//
//#include <stdio.h> 
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (int i = 100; i < 1000; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//		d = a*a*a + b*b*b + c*c*c;
//		if (d == i)
//		{
//			printf("%d \n", i);
//		}
//		
//	}
//	return 0;
//}


#include <stdio.h>
#include <math.h>
int fun(int x)
{
	int a = x % 10;
	int b = x / 10 % 10;
	int c = x / 100;
	int d = pow(1.0*a,3)+pow(1.0*b,3)+pow(1.0*c,3);
	return d;
}

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		if (fun(i) == i)
		{
			printf("%d ", fun(i));
		}
	}
	return 0;
}
////编写函数，判断一个数是否为水仙花数
//#include <stdio.h>
//int fun(int x)
//{
//	int a = x % 10;
//	int b = x / 10 % 10;
//	int c = x / 100;
//	int d = a*a*a + b*b*b + c*c*c;
//	return d;
//}
//
//int main()
//{
//	for (int  i = 100; i < 1000; i++)
//	{
//		if (fun(i) == i)
//		{
//		printf("%d\n",fun(i));
//		}
//	}
//	return 0;
//}