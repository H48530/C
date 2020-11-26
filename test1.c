//计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int  i = 1;
//	int ret = 1;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("阶乘为：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("输入一个大于0的数字\n");
//	}
//	else
//	{
//		while (i<=num)
//		{
//			ret *= i;
//			++i;
//		}
//		printf("阶乘是：%d\n", ret);
//	}
//	return 0;
//
//}

//计算1！+2！+...+n!
//两次循环计算
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int  i = 1;
//	int j = 1;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("阶乘和为：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("输入一个大于0的数字\n");
//	}
//	else
//	{
//		while (i <= num)
//		{
//			while (j<=i)
//			{
//				ret *= i;
//				++j;
//			}
//			sum += ret;
//			++i;
//		}		
//		printf("阶乘和是：%d\n", sum);
//	}
//	return 0;
//}

//计算1！+2！+...+n!
//一次循环计算
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int  i = 1;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("阶乘为：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("输入一个大于0的数字\n");
//	}
//	else
//	{
//		while (i <= num)
//		{
//			ret *= i;
//			++i;
//			sum += ret;
//		}
//		printf("阶乘是：%d\n", sum);
//	}
//	return 0;
//}

