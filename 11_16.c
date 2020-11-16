#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("a=%d ", a);
	printf("b=%d\n", b);
	////采用第三个变量temp
	//int temp = 0;
	//
	//temp = a;
	//a = b;
	//b = temp;
	//printf("a=%d ", a);
	//printf("b=%d\n", b);
	//return 0;
	//不采取第三变量 交换两个整数
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a=%d ", a);
	//printf("b=%d\n", b);
	//return 0;


	//3的二进制——011
	//5的二进制——101
	//异或 ^ 相同为0，相异为1；
	a = a^b;//110
	b = a^b;//101
	a = a^b;//011
	printf("a=%d ", a);
	printf("b=%d\n", b);
	return 0;
}