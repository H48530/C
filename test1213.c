#define _CRT_SECURE_NO_WARNINGS 1
//前置++和--
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//先对a，进行自增，然后使用a，也就是表达式的值为a的自增值，为11
//	int x = ++a;
//	int b = 10;
//	//先对a，进行自减，然后使用a，也就是表达式的值为a的自减值，为11
//	int y = --b;
//	printf("%d\n", a);
//	printf("%d\n", x);
//	printf("%d\n", b);
//	printf("%d\n", y);
//	return 0;
//}
//
//后置++和--
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	//先对a，进行使用a，然后自增，也就是表达式的值为x=10,a=11;
//	int x = a++;
//	int b = 10;
//	//先对a，进行使用a，然后自减，也就是表达式的值为y=10,b=9
//	int y = b--;
//	printf("%d\n", a);
//	printf("%d\n", x);
//	printf("%d\n", b);
//	printf("%d\n", y);
//	return 0;
//}


//
//360曾经的笔试题：
#include <stdio.h>
 
int main()
{
	int  i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	i = a++ || ++b || d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);

	return 0;
}

//a++为后置++，先使用，再加1，
//所以a++哪里先取0，在 + 1，
//而在逻辑与中，只要有0，就为假，后面就不需要在走了
//程序默认后面不进行了。所以++b和d++都没有进行
//所以程序最后的结果应该是 1, 2, 3, 4


