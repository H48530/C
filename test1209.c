#define _CRT_SECURE_NO_WARNINGS 1
//交换数组
//
//作业内容
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//#include <stdio.h>
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int  i = 0; i <= sz-1; i++)
//	{
//		int tmp;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int  i = 0; i <= sz-1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


//数组操作
//
//作业内容
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

#include<stdio.h>
void init(int arr[], int sz)//初始化数组
{
	for (int i = 0; i < sz; i++)//for循环遍历数组，将数组初始化为0
	{
		arr[i]= 0;
	}
}
void print(int arr[],int sz)//打印数组
{

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//打印每一个元素
	}
	printf("\n");
}
void reverse(int arr[], int sz)//逆置数组
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int tmp;//引用第三变量，逆置数组
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr2[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	init(arr1,sz);
	print(arr1, sz);
	print(arr2, sz);
	reverse(arr2, sz);
	print(arr2, sz);
	return 0;
}


//
//
//void Init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}