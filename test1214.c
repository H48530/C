#define _CRT_SECURE_NO_WARNINGS 1
//求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
////输出例子 : 7
//#include <stdio.h>
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int x = m ^ n;//异或  相同为0，相异为1
//	int count = 0;
//	while (x)//计算x中1的个数就为不同位置的个数
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	printf("%d\n",count);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位
//
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include <stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("偶数位：");
	for (int i = 31; i >=1; i-=2)
	{
		printf("%d ", (x >> i) & 1);
	}
	printf("\n");
	printf("奇数位：");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (x >> i) & 1);
	}
	printf("\n");
	return 0;
}
/*
思路：
1. 提取所有的奇数位，如果该位是1，输出1，是0则输出0
2. 以同样的方式提取偶数位置


检测num中某一位是0还是1的方式：
1. 将num向右移动i位
2. 将移完位之后的结果与1按位与，如果：
结果是0，则第i个比特位是0
结果是非0，则第i个比特位是1
*/
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}

//使用指针打印数组内容
//
//作业内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数组。
//#include <stdio.h>
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int  arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}

//
//字符串逆序
//写一个函数，可以逆序一个字符串的内容。
//#include <stdio.h>
//#include <string.h>
//void String(char* str, int sz)
//{
//	for (int i = sz; i >= 0; i--)
//	{
//		printf("%c", *(str + i));
//	}
//}
//int main()
//{
//	char str[] = "hello world";
//	int sz = strlen(str);
//	String(str, sz);
//	return 0;
//}


//计算求和
//
//作业内容
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//
//int main()
//{
//	int x = 0, y = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("请输入，你要计算的a，和第几项：>\n");
//	scanf("%d%d", &x, &y);
//	for (int i = 0; i < y; i++)
//	{
//		tmp = tmp * 10 + x;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



/*
思路：
通过观察可以发现，该表达式的第i项中有i个a数字，因此：
假设第i项为temp，则第i+1项为temp*10+a
具体参考以下代码
*/
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i<n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
