

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��ʼ���������飬��ȫ����Ϊ�ո�
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̣������̴�ӡ����
void DisplayBroad(char board[ROW][COL], int row, int col);
//�û�����\
//�û����壬�����������޸�Ϊ'P'
void PeoplePlay(char board[ROW][COL], int row, int col);
//��������
//�������壬�����������޸�Ϊ'C'
void ComputerPlay(char board[ROW][COL], int row, int col);
//�ж��Ƿ���Ӯ������û�Ӯ������'P',����Ӯ������'C'��ƽ�ַ���'Q',����Ϊ'L'
char IsWin(char board[ROW][COL], int row, int col);
//����1����ʾ�������ˣ�0��ʾ��û��
int IsFull(char board[ROW][COL], int row, int col);