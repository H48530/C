#define _CRT_SECURE_NO_WARNINGS 1
//switch ��,default,break���÷�
//
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	printf("������һ�����֣�\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("���벻�淶\n");
//		break;
//	}
//	return 0;
//}

////���1��5Ϊ�����գ�6��7Ϊ��Ϣ��
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	printf("������һ�����֣�\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("������\n");
//		break;
//	case 2:
//		printf("������\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("���벻�淶\n");
//		break;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int day = 0;
	printf("������һ�����֣�\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("���벻�淶\n");
		break;
	}
	return 0;
}