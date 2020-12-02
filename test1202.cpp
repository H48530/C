#define _CRT_SECURE_NO_WARNINGS 1
//编写代码，演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr2) - 1;//strlen是求数组长度，在string.h中，  数组的下标是从0开始，所以-1.
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
////while循环
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//sleep()函数
//int  main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		Sleep(1000);//屏幕休眠1秒
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//

#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep()函数
int  main()
{
	char arr1[] = "hello world";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr2) - 1;

	for (left = 0, right = strlen(arr2) - 1;
		left <= right;
		left++, right--)
		//循环条件
	{
		Sleep(1000);//屏幕休眠1秒
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
	}

	return 0;
}
//

