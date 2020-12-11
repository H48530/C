//冒泡排序
//实现一个对整形数组的冒泡排序
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 8, 9, 4, 3, 6, 5, 7, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz-1; i++)
//	{
//		for (int j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]<arr[j+1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
////优化版
//#include <stdio.h>
//void sort(int* arr, int sz)
//{
//	int flag = 0;//定义个标志，在交换的时候修改，没有交换说明有序
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			flag = 1;
//			if (arr[j]<arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag==0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//int arr[] = { 1, 2, 8, 9, 4, 3, 6, 5, 7, 10 };
//	int arr[] = { 2, 1, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//交换两个变量

//异或法
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}