#define _CRT_SECURE_NO_WARNINGS 1
//猴子吃桃子问题

////迭代
//#include <stdio.h>
//
//int main()
//{
//	int sum = 1;//最后一天剩1个
//	for (int i = 1; i < 7; i++)//往前算6天
//	{
//		sum = (sum + 1) * 2;//向前迭代，每次加一乘以2
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//递归
//
#include <stdio.h>
int func(int day)
{
	int a = 1;
	if (day == 7)//当第7天时候，为1
	{
		a = 1;
	}
	else
	{
		a = ((func(day + 1) +1 )*2);//递归调用
	}
	return a;
}

int main()
{
	int day = 1;
	int sum = 0;
	sum = func(day);
	printf("%d\n", sum);
	return 0;
}