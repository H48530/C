#define _CRT_SECURE_NO_WARNINGS 1
//1、请编程实现三角形的余弦定理，即：程序运行后，从控制台输入两个边长及夹角角度（单位为度），
//这三个量输入时用空格隔开，回车后，程序自动计算出三角形第三条边的长度。
//c^2= a^2+b^2-2*a*b*cos r
#include <stdio.h>
#include <math.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int o = 0;
	scanf("%d %d %d", &a, &b, &o);
	c = sqrt(a*a + b*b - (2 * a*b*cos(1.0*o)));
	//c = sqrt(pow(1.0*a, 2) + pow(1.0*b, 2) - 2 * a*b*cos(1.0*o));
	printf("%d\n", c);
	return 0;
}


