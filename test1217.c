#define _CRT_SECURE_NO_WARNINGS 1
//c����
//��С��
#include <stdio.h>
void Func()
{
	for (int i = 1; i <= 20; i++)
	{
		for (int  j = 1; j < 33; j++)
		{
			for (int k = 3; k < 300; k+=3)
			{
				if (i + j + k == 100 && i * 5 + j * 3 + k / 3 == 100)
				{
					printf("����=%1dֻ��ĸ��=%1dֻ,С��=%1dֻ\n", i, j, k);
				}				
			}
		}
	}
}

int main()
{
	int g = 0, m = 0, x = 0;
	Func();

	return 0;
}


//pythonʵ��
#��
# ����5�ģ�ĸ��3�ģ�С��3��1�ģ���ô��100�ģ���100ֻ��
 
for i in range(1,20):
    #����ȫ�򹫼����20��
    for j in range(1,33):
        #����ȫ��ĸ�����33��
        for k in range(3,99,3):
            #����ȫ��С�����98����Ҫ��֤ ȫ������
            if (i + j + k == 100 and i * 5 + j * 3 + k // 3 == 100):
                #�жϹ���ĸ��С���Ƿ���100ֻ �� �������Ƿ�Ϊ100��Ǯ
                    print("����", i,"ֻ��ĸ��", j,"ֻ,С��", k,"ֻ\n");