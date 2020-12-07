#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ����������
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
//��ӡ����
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
//�û�����
//�û����壬�����������޸�Ϊ��P'
void PeoplePlay(char board[ROW][COL], int row, int col)
{
	printf("������壺\n");
	int x = 0, y = 0;
	while (1)
	{
		printf("��������Ҫ�µ����꣺>\n");
		scanf("%d %d", &x, &y);
		if ((x - 1) >= ROW || (x - 1) < 0 || (y - 1) < 0 || (y - 1) >= COL)
		{
			printf("����Ƿ�������������!\n");
		}
		else if (board[x-1][y-1] != ' ')
		{
			printf("�������������ӣ�\n");
		}
		else
		{
			board[x-1][y-1] = 'P';
			break;
		}		
	}	
}
//��������
//�������壬�����������޸�Ϊ'C'
void ComputerPlay(char board[ROW][COL], int row, int col)
{
	printf("�������壺>\n");
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
//�ж��Ƿ���Ӯ������û�Ӯ������'P',����Ӯ������'C'��ƽ�ַ���'Q',����Ϊ'L'

int IsFull(char board[ROW][COL], int row, int col)//����1����ʾ�������ˣ�0��ʾ��û��
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
	//�жϺ�����
	for (int  i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж�������
	for (int j = 0; j < COL; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//б��
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	else
	{
		return 'L';
	}
}
