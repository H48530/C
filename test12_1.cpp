#define _CRT_SECURE_NO_WARNINGS 1
////continue ��while�е��÷�
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//		{
//			++i;
//			continue;
//		}
//		printf("%d ", i);
//		++i;
//	}
//	printf("\n");
//	return 0;
//}

//continue ��forѭ���е�ʹ��

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (int  i = 1; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}



#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		{
			continue;
			
		}
		putchar(ch);
	}
	return 0;
}