#define _CRT_SECURE_NO_WARNINGS 1
//���ӳ���������

////����
//#include <stdio.h>
//
//int main()
//{
//	int sum = 1;//���һ��ʣ1��
//	for (int i = 1; i < 7; i++)//��ǰ��6��
//	{
//		sum = (sum + 1) * 2;//��ǰ������ÿ�μ�һ����2
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//�ݹ�
//
#include <stdio.h>
int func(int day)
{
	int a = 1;
	if (day == 7)//����7��ʱ��Ϊ1
	{
		a = 1;
	}
	else
	{
		a = ((func(day + 1) +1 )*2);//�ݹ����
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