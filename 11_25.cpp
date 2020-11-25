#define _CRT_SECURE_NO_WARNINGS 1
//switch 中,default,break的用法
//
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入不规范\n");
//		break;
//	}
//	return 0;
//}

////输出1—5为工作日，6—7为休息日
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	printf("请输入一个数字：\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("工作日\n");
//		break;
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("工作日\n");
//		break;
//	case 4:
//		printf("工作日\n");
//		break;
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//		printf("休息日\n");
//		break;
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入不规范\n");
//		break;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int day = 0;
	printf("请输入一个数字：\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入不规范\n");
		break;
	}
	return 0;
}