#define _CRT_SECURE_NO_WARNINGS 1

//计算n得到阶乘
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int n = 1;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		n = i*n;
//
//	}
//	printf("%d的阶乘是：%d\n",num ,n);
//	return 0;
//}
//求一个数的阶乘和
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	int n = 1;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		n *= i;
//		sum += n;
//	}
//	printf("%d的阶乘和是：%d\n",num, sum);
//	return 0;
//}

//定义函数的方法求n的阶乘
//#include<stdio.h>
//int Fun(int a)
//{
//	int n = 1;
//	for (int i = 1; i <= a; i++)
//	{
//		n = i*n;
//	}
//	return n;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &num);
//	printf("%d的阶乘是:%d", num, Fun(num));
//	return 0;
//}
//
//#include<stdio.h>
//int Fun(int a)
//{
//	if (a > 1)
//	{
//		Fun(a - 1) * a;
//	}
//	else{
//		Fun(a) = 1;
//	}
//	return  Fun(a);
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &num);
//	printf("%d的阶乘是:%d", num, Fun(num));
//	return 0;
//}

//移位操作符
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 0;
	int c = 0;
	//将a左移一位
	//a的二进制      0000 0010
	//左移一位       0000 0100
	//相当于整体向左移动一位，多余的和空出来的地方补0
	b = a << 1;
	printf("%d\n", b);
	//将a左移一位
	//a的二进制      0000 0010
	//右移一位       0000 0001
	//相当于整体向右移动一位，多余的和空出来的地方补0
	c= a >> 1;
	printf("%d\n",c);
	return 0;
}
//按位与
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a&b);
//	return 0;
//}
//按位或
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a|b);
//	return 0;
//}
////按位异或
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a ^ b);
//	return 0;
//}

//找出只出现一次的数字 
#include<stdio.h>
int main()
{
	

	int a[] = { 1, 2, 3, 8, 4, 3, 4, 2, 1 };
	int ret = 0;
	int sz = 0;
	sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		ret = ret ^ a[i];
	}
	printf("%d\n", ret);
	return 0;
}
