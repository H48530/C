#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//测试

void menu()//菜单
{
	printf("###########################################\n");
	printf("############    1.  玩游戏    #############\n");
	printf("############    2.   退出     #############\n");
	printf("###########################################\n");
}

//游戏函数
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	//初始化数组棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBroad(board, ROW, COL);
	while (1)
	{
		//下棋
		//用户下棋
		//用户下棋，将所在棋子修改为‘P'
		PeoplePlay(board, ROW, COL);
		DisplayBroad(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
		//电脑下棋
		ComputerPlay(board, ROW, COL);
		DisplayBroad(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		//判断是否输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
	}
	if (ret =='P')
	{
		printf("用户赢\n");
		
	}
	else if (ret=='C')
	{
		printf("电脑赢了\n");
	}
	else if (ret == 'Q')
	{
		printf("平局！\n");
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:

			break;

		default:
			printf("输入非法，请重新输入!\n");
			break;
		}

	} while (input!=2);
	

	return 0;
}