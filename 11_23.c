#define _CRT_SECURE_NO_WARNINGS 1
//�۰���ҷ�
//
////ʵ�����������ڲ�
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0] - 1);//������±��Ǵ�0��ʼ������Ҫ���鳤��-1
//	int key = 0;
//	int mid = 0;
//	printf("��������Ҫ���ҵ����֣�1��10����\n");
//	scanf("%d", &key);
//	while (left <= right)//�����±�С�ڵ����ұ߽���ѭ��
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
//	if (left <= right)//ѭ�������󣬵����±�<=���±��ʱ��˵���ҵ���
//		printf("�ҵ��ˣ�����%d���±���%d\n", arr[mid],mid);
//	else//����>�ҵ�ʱ��֤���Ѿ�����һ�飬��������û��Ҫ�ҵ�Ԫ��
//		printf("�Ҳ���%d\n",key);
//	return 0;
//}

//�۰���Һ���ʵ��
#include<stdio.h>

int BinSearch(int arr[], int left, int right, int key)//�۰���Һ����������б� �������飬�����±꣬Ҫ���ҵ���ֵ
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
			return mid;//arr[mid]=key ʱ����mid�±�
		}
	}
	return -1;//ѭ��������û���ҵ�Ŀ��ֵ������-1

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int  left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	printf("������һ�����֣�1��10����\n");
	scanf("%d", &key);
	int k = BinSearch(arr, left, right, key);//���ú���
	if (k == -1)//�ж�k��ֵ ����Ƿ��ҵ�
	{
		printf("�Ҳ���%d\n",key);
	}
	else
	{
		printf("�ҵ��ˣ�����%d���±���%d\n", key, k);
	}
	return 0;
}


