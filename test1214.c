#define _CRT_SECURE_NO_WARNINGS 1
//���������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
////������� : 7
//#include <stdio.h>
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int x = m ^ n;//���  ��ͬΪ0������Ϊ1
//	int count = 0;
//	while (x)//����x��1�ĸ�����Ϊ��ͬλ�õĸ���
//	{
//		count++;
//		x = x & (x - 1);
//	}
//	printf("%d\n",count);
//	return 0;
//}

//��ӡ���������Ƶ�����λ��ż��λ
//
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include <stdio.h>
int main()
{
	int x = 0;
	scanf("%d", &x);
	printf("ż��λ��");
	for (int i = 31; i >=1; i-=2)
	{
		printf("%d ", (x >> i) & 1);
	}
	printf("\n");
	printf("����λ��");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (x >> i) & 1);
	}
	printf("\n");
	return 0;
}
/*
˼·��
1. ��ȡ���е�����λ�������λ��1�����1����0�����0
2. ��ͬ���ķ�ʽ��ȡż��λ��


���num��ĳһλ��0����1�ķ�ʽ��
1. ��num�����ƶ�iλ
2. ������λ֮��Ľ����1��λ�룬�����
�����0�����i������λ��0
����Ƿ�0�����i������λ��1
*/
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}

//ʹ��ָ���ӡ��������
//
//��ҵ����
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//
//arr��һ������һά���顣
//#include <stdio.h>
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int  arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}

//
//�ַ�������
//дһ����������������һ���ַ��������ݡ�
//#include <stdio.h>
//#include <string.h>
//void String(char* str, int sz)
//{
//	for (int i = sz; i >= 0; i--)
//	{
//		printf("%c", *(str + i));
//	}
//}
//int main()
//{
//	char str[] = "hello world";
//	int sz = strlen(str);
//	String(str, sz);
//	return 0;
//}


//�������
//
//��ҵ����
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//
//int main()
//{
//	int x = 0, y = 0;
//	int sum = 0;
//	int tmp = 0;
//	printf("�����룬��Ҫ�����a���͵ڼ��>\n");
//	scanf("%d%d", &x, &y);
//	for (int i = 0; i < y; i++)
//	{
//		tmp = tmp * 10 + x;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



/*
˼·��
ͨ���۲���Է��֣��ñ��ʽ�ĵ�i������i��a���֣���ˣ�
�����i��Ϊtemp�����i+1��Ϊtemp*10+a
����ο����´���
*/
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i<n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
