#define _CRT_SECURE_NO_WARNINGS 1
////�ֲ�����
//#include<stdio.h>
//int main()
//{ 
//	int a;//����ֲ�����a
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int i=1;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}


//��̬�ֲ�����
//#include<stdio.h>
//int main()
//{
//	static int a;//��̬�ֲ�����a
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//void test()
//{
//	static int i = 0;//��̬�ֲ�����
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int i = 1;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

////ȫ�ֱ���
//#include<stdio.h>
//int num = 10;//����ȫ�ֱ���num
//int main()
//{ 
//	int a=0;//����ֲ�����a
//	printf("%d\n", num);
//	return 0;
//}

////ȫ�ֱ���
//#include<stdio.h>
//int num = 10;//����ȫ�ֱ���num
//extern n;//���߱��������ⲿ����n
//int main()
//{
//	printf("%d\n", n);
//	printf("%d\n", num);
//	return 0;
//}
//����
#include<stdio.h>
int Add(int x,int y)//����һ���ӷ�����
{
	return x + y;//����x+y��ֵ
}
int main()
{
	printf("%d\n",Add(2, 3));
	return 0;
}