#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ��ʵ��
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
//	int random_num = rand() % 100 + 1;//����һ���������rand����
//	int input = 0;
//	printf("%d\n", random_num);//Ϊ�˷���£����Խ�����������ӡ����
//	while (1)
//	{
//		printf("��������µ����֣�\n");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input<random_num)
//		{
//			printf("��С��\n");
//
//		}
//		else
//		{
//			printf("��ϲ�㣬������\n");
//		}		
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("����������Ҫ��ѡ�\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//����game����
//			break;
//		case 0:
//			printf("�˳��ɹ�!\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);//���Ϊ0������ֹѭ��
//
//	return 0;
//}


//��������Ϸ��ʵ��
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
	int random_num = rand() % 100 + 1;//����һ���������rand����
	int input = 0;
	printf("%d\n", random_num);//Ϊ�˷���£����Խ�����������ӡ����
	while (1)
	{
		printf("��������µ����֣�\n");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("�´���\n");
		}
		else if (input<random_num)
		{
			printf("��С��\n");

		}
		else
		{
			printf("��ϲ�㣬������\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("����������Ҫ��ѡ�\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//����game����
			break;
		case 0:
			printf("�˳��ɹ�!\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);//���Ϊ0������ֹѭ��

	return 0;
}