#define _CRT_SECURE_NO_WARNINGS 1
//c语言
//买小鸡
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
					printf("公鸡=%1d只，母鸡=%1d只,小鸡=%1d只\n", i, j, k);
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


//python实现
#买鸡
# 公鸡5文，母鸡3文，小鸡3个1文，怎么花100文，买100只鸡
 
for i in range(1,20):
    #假如全买公鸡最多20个
    for j in range(1,33):
        #假如全买母鸡最多33个
        for k in range(3,99,3):
            #假如全买小鸡最多98个，要保证 全部都有
            if (i + j + k == 100 and i * 5 + j * 3 + k // 3 == 100):
                #判断公鸡母鸡小鸡是否有100只 和 加起来是否为100文钱
                    print("公鸡", i,"只，母鸡", j,"只,小鸡", k,"只\n");