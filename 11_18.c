#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//char�ĳ���Ϊ1���ֽ�
//	printf("%d\n",sizeof(int));//int�ĳ�����4���ֽ�
//	printf("%d\n", sizeof(float));//float�ĳ�����4���ֽ�
//	printf("%d\n", sizeof(double));//double�ĳ�����8���ֽ�

//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16   ������ĳ��� ��λ�ֽ�
//	printf("%d\n", sizeof(a+0));//4   ����Ԫ�صĵ�ַ ��4���ֽ�
//	printf("%d\n", sizeof(*a));//4		����Ԫ�صĵ�ַ ��4���ֽ�
//	printf("%d\n", sizeof(a+1)); //4	�ǵڶ���Ԫ�صĵ�ַ ��4���ֽ�
//	printf("%d\n", sizeof(a[1]));//4	�ǵڶ���Ԫ�صĳ��ȣ���4���ֽ�
//	printf("%d\n", sizeof(&a));//4		����Ԫ�صĵ�ַ����4���ֽ�
//	printf("%d\n", sizeof(*&a));//16	ָ���Ӧ��ָ����Ԫ�ص�ַ��ʾ�������飬��16���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4	����Ԫ�صĵ�ַ ��4���ֽ�
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//��������Ĵ�С  6���ֽ�
//	printf("%d\n", sizeof(arr + 0));//��Ԫ�صĵ�ַ ��ַ��4���ֽ�  
//	printf("%d\n",sizeof( &arr));//��Ԫ�صĵ�ַ   4
//	printf("%d\n", sizeof(&arr+1));//��ʾ����������飬���ǻ��Ǳ�ʾ��ַ������4�ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//��ʾ�ڶ���Ԫ�صĵ�ַ 4�ֽ�
//	printf("***************************\n");
//	printf("%d\n", strlen(arr));  //���ֵ û��'\0'
//	printf("%d\n", strlen(arr+0));//���ֵ
////	printf("%d\n", strlen(*arr));  //err ��Ϊ�ҵ�����Ԫ�صĵ�ַ�ҵ���Ԫ��'a'��97�����ִ��󡢡�
////	printf("%d\n", strlen(arr[1]));//err �ǵڶ���Ԫ��'b'
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr+1));//���ֵ-6   ����������鿪ʼ��
//	printf("%d\n", strlen(&arr[0]+1));//���ֵ-1   �ӵڶ���Ԫ�ؿ�ʼ��
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{

	char arr[] = "abcdef";//���ֳ�ʼ��Ĭ�Ϻ�����һ��'\0'
	printf("%d\n", sizeof(arr));//��������Ĵ�С  7���ֽ� (����\0)
	printf("%d\n", sizeof(arr + 0));//��Ԫ�صĵ�ַ ��ַ��4���ֽ�  
	printf("%d\n", sizeof(&arr));//��Ԫ�صĵ�ַ   4
	printf("%d\n", sizeof(&arr + 1));//��ʾ����������飬���ǻ��Ǳ�ʾ��ַ������4�ֽ�
	printf("%d\n", sizeof(&arr[0] + 1));//��ʾ�ڶ���Ԫ�صĵ�ַ 4�ֽ�
	printf("***************************\n");
	printf("%d\n", strlen(arr));  //6  ��������Ĵ�С 
	printf("%d\n", strlen(arr + 0));//6 ��������Ĵ�С 
	//	printf("%d\n", strlen(*arr));  //err ��Ϊ�ҵ�����Ԫ�صĵ�ַ�ҵ���Ԫ��'a'��97�����ִ��󡢡�
	//	printf("%d\n", strlen(arr[1]));//err �ǵڶ���Ԫ��'b'
	printf("%d\n", strlen(&arr));//6    ��������
	printf("%d\n", strlen(&arr + 1));//���ֵ   ����������鿪ʼ��
	printf("%d\n", strlen(&arr[0] + 1));//5   �ӵڶ���Ԫ�ؿ�ʼ��
	return 0;
}