#define _CRT_SECURE_NO_WARNINGS 1
//构建斐波那契数列
//{0,1,1,2,3,5,8,13,...}即：F(n=F(n-1)+F(n-2）
//循环法
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int c = 0;
//	printf("请输入你要输出第几个斐波那契数(大于0)：\n");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("请输入一个大于1的数\n");
//	}
//	else if (n==1)
//	{
//		a = 0;
//		printf("斐波那契数为：%d\n", a);
//	}
//	else if (n == 2)
//	{
//		a = 1;
//		printf("斐波那契数为：%d\n", a);
//	}
//	else
//	{
//		int a = 0;
//		int b = 1;
//		
//		while (n > 2)
//		{			
//			c = a + b;
//			a = b;
//			b = c;	
//			n--;
//		}		
//	}
//	printf("斐波那契数为：%d\n", c);
//	return 0;
//}
//非递归的方法求斐波那契数列
//#include<stdio.h>
//int Fib(int x)
//{
//	if (x == 1)//当x等于1时候，直接返回0
//		return 0;
//	else if (x == 2)//当x等于2时候，直接返回1
//		return 1;
//	else
//	{
//		int first = 0;//定义第1个斐波那契数为0
//		int second = 1;//定义第2个斐波那契数为0
//		int ret = 0;//定义一个整形接收值
//		while (x>2)//当x大于2的时候进入循环
//		{
//			ret = first + second;
//			first= second;
//			second = ret;
//			x--;
//		}
//		return ret;//返回ret的值
//	}		
//}
//int main()
//{
//	int n = 0;
//	
//	printf("请输入你要输出第几个斐波那契数(大于0)：\n");
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		printf("第%d个斐波那契数为：%d\n",n, Fib(n));
//	}
//	else
//	{
//		printf("请输入一个大于1的数\n");
//	}	
//	return 0;
//}

////递归的方法求菲波那切数列
//#include<stdio.h>
//int Fib(int x)
//{
//	if (x == 1)
//	{
//		return 0;//第一个斐波那契数为0
//	}
//		
//	else if (x == 2)
//	{
//		return 1;//第二个斐波那契数为1
//	}	
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);//从第三个数开始就回去找Fib（2）和Fib（1）
//		                               //不断回去找直到找到为止
//	}	
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你要输出第几个斐波那契数(大于0)：\n");
//	scanf("%d", &n);
//	if (n > 0)
//		{
//			printf("第%d个斐波那契数为：%d\n",n, Fib(n));
//		}
//		else
//		{
//			printf("请输入一个大于1的数\n");
//		}	
//	return 0;
//}
//
//求菲波那切数列前几项的和
//非递归方法
//#include<stdio.h>
//int FibSum(int x)
//{
//	if (x == 1)//前1项的和为0
//	{
//		return 0;
//	}
//	else if (x == 2)//前2项的和为1
//	{
//		return  1;
//	}
//	else
//	{
//		int first = 0;
//		int second = 1;
//		int sum = 1;//从第3项开始计算和，没有加前两项的和，所以sum初始化为1
//		int ret = 0;
//		while (x > 2)
//		{
//			ret = first + second;
//			first = second;
//			second = ret;
//			sum += ret;//每次求出的斐波那契数加在sum上
//			x--;
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int  n = 0;
//	printf("请输入你要求前几项的和：\n");
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		printf("前%d项斐波那契数的和为：%d\n",n,FibSum(n));
//	}
//	else
//	{
//		printf("请输入一个大于0的数\n");
//	}
//	return 0;
//}

//求菲波那切数列前几项的和
//递归方法
#include<stdio.h>
int Fib(int x)
{
	if (x == 1)
	{
		return 0;
	}
	else if (x == 2)
	{
		return 1;
	}
	else
	{
		return  Fib(x-1) + Fib(x - 2);
		
	}

}
int main()
{
	int  n = 0;
	printf("请输入你要求前几项的和：\n");
	scanf("%d", &n);
	if (n > 0)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)//利用for循环求和
		{
			sum += Fib(i);

		}
		printf("前%d项斐波那契数的和为：%d\n", n,sum );
	}
	else
	{
		printf("请输入一个大于0的数\n");
	}
	return 0;
}
