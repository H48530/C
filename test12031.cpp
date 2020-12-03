//#define _CRT_SECURE_NO_WARNINGS 1

////函数判断闰年
//
//#include<stdio.h>
//
//int IsLeapYear(int a)
//{
//	//判断闰年
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int a = 1;
//	while (a)//输入0，结束程序
//	{
//		scanf("%d", &a);
//		if (IsLeapYear(a) == 1)
//		{
//			printf("%d年，是闰年\n", a);
//		}
//		else
//		{
//			printf("%d年，不是闰年\n", a);
//
//		}
//	}
//	return 0;
//}

//函数判断素数
//
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#include<stdio.h>
void PrimeNumber(int a)
{
	int flag = 0;
	for (int  i = 2; i <= a/2; i++)
	{
		if (a % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag==0)
	{
		printf("%d  ", a);
	}
}
int main()
{
	for (int  i = 101; i < 200; i+=2)
	{
		PrimeNumber(i);
	}
	return 0;
}

////交换两个整数
////实现一个函数来交换两个整数的内容。
//
//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("num1=%d  num2=%d\n", num1, num2);
//	swap(&num1, &num2);//传递地址给函数
//	printf("num1=%d  num2=%d\n", num1, num2);
//	return 0;
//}


//打印一个数的每一位
//
//递归方式实现打印一个整数的每一位
//
//#include <stdio.h>
//void  Fun(int num)
//{
//	if (num > 9)//如果是两位数
//	{
//		Fun(num / 10);//递归调用
//	}
//	printf("%d ", (num % 10));//取余得到个位
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Fun(num);
//
//	return 0;
//}
//void print(int n)
//{
//	if (n>9)//判断除个位是否还有其他位
//	{
//		print(n / 10);//一个整数每除一次十，剥去一位
//	}
//	printf("%d “, (n % 10));//取余得到个位
//}
//int main()
//{
//	int n = 0;
//	scanf(”%d", &n);
//		print(n);
//	return 0;
//}
