#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//����

void menu()//�˵�
{
	printf("###########################################\n");
	printf("############    1.  ����Ϸ    #############\n");
	printf("############    2.   �˳�     #############\n");
	printf("###########################################\n");
}

//��Ϸ����
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	//��ʼ����������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBroad(board, ROW, COL);
	while (1)
	{
		//����
		//�û�����
		//�û����壬�����������޸�Ϊ��P'
		PeoplePlay(board, ROW, COL);
		DisplayBroad(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
		//��������
		ComputerPlay(board, ROW, COL);
		DisplayBroad(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		//�ж��Ƿ���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'L')
		{
			break;
		}
	}
	if (ret =='P')
	{
		printf("�û�Ӯ\n");
		
	}
	else if (ret=='C')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ�֣�\n");
	}
}


int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:

			break;

		default:
			printf("����Ƿ�������������!\n");
			break;
		}

	} while (input!=2);
	

	return 0;
}