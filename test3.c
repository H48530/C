

//最大公约数
//给定两个数，求这两个数的最大公约数
//#include<stdio.h>
//int Fac(int a, int b)
//{
//	int d = 1;
//	int c = 0;
//	while (d)
//	{
//		c = a / b;
//		d = a % b;
//		a = b;
//		b = d;
//	}
//	return a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("请输入两个数字：\n");
//	scanf("%d %d", &a, &b);
//	if (a>b)
//	{
//		ret=Fac(a, b);
//	}
//	else
//	{
//		ret = Fac(b, a);
//	}
//	printf("最大公约数：%d\n", ret);
//	return 0;
//}


//打印闰年
////打印1000年到2000年之间的闰年
//#include<stdio.h>
//
//int main()
//{
//	int i = 1000;
//	for (i=1000; i <= 2000; i+=4)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d  ", i);
//		}
//
//	}
//	return 0;
//}

//打印素数
//写一个代码：打印100~200之间的素数
//
//#include<stdio.h>
//int main()
//{
//	int num = 100;
//	for (num = 100; num <= 200; num++)
//	{
//		int flag = 0;
//		for (int i = 2; i <= (num / 2); i++)
//		{			
//			if (num%i == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}
////

#include<stdio.h>
int main()
{
	int num = 100;
	for (num = 101; num <= 200; num+=2)
	{
		int flag = 0;
		for (int i = 2; i <= (num / 2); i++)
		{
			if (num%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d ", num);
		}
	}
	return 0;
}