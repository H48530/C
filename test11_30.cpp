#define _CRT_SECURE_NO_WARNINGS 1

////循环
////关机小程序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[10] = { 0 };
//	system("shutdown -s -t 60");//60秒关机，需要#include <stdlib.h>头文件
//	while (1)//死循环  只到输入，break跳出循环
//	{
//		printf("你的电脑将在60s后关机。如果输入：我是猪，则取消关机！\n请输入：\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)//比较两个字符串，如果相同返回0，需要头文件#include <string.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

////goto语句实现
////关机小程序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[10] = { 0 };
//	system("shutdown -s -t 60");//60秒关机，需要#include <stdlib.h>头文件
//	again:
//		printf("你的电脑将在60s后关机。如果输入：我是猪，则取消关机！\n请输入：\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0)//比较两个字符串，如果相同返回0，需要头文件#include <string.h>
//		{
//			system("shutdown -a");		
//		}
//		else
//		{
//			goto again;//跳转到again出，再次执行。
//		}
//	return 0;
//}

//goto语句真正适合的场景：
#include <stdio.h>

int main()
{
	for (int  i = 0; i < 100; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int  k = 0; k < 10; k++)
			{
				for (int l = 0; l < 10; l++)
				{
					printf("haha\n");
					if (i == 3)
					{
						goto again;
					}
				}

			}

		}
	}
again:
	printf("hello\n");
	return 0;
}