#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdlib.h>//ͷ�ļ�����rand��srand����
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
//	srand((unsigned)time(NULL));//ѡȡ�����ļ�
//
//	for (i = 0; i<20; i++)
//
//	{
//
//		k = rand() % 100;//%100����������ķ�Χ
//
//		printf("k=%d\n", k);//��������
//
//	}
//
//}
//#include <stdio.h>
////
////�žų˷���
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


////���ֲ��ң��۰����
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//		printf("�ҵ��ˣ��±�Ϊ%d\n", k);
//	}
//	else
//	{
//		printf("û�ҵ���\n");
//	}
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//20��    99��2��9
//#include<stdio.h>
//int main()
//{
//
//	int count = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 )//��λΪ9  
//		{
//			count++; 
//		}
//		if (i / 10 == 9)//ʮλΪ9
//		{
//			count++;
//		}
//	}
//	printf("1-100�г�����9�ĸ���Ϊ��%d\n", count);
//	return 0;
//}
//������ͣ�
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//�����ֵ
//��10 �����������ֵ
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
//	printf("������10�����֣�\n");
//	for (int  i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	fun(arr,sz);
//	printf("�����Ϊ��%d\n", arr[0]);
//	return 0;
//}
