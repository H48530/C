#define _CRT_SECURE_NO_WARNINGS 1

////BC11 ѧ���ɼ����������
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	double c = 0, math = 0, english = 0;
//	scanf("%d;%lf,%lf,%lf", &num, &c, &math, &english);
//	printf("The each subject score of  No. %d is %lf, %lf, %lf.\n", num, c, math, english);
//	return 0;
//}
//
//
////��ӡ������
//#include<stdio.h>
//int main()
//{
//	char ch = '0';
//	scanf("%c", &ch);
//	printf("    %C\n", ch);
//	printf("   %C %c\n", ch, ch);
//	printf("  %C %c %c\n", ch, ch, ch);
//	printf(" %C %c %c %c\n", ch, ch, ch, ch);
//	printf("%c %c %c %c %c\n", ch, ch, ch, ch, ch);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int str[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int sz = sizeof(str) / sizeof(str[0]);
//	for (int i = 0; i<sz; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}

////�������ڵ��������
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int year = 0, mon = 0, day = 0;
//	scanf("%d", &num);
//	day = num % 100;
//	mon = num / 100 % 100;
//	year = num / 10000;
//	printf("year=%d\n", year);
//	printf("month=%02d\n", mon);
//	printf("date=%02d\n", day);
//	return 0;
//}
//���ո�ʽ���벢�������
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//����ַ���ascll��
//#include<stdio.h>
//int main()
//{
//	char ch='0';
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//	return 0;
//}
////������ʽ��ֵ
//#include<stdio.h>
//int main()
//{
//	int a = 40, c = 212;
//	printf("%d", (-8 + 22)*a - 10 + c / 2);
//	return 0;
//}
////����������
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d ", a / b);
//	printf("%d ", a%b);
//	return 0;
//}

//�������һ����λ��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b, c, d, e;
//	scanf("%d", &a);
//
//	b = a % 10;
//	c = a / 10 % 10;
//	d = a / 100 % 10;
//	e = a / 1000;
//	printf("%04d", b * 1000 + c * 100 + d * 10 + e);
//	return 0;
//}

//���������Ľϴ�ֵ
#include<stdio.h>
int Compare(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
		return b;
}
int main()
{
	int num1 = 0, num2 = 0;
	printf("�������������֣�\n");
	scanf("%d %d", &num1, &num2);
	printf("�������ֵĽϴ�ֵ��%d\n",Compare(num1, num2));
	return 0;
}

