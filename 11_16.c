#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("a=%d ", a);
	printf("b=%d\n", b);
	////���õ���������temp
	//int temp = 0;
	//
	//temp = a;
	//a = b;
	//b = temp;
	//printf("a=%d ", a);
	//printf("b=%d\n", b);
	//return 0;
	//����ȡ�������� ������������
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a=%d ", a);
	//printf("b=%d\n", b);
	//return 0;


	//3�Ķ����ơ���011
	//5�Ķ����ơ���101
	//��� ^ ��ͬΪ0������Ϊ1��
	a = a^b;//110
	b = a^b;//101
	a = a^b;//011
	printf("a=%d ", a);
	printf("b=%d\n", b);
	return 0;
}