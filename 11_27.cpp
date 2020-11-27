#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏的实现
//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("********    1 .play    ********\n");
//	printf("********    0 .exit    ********\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;//产生一个随机数用rand函数
//	int input = 0;
//	printf("%d\n", random_num);//为了方便猜，可以将这个随机数打印出来
//	while (1)
//	{
//		printf("请输入你猜的数字：\n");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input<random_num)
//		{
//			printf("猜小了\n");
//
//		}
//		else
//		{
//			printf("恭喜你，猜中了\n");
//		}		
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();//打印菜单
//		printf("请输入你需要的选项：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//调用game函数
//			break;
//		case 0:
//			printf("退出成功!\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);//输出为0，即终止循环
//
//	return 0;
//}


//猜数字游戏的实现
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("*******************************\n");
	printf("********    1 .play    ********\n");
	printf("********    0 .exit    ********\n");
	printf("*******************************\n");
}
void game()
{
	int random_num = rand() % 100 + 1;//产生一个随机数用rand函数
	int input = 0;
	printf("%d\n", random_num);//为了方便猜，可以将这个随机数打印出来
	while (1)
	{
		printf("请输入你猜的数字：\n");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input<random_num)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("恭喜你，猜中了\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请输入你需要的选项：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//调用game函数
			break;
		case 0:
			printf("退出成功!\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);//输出为0，即终止循环

	return 0;
}