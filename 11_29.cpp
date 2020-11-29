#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdlib.h>//头文件包含rand和srand函数
//
//#include<stdio.h>
//
//#include<time.h>
//
//void main()
//
//{
//
//	int i, k;
//	srand((unsigned)time(NULL));//选取种子文件
//
//	for (i = 0; i<20; i++)
//
//	{
//
//		k = rand() % 100;//%100控制随机数的范围
//
//		printf("k=%d\n", k);//输出随机数
//
//	}
//
//}
//#include <stdio.h>
////
////九九乘法表
//int main()
//{
//	for (int i = 1; i <=9 ; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d =%2d  ", j, i, i*j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


////二分查找，折半查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 7;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			break;
//		}		
//	}
//	if (left <= right)
//	{
//		printf("找到了，下标为%d\n", k);
//	}
//	else
//	{
//		printf("没找到！\n");
//	}
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//20个    99算2个9
//#include<stdio.h>
//int main()
//{
//
//	int count = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 )//个位为9  
//		{
//			count++; 
//		}
//		if (i / 10 == 9)//十位为9
//		{
//			count++;
//		}
//	}
//	printf("1-100中出现了9的个数为：%d\n", count);
//	return 0;
//}
//分数求和：
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include<stdio.h>
int main()
{
	double ret1 = 0, ret2 = 0;
	for (int  i = 1; i <= 100; i+=2)
	{
		ret1 += 1.0 / i;
	}
	for (int  i = 2; i <= 100; i+= 2)
	{
		ret2 += 1.0 / i;
	}
	double sum = ret1 - ret2;
	printf("%lf\n", sum);
	return 0;
}

//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//求最大值
//求10 个整数中最大值
//#include<stdio.h>
//void  fun(int arr[],int sz)
//{
//	int i=0, j=0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int  j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//		
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入10个数字：\n");
//	for (int  i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	fun(arr,sz);
//	printf("最大数为：%d\n", arr[0]);
//	return 0;
//}
