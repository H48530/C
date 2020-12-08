#define _CRT_SECURE_NO_WARNINGS 1
//
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include <stdio.h>
//
//void func(int num)
//{
//	for (int  i = 1; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %4d  ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &num);
//	func(num);
//
//	return 0;
//}
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
////非递归
//#include <stdio.h>
//int Fact(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n ; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
////递归
//#include <stdio.h>
//int Fact(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fact(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//递归和非递归分别实现strlen
//非递归
//#include <stdio.h>
//int my_strlen( char * arr)
//{
//	//模拟实现strlen函数
//	int count = 0;//定义一个计数器
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char* arr = "hello world";
//	int ret = my_strlen( arr);
//	printf("%d\n", ret);
//	return 0;
//}
//递归
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//int main()
//{
//
//	char* arr = "hello world";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//
//}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//
//#include <stdio.h>
//int DigitSum(int n)
//{
//	static int sum = 0;//
//	if (n > 9)
//	{
//		DigitSum(n / 10);//递归调用
//	}
//
//
//	return sum += n % 10;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",DigitSum(n));
//	return 0; 
//}

//编写一个函数实现n的k次方，使用递归实现。
//#include <stdio.h>
//#include <math.h>
//int Func(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return pow(1.0*n, k - 1)*n;
//	
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//    scanf("%d%d", &n,&k);
//	printf("%d\n",Func(n,k));
//	return 0;
//}


/*编写一个函数 reverse_string(char * string)（递归实现）

实现：将参数字符串中的字符反向排列。

要求：不能使用C函数库中的字符串操作函数。*/

//
//#include <stdio.h>
//#include<string>
//
//void reverse_string1(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char str[] = "hello world";
//	reverse_string1(str);
//	printf("%s\n", str);
//	return 0;
//}

//void reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}
//
//
//
///*
//递归方式：
//对于字符串“abcdefg”，递归实现的大概原理：
//1. 交换a和g，
//2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
//*/
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}

//递归
#include <stdio.h>
#include<string>

void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}


int main()
{
	char str[] = "hello world";
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}