
////从大到小输出
////将三个数按从大到小输出
//#include<stdio.h>
////使用第三变量
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int temp = 0;
//	printf("请输入3个数字：");
//	scanf("%d%d%d", &a, &b, &c); 
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//}
//
//#include<stdio.h>
////不使用第三变量
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int temp = 0;
//	printf("请输入3个数字：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (a < c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b < c)
//	{
//		c = c + b;
//		b = c - b;
//		c = c - b;
//	}
//	printf("%d %d %d \n", a, b, c);
//	return 0;
//}


////打印3的倍数的数
////写一个代码打印1 - 100之间所有3的倍数的数字
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		++i;
//	}
//	return 0;
//}
