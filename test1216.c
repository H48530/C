#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ����
//#include <stdio.h>
//
//int main()
//{
//	int h = 0;
//	scanf("%d", &h);
//	//��ӡ�ϰ벿��
//	for (int i = 1; i < h; i++)
//	{
//		//��һ�пո�
//		for (int j = 1; j < h-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j < 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (int i = 1; i < h; i++)
//	{
//		//��һ�пո�
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j < 2 * (h -1- i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


#include <stdio.h>
void Func(int h)
{
	//��ӡ�ϰ벿��
	for (int i = 1; i < h; i++)
	{
		//��һ�пո�
		for (int j = 1; j < h - i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j < 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (int i = 1; i < h; i++)
	{
		//��һ�пո�
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j < 2 * (h - 1 - i); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int h = 0;
	scanf("%d", &h);
	Func(h);//���ú�����

	return 0;
}

/*
//˼·��
//��ϸ�۲�ͼ�Σ����Է��֣���ͼ�������ɿո��*���ղ�ͬ�����������ɵġ�
//�����ǣ�������ո񣬺����*��ÿ����
//�ո񣺴������£�һ�м���һ��
//*��2*i+1�ķ�ʽ����
//
//�����ǣ�������ո񣬺����*��ÿ����
//�ո񣺴������£�ÿ�ж�һ���ո�
//*�� �������£�����2*(line-1-i)-1�ķ�ʽ���٣����У�line��ʾ�ܹ��ж�����
//����������ʽ���������Ǻ��������еĿո��*�ֱ�������ɡ�
//*/

//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for (i = 0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i<line - 1; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}