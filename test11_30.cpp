#define _CRT_SECURE_NO_WARNINGS 1

////ѭ��
////�ػ�С����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[10] = { 0 };
//	system("shutdown -s -t 60");//60��ػ�����Ҫ#include <stdlib.h>ͷ�ļ�
//	while (1)//��ѭ��  ֻ�����룬break����ѭ��
//	{
//		printf("��ĵ��Խ���60s��ػ���������룺��������ȡ���ػ���\n�����룺\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)//�Ƚ������ַ����������ͬ����0����Ҫͷ�ļ�#include <string.h>
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

////goto���ʵ��
////�ػ�С����
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[10] = { 0 };
//	system("shutdown -s -t 60");//60��ػ�����Ҫ#include <stdlib.h>ͷ�ļ�
//	again:
//		printf("��ĵ��Խ���60s��ػ���������룺��������ȡ���ػ���\n�����룺\n");
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0)//�Ƚ������ַ����������ͬ����0����Ҫͷ�ļ�#include <string.h>
//		{
//			system("shutdown -a");		
//		}
//		else
//		{
//			goto again;//��ת��again�����ٴ�ִ�С�
//		}
//	return 0;
//}

//goto��������ʺϵĳ�����
#include <stdio.h>

int main()
{
	for (int  i = 0; i < 100; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int  k = 0; k < 10; k++)
			{
				for (int l = 0; l < 10; l++)
				{
					printf("haha\n");
					if (i == 3)
					{
						goto again;
					}
				}

			}

		}
	}
again:
	printf("hello\n");
	return 0;
}