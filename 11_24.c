#define _CRT_SECURE_NO_WARNINGS 1

//ð�����򷨣���һ������������������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };//����һ��arr���鲢�����ʼ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����鳤��
//	for (int i = 0; i < sz-1; i++)//��Ϊ�����±��0��ʼ������sz-1
//	{
//		for (int j = 0; j < sz-1-i; j++)//ð�������߹�i�˺�������Ѿ�������ˣ�����Ҫ����
//		{
//			if (arr[j]>arr[j + 1])//���������������ϴ�������λ��
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i <= sz-1; i++)//��ӡ����
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

////ͬ����������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//�ú���ʵ��ð������  ������
//#include<stdio.h>
////�����������������б���arr����Ԫ�صĵ�ַ�����鳤��
////���ݲ���ʱ��arr�޷������ݽ�ȥ��ֻ�ܴ�����Ԫ�صĵ�ַ
////��Ȼ�޷�����������������޷����������С������ֻ�ܽ������СszҲ���ݽ���
//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				//����������
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };//����һ��arr���鲢�����ʼ��
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����鳤��
//	BubbleSort(arr,sz);//�����������
//	for (int i = 0; i <= sz - 1; i++)//��ӡ����õ�����
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//ͬ��,����
//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

////����n�Ľ׳�
////whileѭ������n�Ľ׳�
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("��������Ҫ���������;\n");
//	scanf("%d", &num);
//	if (num==0)
//	{
//		ret == 1;
//		printf("�׳��ǣ�%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("������һ������0������\n");
//	}
//	else
//	{
//		while (num)
//		{
//			ret *= num;
//			num--;
//		}
//		printf("�׳��ǣ�%d\n",  ret);
//	}	
//	
//	return 0  ;
//}

//����2:
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	int i = 1;
//	printf("��������Ҫ���������(���ڵ���0������);\n");
//	scanf("%d", &num);
//	if (num==0)
//	{
//		ret == 1;
//		printf("%d�׳��ǣ�%d\n", num, ret);
//	}
//	else if (num<0)
//	{
//		printf("������һ������0������\n");
//	}
//	else
//	{
//		while (i<=num)
//		{
//			ret *= i;
//			i++;
//		}
//		printf("%d�׳��ǣ�%d\n", num, ret);
//	}
//	
//	
//	return 0;
//}

////forѭ��
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("��������Ҫ���������;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("�׳��ǣ�%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("������һ������0������\n");
//	}
//	else
//	{
//		for (int  i = 1; i <= num; i++)
//		{
//			ret *= i;
//		}
//		printf("%d�׳��ǣ�%d\n",num, ret);
//	}
//	
//	return 0;
//}

//
////do while
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("��������Ҫ���������;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("�׳��ǣ�%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("������һ������0������\n");
//	}
//	else
//	{
//		do
//		{
//			ret *= num;
//			num--;
//		} while (num);
//		printf("�׳��ǣ�%d\n",ret);
//	}
//	
//	return 0;
//}

////����
//#include<stdio.h>
//int Fac(int x)
//{
//	int ret = 1;
//	for (int  i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("��������Ҫ���������;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("�׳��ǣ�%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("������һ������0������\n");
//	}
//	else
//	{
//		printf("%d�׳��ǣ�%d\n",num,Fac(num));
//	}	
//	return 0;
//}


//�ݹ麯��
//#include<stdio.h>
//int Fac(int x)
//{
//	if (x==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*Fac(x - 1);
//	}
//	
//}
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("��������Ҫ���������;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("�׳��ǣ�%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("������һ������0������\n");
//	}
//	else
//	{
//		printf("%d�׳��ǣ�%d\n", num, Fac(num));
//	}
//	return 0;
//}

//��һԪ���η�����Ľ�
//#include<stdio.h>
//#include<math.h>
//
//
//int main()
//{
//	int a = 0, b = 0, c = 0,d=0;
//	double x1 = 0, x2 = 0;
//	printf("������һԪ���η������a,b,c��ֵ��\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a==0)
//	{
//		if (b == 0)
//		{
//			if (c==0)
//			{
//				printf("������������\n");
//			}
//			else
//			{
//				printf("�����޽�\n");
//
//			}
//			
//		}
//		else
//		{
//			x1 = x2 = -c / (double)b;//��Ϊx1,x2��double�͵ģ�����Ҫǿת
//			printf("���̵Ľ�Ϊ��x1=x2=%.2lf\n", x1);
//		}		
//	}
//	else
//	{
//		d = b*b - 4 * a*c;
//		if (d > 0)
//		{
//			//sqrt�ǿ�ƽ���������뿪��������Ҫ����#include<math.h>��ͷ�ļ�
//			x1 = (-b + sqrt(d)) / (2.0 * a);
//			x2 = (-b - sqrt(d)) / (2.0 * a);
//			printf("���̵Ľ�Ϊ��x1=%.2lf x2=%.2lf\n", x1, x2);
//		}
//		else if (d==0)
//		{
//			x1 = x2 = (-b) / (2.0 * a);//��Ҳ��ǿתΪ������
//			printf("���̵Ľ�Ϊ��x1=x2=%.2lf\n", x1);
//		}
//		else
//		{
//			printf("��ʵ��\n");
//		}	
//	}
//	return 0;
//}



#include<stdio.h>
#include<math.h>
int Fac(int a, int b, int c)
{
	double x1 = 0, x2 = 0;
	int  d = 0;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("������������\n");
			}
			else
			{
				printf("�����޽�\n");

			}

		}
		else
		{
			x1 = x2 = -c / (double)b;//��Ϊx1,x2��double�͵ģ�����Ҫǿת
			printf("���̵Ľ�Ϊ��x1=x2=%.2lf\n", x1);
		}
	}
	else
	{
		d = b*b - 4 * a*c;
		if (d > 0)
		{
			//sqrt�ǿ�ƽ���������뿪��������Ҫ����#include<math.h>��ͷ�ļ�
			x1 = (-b + sqrt(d)) / (2.0 * a);
			x2 = (-b - sqrt(d)) / (2.0 * a);
			printf("���̵Ľ�Ϊ��x1=%.2lf x2=%.2lf\n", x1, x2);
		}
		else if (d == 0)
		{
			x1 = x2 = (-b) / (2.0 * a);//��Ҳ��ǿתΪ������
			printf("���̵Ľ�Ϊ��x1=x2=%.2lf\n", x1);
		}
		else
		{
			printf("��ʵ��\n");
		}
	}
}


int main()
{
	int a = 0, b = 0, c = 0;
	
	printf("������һԪ���η������a,b,c��ֵ��\n");
	scanf("%d%d%d", &a, &b, &c);
	Fac(a, b, c);
	return 0;
}