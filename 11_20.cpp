#define _CRT_SECURE_NO_WARNINGS 1

//����n�õ��׳�
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int n = 1;
//	printf("������һ������\n");
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		n = i*n;
//
//	}
//	printf("%d�Ľ׳��ǣ�%d\n",num ,n);
//	return 0;
//}
//��һ�����Ľ׳˺�
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	int n = 1;
//	printf("������һ������\n");
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		n *= i;
//		sum += n;
//	}
//	printf("%d�Ľ׳˺��ǣ�%d\n",num, sum);
//	return 0;
//}

//���庯���ķ�����n�Ľ׳�
//#include<stdio.h>
//int Fun(int a)
//{
//	int n = 1;
//	for (int i = 1; i <= a; i++)
//	{
//		n = i*n;
//	}
//	return n;
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ�����֣�\n");
//	scanf("%d", &num);
//	printf("%d�Ľ׳���:%d", num, Fun(num));
//	return 0;
//}
//
//#include<stdio.h>
//int Fun(int a)
//{
//	if (a > 1)
//	{
//		Fun(a - 1) * a;
//	}
//	else{
//		Fun(a) = 1;
//	}
//	return  Fun(a);
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ�����֣�\n");
//	scanf("%d", &num);
//	printf("%d�Ľ׳���:%d", num, Fun(num));
//	return 0;
//}

//��λ������
#include<stdio.h>
int main()
{
	int a = 2;
	int b = 0;
	int c = 0;
	//��a����һλ
	//a�Ķ�����      0000 0010
	//����һλ       0000 0100
	//�൱�����������ƶ�һλ������ĺͿճ����ĵط���0
	b = a << 1;
	printf("%d\n", b);
	//��a����һλ
	//a�Ķ�����      0000 0010
	//����һλ       0000 0001
	//�൱�����������ƶ�һλ������ĺͿճ����ĵط���0
	c= a >> 1;
	printf("%d\n",c);
	return 0;
}
//��λ��
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a&b);
//	return 0;
//}
//��λ��
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a|b);
//	return 0;
//}
////��λ���
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d\n", a ^ b);
//	return 0;
//}

//�ҳ�ֻ����һ�ε����� 
#include<stdio.h>
int main()
{
	

	int a[] = { 1, 2, 3, 8, 4, 3, 4, 2, 1 };
	int ret = 0;
	int sz = 0;
	sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		ret = ret ^ a[i];
	}
	printf("%d\n", ret);
	return 0;
}
