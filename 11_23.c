#define _CRT_SECURE_NO_WARNINGS 1
//折半查找法
//
////实现在主函数内部
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0] - 1);//数组的下标是从0开始，所以要数组长度-1
//	int key = 0;
//	int mid = 0;
//	printf("请输入你要查找的数字（1—10）：\n");
//	scanf("%d", &key);
//	while (left <= right)//当左下标小于等于右边进入循环
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)//循环结束后，当左下标<=右下标的时候，说明找到了
//		printf("找到了，数字%d的下标是%d\n", arr[mid],mid);
//	else//当左>右的时候，证明已经找了一遍，则数组中没有要找的元素
//		printf("找不到%d\n",key);
//	return 0;
//}

//折半查找函数实现
#include<stdio.h>

int BinSearch(int arr[], int left, int right, int key)//折半查找函数，参数列表 接收数组，左右下标，要查找到的值
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;//arr[mid]=key 时返回mid下标
		}
	}
	return -1;//循环结束还没有找到目标值，返回-1

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int  left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	printf("请输入一个数字（1—10）：\n");
	scanf("%d", &key);
	int k = BinSearch(arr, left, right, key);//调用函数
	if (k == -1)//判断k的值 检测是否找到
	{
		printf("找不到%d\n",key);
	}
	else
	{
		printf("找到了，数字%d的下标是%d\n", key, k);
	}
	return 0;
}


