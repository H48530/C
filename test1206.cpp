#define _CRT_SECURE_NO_WARNINGS 1
//strlen���÷�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello world";//Ĭ�ϴ���'\0'
//	char arr1[] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));//���ֵ
//	return 0;
//}

//ģ��ʵ��strlen���ַ�������
#include <stdio.h>
#include <string.h>
int MyStrlen(const char* arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + MyStrlen(arr + 1);
	}
}

int main()
{
	char arr[] = "hello world";//Ĭ�ϴ���'\0'
	char arr1[] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
	printf("%d\n", MyStrlen(arr));
	printf("%d\n", MyStrlen(arr1));
	return 0;
}