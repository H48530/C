#define _CRT_SECURE_NO_WARNINGS 1
//1������ʵ�������ε����Ҷ��������������к󣬴ӿ���̨���������߳����нǽǶȣ���λΪ�ȣ���
//������������ʱ�ÿո�������س��󣬳����Զ�����������ε������ߵĳ��ȡ�
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


