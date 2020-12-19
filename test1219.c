#define _CRT_SECURE_NO_WARNINGS 1
//打印水仙花数
//
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//
//#include <stdio.h>
//#include <math.h> 
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	//遍历这些数
//	for (int i = 0; i < input; i++)
//	{
//		//求这个数的位数
//		int n = i;
//		int count = 1;
//		while (n > 9)
//		{
//			count++;
//			n /= 10;			
//		}
//		//求和
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			int a = m % 10;
//			sum += (int)pow(a, count);
//			m /= 10;
//		}
//		//判断是否相等
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}



#include <stdio.h>
#include <math.h> 
int main()
{
	int input1 = 0;
	int input2 = 0;
	scanf("%d%d", &input1,&input2);
	//遍历这些数
	for (int i = input1; i < input2; i++)
	{
		//求这个数的位数
		int n = i;
		int count = 1;
		while (n > 9)
		{
			count++;
			n /= 10;
		}
		//求和
		int m = i;
		int sum = 0;
		while (m)
		{
			int a = m % 10;
			sum += (int)pow(a, count);
			m /= 10;
		}
		//判断是否相等
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}



/*
思路：
此题的关键在于只要知道判断一个数据是否为水仙花数的方式，问题就迎刃而解。假定给定一个数据data，具体检测方式如下：
1. 求取data是几位数
2. 获取data中每个位置上的数据，并对其进行立方求和
3. 对data中每个位上的数据立方求和完成后，在检测其结果是否与data相等即可，
相等：则为水仙花数
否则：不是
具体实现参考以下代码。
*/
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}