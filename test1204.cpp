#define _CRT_SECURE_NO_WARNINGS 1

//��д��������˳�����ÿһλ

#include <stdio.h>
void  Fun(int num)
{
	if (num > 9)//�������λ��
	{
		Fun(num / 10);//�ݹ����
	}
	printf("%d ", (num % 10));//ȡ��õ���λ
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	Fun(num);
	return 0; 
}