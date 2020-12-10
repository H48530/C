//正数的原码反码补码相同，
//有符号数，最高位为符号位，且正数为0，负数为1
//负数
//最高位为符号位
//在计算机中负数的存储为补码，补码=原码取反+1  反码=除过符号位取反
//求解一个整数存储在内存中，二进制1的个数

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//上面代码有缺陷，无法计算负数,无法计算较大的数

//
//#include <stdio.h>
//
//int main()
//{
//	unsigned int num = -1;//无符号数
//	//scanf("%d", &num);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (num % 2==1)
//		{
//			count++;
//		}
//		num =num >> 1;//右移1位，相当于/2
//
//	}
//	printf("%d\n", count);
//	return 0;
//}



//函数
//#include <stdio.h>
//int CountBitNum(unsigned int x)//无符号数
//{
//	///// 00000000 00000000 00000010 10010001
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x >>= 1;//右移一位
//	}
//	return count;
//}
//
//int main()
//{
//	printf("%d\n", CountBitNum(-1));
//	printf("%d\n", CountBitNum(0xFFFFFFFF));
//	return 0;
//}


////按位与
//#include<stdio.h>
//int CountBitNum(int x)
//{
//	// 00000000 00000000 00000010 10010001
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		//if (x & 1 == 1)
//		if (x & 1)//和1按位与
//		{
//			count++;
//		}
//		x >>= 1;//右移一位
//	}
//	return count;
//}
//
//int main()
//{
//	printf("%d\n", CountBitNum(-1));
//	return 0;
//}


////
//#include <stdio.h>
//int CountBitNum(int x)
//{
//	// 00000000 00000000 00000010 10010001
//	int count = 0;
//	while (x)
//	{
//		x &= (x - 1);
//		count++;
//	}
//	//例如：5——101,4——100
//	//101&100 —— 100 count++;
//	//100&011 —— 000 count++；
//	//循环结束
//	return count;
//}
//
//int main()
//{
//	printf("%d\n", CountBitNum(-1));
//	printf("%d\n", CountBitNum(0xFFFFFFFF));
//	return 0;
//}
