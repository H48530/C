#define _CRT_SECURE_NO_WARNINGS 1
//strlen的用法
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello world";//默认带有'\0'
//	char arr1[] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));//随机值
//	return 0;
//}

//模拟实现strlen求字符串长度
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
	char arr[] = "hello world";//默认带有'\0'
	char arr1[] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
	printf("%d\n", MyStrlen(arr));
	printf("%d\n", MyStrlen(arr1));
	return 0;
}