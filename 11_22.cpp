#define _CRT_SECURE_NO_WARNINGS 1
//����쳲���������
//{0,1,1,2,3,5,8,13,...}����F(n=F(n-1)+F(n-2��
//ѭ����
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int c = 0;
//	printf("��������Ҫ����ڼ���쳲�������(����0)��\n");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("������һ������1����\n");
//	}
//	else if (n==1)
//	{
//		a = 0;
//		printf("쳲�������Ϊ��%d\n", a);
//	}
//	else if (n == 2)
//	{
//		a = 1;
//		printf("쳲�������Ϊ��%d\n", a);
//	}
//	else
//	{
//		int a = 0;
//		int b = 1;
//		
//		while (n > 2)
//		{			
//			c = a + b;
//			a = b;
//			b = c;	
//			n--;
//		}		
//	}
//	printf("쳲�������Ϊ��%d\n", c);
//	return 0;
//}
//�ǵݹ�ķ�����쳲���������
//#include<stdio.h>
//int Fib(int x)
//{
//	if (x == 1)//��x����1ʱ��ֱ�ӷ���0
//		return 0;
//	else if (x == 2)//��x����2ʱ��ֱ�ӷ���1
//		return 1;
//	else
//	{
//		int first = 0;//�����1��쳲�������Ϊ0
//		int second = 1;//�����2��쳲�������Ϊ0
//		int ret = 0;//����һ�����ν���ֵ
//		while (x>2)//��x����2��ʱ�����ѭ��
//		{
//			ret = first + second;
//			first= second;
//			second = ret;
//			x--;
//		}
//		return ret;//����ret��ֵ
//	}		
//}
//int main()
//{
//	int n = 0;
//	
//	printf("��������Ҫ����ڼ���쳲�������(����0)��\n");
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		printf("��%d��쳲�������Ϊ��%d\n",n, Fib(n));
//	}
//	else
//	{
//		printf("������һ������1����\n");
//	}	
//	return 0;
//}

////�ݹ�ķ�����Ʋ���������
//#include<stdio.h>
//int Fib(int x)
//{
//	if (x == 1)
//	{
//		return 0;//��һ��쳲�������Ϊ0
//	}
//		
//	else if (x == 2)
//	{
//		return 1;//�ڶ���쳲�������Ϊ1
//	}	
//	else
//	{
//		return Fib(x - 1) + Fib(x - 2);//�ӵ���������ʼ�ͻ�ȥ��Fib��2����Fib��1��
//		                               //���ϻ�ȥ��ֱ���ҵ�Ϊֹ
//	}	
//}
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ����ڼ���쳲�������(����0)��\n");
//	scanf("%d", &n);
//	if (n > 0)
//		{
//			printf("��%d��쳲�������Ϊ��%d\n",n, Fib(n));
//		}
//		else
//		{
//			printf("������һ������1����\n");
//		}	
//	return 0;
//}
//
//��Ʋ���������ǰ����ĺ�
//�ǵݹ鷽��
//#include<stdio.h>
//int FibSum(int x)
//{
//	if (x == 1)//ǰ1��ĺ�Ϊ0
//	{
//		return 0;
//	}
//	else if (x == 2)//ǰ2��ĺ�Ϊ1
//	{
//		return  1;
//	}
//	else
//	{
//		int first = 0;
//		int second = 1;
//		int sum = 1;//�ӵ�3�ʼ����ͣ�û�м�ǰ����ĺͣ�����sum��ʼ��Ϊ1
//		int ret = 0;
//		while (x > 2)
//		{
//			ret = first + second;
//			first = second;
//			second = ret;
//			sum += ret;//ÿ�������쳲�����������sum��
//			x--;
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int  n = 0;
//	printf("��������Ҫ��ǰ����ĺͣ�\n");
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		printf("ǰ%d��쳲��������ĺ�Ϊ��%d\n",n,FibSum(n));
//	}
//	else
//	{
//		printf("������һ������0����\n");
//	}
//	return 0;
//}

//��Ʋ���������ǰ����ĺ�
//�ݹ鷽��
#include<stdio.h>
int Fib(int x)
{
	if (x == 1)
	{
		return 0;
	}
	else if (x == 2)
	{
		return 1;
	}
	else
	{
		return  Fib(x-1) + Fib(x - 2);
		
	}

}
int main()
{
	int  n = 0;
	printf("��������Ҫ��ǰ����ĺͣ�\n");
	scanf("%d", &n);
	if (n > 0)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)//����forѭ�����
		{
			sum += Fib(i);

		}
		printf("ǰ%d��쳲��������ĺ�Ϊ��%d\n", n,sum );
	}
	else
	{
		printf("������һ������0����\n");
	}
	return 0;
}
