#define _CRT_SECURE_NO_WARNINGS 1
//��д���룬��ʾ����ַ��������ƶ������м���
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr2) - 1;//strlen�������鳤�ȣ���string.h�У�  ������±��Ǵ�0��ʼ������-1.
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
////whileѭ��
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>//sleep()����
//int  main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		Sleep(1000);//��Ļ����1��
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//

#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep()����
int  main()
{
	char arr1[] = "hello world";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr2) - 1;

	for (left = 0, right = strlen(arr2) - 1;
		left <= right;
		left++, right--)
		//ѭ������
	{
		Sleep(1000);//��Ļ����1��
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
	}

	return 0;
}
//

