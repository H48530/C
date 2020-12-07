#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘数组
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int  i = 0; i < ROW; i++)
	{
		for (int  j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
//   |   |   
//---|---|---
//   |   |
//---|---|--- 
//   |   |  
void DisplayBroad(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int  j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);	
			
			if (j<COL-1)
			{
				printf("|");
			}			
		}		
		printf("\n");
		if (i < ROW - 1)
		{
			for (int j = 0; j < COL ; j++)
			{
				printf("---");
				if (j<COL - 1)
				{
					printf("|");
				}				
			}
			printf("\n");
		}			
	}
}
//用户下棋
//用户下棋，将所在棋子修改为‘P'
void PeoplePlay(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋：\n");
	int x = 0, y = 0;
	while (1)
	{
		printf("请输入你要下的坐标：>\n");
		scanf("%d %d", &x, &y);
		if ((x - 1) >= ROW || (x - 1) < 0 || (y - 1) < 0 || (y - 1) >= COL)
		{
			printf("输入非法，请重新输入!\n");
		}
		else if (board[x-1][y-1] != ' ')
		{
			printf("该坐标已有棋子！\n");
		}
		else
		{
			board[x-1][y-1] = 'P';
			break;
		}		
	}	
}
//电脑下棋
//电脑下棋，将所在棋子修改为'C'
void ComputerPlay(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋：>\n");
	while (1)
	{
		int randx = rand() % ROW;
		int randy = rand() % COL;
		
		if (board[randx][randy] != ' ')
		{
			continue;
		}
		else
		{
			board[randx][randy] = 'C';
			break;
		}
	}
}
//判断是否输赢，如果用户赢，返回'P',电脑赢，返回'C'，平局返回'Q',继续为'L'

int IsFull(char board[ROW][COL], int row, int col)//返回1，表示棋盘满了，0表示还没满
{
	for (int i = 0; i < ROW; i++)
	{
		for (int  j = 0; j <COL; j++)
		{
			if (board[i][j]==' ' )
			{
				return 0;
			}
			
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断横三行
	for (int  i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断竖三列
	for (int j = 0; j < COL; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//斜着
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	else
	{
		return 'L';
	}
}
