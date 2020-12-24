#define _CRT_SECURE_NO_WARNINGS 1

//浮点数和整型在内存中的区别
//#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float *p1 = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *p1);
//
//
//	*p1 = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *p1);
//	return 0;
//
//}


#include <stdio.h>
int main()
{
	int m = 20;
	float n = 20.25;
	printf("%d\n", m);
	printf("%f\n", n);

	return 0;
}
