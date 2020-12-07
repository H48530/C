

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//初始化棋盘数组，将全部改为空格
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘，将棋盘打印出来
void DisplayBroad(char board[ROW][COL], int row, int col);
//用户下棋\
//用户下棋，将所在棋子修改为'P'
void PeoplePlay(char board[ROW][COL], int row, int col);
//电脑下棋
//电脑下棋，将所在棋子修改为'C'
void ComputerPlay(char board[ROW][COL], int row, int col);
//判断是否输赢，如果用户赢，返回'P',电脑赢，返回'C'，平局返回'Q',继续为'L'
char IsWin(char board[ROW][COL], int row, int col);
//返回1，表示棋盘满了，0表示还没满
int IsFull(char board[ROW][COL], int row, int col);