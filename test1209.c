#define _CRT_SECURE_NO_WARNINGS 1
//��������
//
//��ҵ����
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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


//�������
//
//��ҵ����
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

#include<stdio.h>
void init(int arr[], int sz)//��ʼ������
{
	for (int i = 0; i < sz; i++)//forѭ���������飬�������ʼ��Ϊ0
	{
		arr[i]= 0;
	}
}
void print(int arr[],int sz)//��ӡ����
{

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//��ӡÿһ��Ԫ��
	}
	printf("\n");
}
void reverse(int arr[], int sz)//��������
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int tmp;//���õ�����������������
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