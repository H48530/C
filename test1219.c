#define _CRT_SECURE_NO_WARNINGS 1
//��ӡˮ�ɻ���
//
//���0��100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//
//#include <stdio.h>
//#include <math.h> 
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	//������Щ��
//	for (int i = 0; i < input; i++)
//	{
//		//���������λ��
//		int n = i;
//		int count = 1;
//		while (n > 9)
//		{
//			count++;
//			n /= 10;			
//		}
//		//���
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			int a = m % 10;
//			sum += (int)pow(a, count);
//			m /= 10;
//		}
//		//�ж��Ƿ����
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}



#include <stdio.h>
#include <math.h> 
int main()
{
	int input1 = 0;
	int input2 = 0;
	scanf("%d%d", &input1,&input2);
	//������Щ��
	for (int i = input1; i < input2; i++)
	{
		//���������λ��
		int n = i;
		int count = 1;
		while (n > 9)
		{
			count++;
			n /= 10;
		}
		//���
		int m = i;
		int sum = 0;
		while (m)
		{
			int a = m % 10;
			sum += (int)pow(a, count);
			m /= 10;
		}
		//�ж��Ƿ����
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}



/*
˼·��
����Ĺؼ�����ֻҪ֪���ж�һ�������Ƿ�Ϊˮ�ɻ����ķ�ʽ�������ӭ�ж��⡣�ٶ�����һ������data�������ⷽʽ���£�
1. ��ȡdata�Ǽ�λ��
2. ��ȡdata��ÿ��λ���ϵ����ݣ�����������������
3. ��data��ÿ��λ�ϵ��������������ɺ��ڼ�������Ƿ���data��ȼ��ɣ�
��ȣ���Ϊˮ�ɻ���
���򣺲���
����ʵ�ֲο����´��롣
*/
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}