#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;//���ڱ���num��ȡ��ַ���������ָ�����p�С�
//
//	printf("%d\n", sizeof(p));
//	return 0;
//}


//ָ��Ӽ�����
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* p1 = (char*)&n; //int��nǿ��ת��Ϊchar��
//	int* p2 = &n;
//
//	printf("%p\n", &n);//%p��ӡ��ַ
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	return 0;
//}


//ָ���Ӧ��
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int * pi = &n;
//	*pc = 0;//������
//	*pi = 0;
//	return 0;
//}

//Ұָ��

//ָ��δ��ʼ��
//#include <stdio.h>
//int main()
//{
//	int * p;//�ֲ�����δ��ʼ����Ĭ�����ֵ
//	*p = 20;
//	return 0;
//}
//ָ�����Խ��
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0 };
//	int *p = arr;
//	for (int i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��Χ�⣬p����Ұָ��
//		*(p + i) = i;
//	}
//	return 0;
//}

//����ָ��
#include <stdio.h>
int main()
{
	int a = 120;
	int *p = &a;//���a�ĵ�ַ
	int ** pp = &p;//���һ��ָ��p�ĵ�ַ
	int *** ppp = &pp;//��Ŷ���ָ��pp�ĵ�ַ

	return 0;
}