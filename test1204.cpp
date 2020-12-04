#define _CRT_SECURE_NO_WARNINGS 1

//编写函数，按顺序输出每一位

#include <stdio.h>
void  Fun(int num)
{
	if (num > 9)//如果是两位数
	{
		Fun(num / 10);//递归调用
	}
	printf("%d ", (num % 10));//取余得到个位
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	Fun(num);
	return 0; 
}