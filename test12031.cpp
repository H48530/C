//#define _CRT_SECURE_NO_WARNINGS 1

////�����ж�����
//
//#include<stdio.h>
//
//int IsLeapYear(int a)
//{
//	//�ж�����
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	int a = 1;
//	while (a)//����0����������
//	{
//		scanf("%d", &a);
//		if (IsLeapYear(a) == 1)
//		{
//			printf("%d�꣬������\n", a);
//		}
//		else
//		{
//			printf("%d�꣬��������\n", a);
//
//		}
//	}
//	return 0;
//}

//�����ж�����
//
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<stdio.h>
void PrimeNumber(int a)
{
	int flag = 0;
	for (int  i = 2; i <= a/2; i++)
	{
		if (a % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag==0)
	{
		printf("%d  ", a);
	}
}
int main()
{
	for (int  i = 101; i < 200; i+=2)
	{
		PrimeNumber(i);
	}
	return 0;
}

////������������
////ʵ��һ�������������������������ݡ�
//
//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	printf("num1=%d  num2=%d\n", num1, num2);
//	swap(&num1, &num2);//���ݵ�ַ������
//	printf("num1=%d  num2=%d\n", num1, num2);
//	return 0;
//}


//��ӡһ������ÿһλ
//
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//
//#include <stdio.h>
//void  Fun(int num)
//{
//	if (num > 9)//�������λ��
//	{
//		Fun(num / 10);//�ݹ����
//	}
//	printf("%d ", (num % 10));//ȡ��õ���λ
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Fun(num);
//
//	return 0;
//}
//void print(int n)
//{
//	if (n>9)//�жϳ���λ�Ƿ�������λ
//	{
//		print(n / 10);//һ������ÿ��һ��ʮ����ȥһλ
//	}
//	printf("%d ��, (n % 10));//ȡ��õ���λ
//}
//int main()
//{
//	int n = 0;
//	scanf(��%d", &n);
//		print(n);
//	return 0;
//}
