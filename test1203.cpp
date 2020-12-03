#define _CRT_SECURE_NO_WARNINGS 1
////写一个函数，找出两个数的最大值
//#include<stdio.h>
//int max(int a, int b)
//{
//	return a > b ? a : b;//三目操作符
//	                     //a大于b，如果是，返回a，否则返回b
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("请输入两个数：\n");
//	scanf("%d %d", &num1, &num2);
//	printf("%d\n", max(num1, num2));
//
//	return 0;
//}

//
//#include <stdio.h>
//
//void swap(int x, int y)//交换函数——交换两个整数
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a, b, c;
//	printf("请输入3个数字：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)//保证a和b中，a最小
//	{
//		swap(a, b);
//	}
//	if (b > c)//保证b和c中，b最小
//	{
//		swap(b, c);
//	}
//	if (a > b)//保证a和b中，a最小
//	{
//		swap(a, b);
//	}
//
//	printf("三个数字按升序输出：\n%d %d %d\n", a, b, c);
//	return 0;
//}

#include <stdio.h>

void swap(int* px, int* py)//交换函数——交换两个整数
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a, b, c;
	printf("请输入3个数字：\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)//保证a和b中，a最小
	{
		swap(&a, &b);
	}
	if (b > c)//保证b和c中，b最小
	{
		swap(&b, &c);
	}
	if (a > b)//保证a和b中，a最小
	{
		swap(&a, &b);
	}

	printf("三个数字按升序输出：\n%d %d %d\n", a, b, c);
	return 0;
}