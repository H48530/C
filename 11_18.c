#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));//char的长度为1个字节
//	printf("%d\n",sizeof(int));//int的长度是4个字节
//	printf("%d\n", sizeof(float));//float的长度是4个字节
//	printf("%d\n", sizeof(double));//double的长度是8个字节

//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16   是数组的长度 单位字节
//	printf("%d\n", sizeof(a+0));//4   是首元素的地址 是4个字节
//	printf("%d\n", sizeof(*a));//4		是首元素的地址 是4个字节
//	printf("%d\n", sizeof(a+1)); //4	是第二个元素的地址 是4个字节
//	printf("%d\n", sizeof(a[1]));//4	是第二个元素的长度，是4个字节
//	printf("%d\n", sizeof(&a));//4		是首元素的地址，是4个字节
//	printf("%d\n", sizeof(*&a));//16	指针解应用指向首元素地址表示整个数组，是16个字节
//	printf("%d\n", sizeof(&a[0]));//4	是首元素的地址 是4个字节
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//整个数组的大小  6个字节
//	printf("%d\n", sizeof(arr + 0));//首元素的地址 地址是4个字节  
//	printf("%d\n",sizeof( &arr));//首元素的地址   4
//	printf("%d\n", sizeof(&arr+1));//表示跳过这个数组，但是还是表示地址，所以4字节
//	printf("%d\n", sizeof(&arr[0] + 1));//表示第二个元素的地址 4字节
//	printf("***************************\n");
//	printf("%d\n", strlen(arr));  //随机值 没有'\0'
//	printf("%d\n", strlen(arr+0));//随机值
////	printf("%d\n", strlen(*arr));  //err 因为找的是首元素的地址找到首元素'a'是97，出现错误、、
////	printf("%d\n", strlen(arr[1]));//err 是第二个元素'b'
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值-6   跳过这个数组开始找
//	printf("%d\n", strlen(&arr[0]+1));//随机值-1   从第二个元素开始找
//	return 0;
//}


#include<stdio.h>
#include<string.h>
int main()
{

	char arr[] = "abcdef";//这种初始化默认后面有一个'\0'
	printf("%d\n", sizeof(arr));//整个数组的大小  7个字节 (包括\0)
	printf("%d\n", sizeof(arr + 0));//首元素的地址 地址是4个字节  
	printf("%d\n", sizeof(&arr));//首元素的地址   4
	printf("%d\n", sizeof(&arr + 1));//表示跳过这个数组，但是还是表示地址，所以4字节
	printf("%d\n", sizeof(&arr[0] + 1));//表示第二个元素的地址 4字节
	printf("***************************\n");
	printf("%d\n", strlen(arr));  //6  整个数组的大小 
	printf("%d\n", strlen(arr + 0));//6 整个数组的大小 
	//	printf("%d\n", strlen(*arr));  //err 因为找的是首元素的地址找到首元素'a'是97，出现错误、、
	//	printf("%d\n", strlen(arr[1]));//err 是第二个元素'b'
	printf("%d\n", strlen(&arr));//6    整个数组
	printf("%d\n", strlen(&arr + 1));//随机值   跳过这个数组开始找
	printf("%d\n", strlen(&arr[0] + 1));//5   从第二个元素开始找
	return 0;
}