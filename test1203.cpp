#define _CRT_SECURE_NO_WARNINGS 1
////дһ���������ҳ������������ֵ
//#include<stdio.h>
//int max(int a, int b)
//{
//	return a > b ? a : b;//��Ŀ������
//	                     //a����b������ǣ�����a�����򷵻�b
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	printf("��������������\n");
//	scanf("%d %d", &num1, &num2);
//	printf("%d\n", max(num1, num2));
//
//	return 0;
//}

//
//#include <stdio.h>
//
//void swap(int x, int y)//������������������������
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a, b, c;
//	printf("������3�����֣�\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)//��֤a��b�У�a��С
//	{
//		swap(a, b);
//	}
//	if (b > c)//��֤b��c�У�b��С
//	{
//		swap(b, c);
//	}
//	if (a > b)//��֤a��b�У�a��С
//	{
//		swap(a, b);
//	}
//
//	printf("�������ְ����������\n%d %d %d\n", a, b, c);
//	return 0;
//}

#include <stdio.h>

void swap(int* px, int* py)//������������������������
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a, b, c;
	printf("������3�����֣�\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)//��֤a��b�У�a��С
	{
		swap(&a, &b);
	}
	if (b > c)//��֤b��c�У�b��С
	{
		swap(&b, &c);
	}
	if (a > b)//��֤a��b�У�a��С
	{
		swap(&a, &b);
	}

	printf("�������ְ����������\n%d %d %d\n", a, b, c);
	return 0;
}