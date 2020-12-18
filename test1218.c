#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int* p = &num;//对于变量num，取地址将它存放在指针变量p中。
//
//	printf("%d\n", sizeof(p));
//	return 0;
//}


//指针加减整数
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* p1 = (char*)&n; //int的n强制转换为char型
//	int* p2 = &n;
//
//	printf("%p\n", &n);//%p打印地址
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	return 0;
//}


//指针解应用
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int * pi = &n;
//	*pc = 0;//解引用
//	*pi = 0;
//	return 0;
//}

//野指针

//指针未初始化
//#include <stdio.h>
//int main()
//{
//	int * p;//局部变量未初始化，默认随机值
//	*p = 20;
//	return 0;
//}
//指针访问越界
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0 };
//	int *p = arr;
//	for (int i = 0; i <= 11; i++)
//	{
//		//当指针指向范围外，p就是野指针
//		*(p + i) = i;
//	}
//	return 0;
//}

//二级指针
#include <stdio.h>
int main()
{
	int a = 120;
	int *p = &a;//存放a的地址
	int ** pp = &p;//存放一级指针p的地址
	int *** ppp = &pp;//存放二级指针pp的地址

	return 0;
}