#define _CRT_SECURE_NO_WARNINGS 1
//
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#include <stdio.h>
//
//void func(int num)
//{
//	for (int  i = 1; i <= num; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d * %2d = %4d  ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������\n");
//	scanf("%d", &num);
//	func(num);
//
//	return 0;
//}
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
////�ǵݹ�
//#include <stdio.h>
//int Fact(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n ; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
////�ݹ�
//#include <stdio.h>
//int Fact(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fact(n - 1);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
//#include <stdio.h>
//int my_strlen( char * arr)
//{
//	//ģ��ʵ��strlen����
//	int count = 0;//����һ��������
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char* arr = "hello world";
//	int ret = my_strlen( arr);
//	printf("%d\n", ret);
//	return 0;
//}
//�ݹ�
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//int main()
//{
//
//	char* arr = "hello world";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//
//}



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
//
//#include <stdio.h>
//int DigitSum(int n)
//{
//	static int sum = 0;//
//	if (n > 9)
//	{
//		DigitSum(n / 10);//�ݹ����
//	}
//
//
//	return sum += n % 10;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",DigitSum(n));
//	return 0; 
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//#include <stdio.h>
//#include <math.h>
//int Func(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	return pow(1.0*n, k - 1)*n;
//	
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//    scanf("%d%d", &n,&k);
//	printf("%d\n",Func(n,k));
//	return 0;
//}


/*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

ʵ�֣��������ַ����е��ַ��������С�

Ҫ�󣺲���ʹ��C�������е��ַ�������������*/

//
//#include <stdio.h>
//#include<string>
//
//void reverse_string1(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char str[] = "hello world";
//	reverse_string1(str);
//	printf("%s\n", str);
//	return 0;
//}

//void reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}
//
//
//
///*
//�ݹ鷽ʽ��
//�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��
//1. ����a��g��
//2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
//*/
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}

//�ݹ�
#include <stdio.h>
#include<string>

void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);

	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}


int main()
{
	char str[] = "hello world";
	reverse_string(str);
	printf("%s\n", str);
	return 0;
}