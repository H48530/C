
//const的用法

//const的常变量不能做数组的参数
//#include <stdio.h>
//int main()
//{
//	const int n = 5;
//	int a[n];//error
//
//	return 0;
//}

//不使用const的情况
//#include <stdio.h>
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int * p = &n;
//	*p = 20;
//	p = &m;
//}
//int main()
//{
//	test1();
//
//	return 0;
//}

//使用const修饰，*左边的情况
//即，const修饰指针变量本身
//#include <stdio.h>
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int * p = &n;
//	*p = 20;//error
//	p = &m;
//}
//int main()
//{
//	test2();
//
//	return 0;
//}



//使用const修饰，*右边的情况
//即，const修饰指针变量指向的内容
//#include <stdio.h>
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int * const p = &n;
//	*p = 20;
//	p = &m;//error
//}
//int main()
//{
//	test3();
//
//	return 0;
//}

//使用const修饰*左边和右边，
//即，const修饰指针变量本身和指针变量指向的内容
#include <stdio.h>
void test3()
{
	int n = 10;
	int m = 20;
	const int * const p = &n;
	*p = 20;//error
	p = &m;//error
}
int main()
{
	test3();

	return 0;
}