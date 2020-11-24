#define _CRT_SECURE_NO_WARNINGS 1

//冒泡排序法，将一个无序数组升序排列
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };//定义一个arr数组并将其初始化
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组长度
//	for (int i = 0; i < sz-1; i++)//因为数组下标从0开始，所以sz-1
//	{
//		for (int j = 0; j < sz-1-i; j++)//冒泡排序法走过i趟后，最大数已经在最后了，不需要在排
//		{
//			if (arr[j]>arr[j + 1])//交换两个数，将较大数交换位置
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i <= sz-1; i++)//打印数组
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

////同理，降序排列
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//用函数实现冒泡排序法  ，降序
//#include<stdio.h>
////定义排序函数，参数列表是arr的首元素的地址和数组长度
////传递参数时候，arr无法被传递进去，只能传递首元素的地址
////既然无法传递数组过来，就无法计算数组大小，所以只能将数组大小sz也传递进来
//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				//交换两个数
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };//定义一个arr数组并将其初始化
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组长度
//	BubbleSort(arr,sz);//排序这个数组
//	for (int i = 0; i <= sz - 1; i++)//打印排序好的数组
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//同理,升序
//#include<stdio.h>
//void BubbleSort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2, 7, 8, 3, 10, 4, 0, 1, 9, 6, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (int i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

////计算n的阶乘
////while循环计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("请输入你要输入的数字;\n");
//	scanf("%d", &num);
//	if (num==0)
//	{
//		ret == 1;
//		printf("阶乘是：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("请输入一个大于0的数字\n");
//	}
//	else
//	{
//		while (num)
//		{
//			ret *= num;
//			num--;
//		}
//		printf("阶乘是：%d\n",  ret);
//	}	
//	
//	return 0  ;
//}

//方法2:
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	int i = 1;
//	printf("请输入你要输入的数字(大于等于0的数字);\n");
//	scanf("%d", &num);
//	if (num==0)
//	{
//		ret == 1;
//		printf("%d阶乘是：%d\n", num, ret);
//	}
//	else if (num<0)
//	{
//		printf("请输入一个大于0的数字\n");
//	}
//	else
//	{
//		while (i<=num)
//		{
//			ret *= i;
//			i++;
//		}
//		printf("%d阶乘是：%d\n", num, ret);
//	}
//	
//	
//	return 0;
//}

////for循环
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("请输入你要输入的数字;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("阶乘是：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("请输入一个大于0的数字\n");
//	}
//	else
//	{
//		for (int  i = 1; i <= num; i++)
//		{
//			ret *= i;
//		}
//		printf("%d阶乘是：%d\n",num, ret);
//	}
//	
//	return 0;
//}

//
////do while
//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("请输入你要输入的数字;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("阶乘是：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("请输入一个大于0的数字\n");
//	}
//	else
//	{
//		do
//		{
//			ret *= num;
//			num--;
//		} while (num);
//		printf("阶乘是：%d\n",ret);
//	}
//	
//	return 0;
//}

////函数
//#include<stdio.h>
//int Fac(int x)
//{
//	int ret = 1;
//	for (int  i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("请输入你要输入的数字;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("阶乘是：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("请输入一个大于0的数字\n");
//	}
//	else
//	{
//		printf("%d阶乘是：%d\n",num,Fac(num));
//	}	
//	return 0;
//}


//递归函数
//#include<stdio.h>
//int Fac(int x)
//{
//	if (x==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*Fac(x - 1);
//	}
//	
//}
//int main()
//{
//	int ret = 1;
//	int num = 0;
//	printf("请输入你要输入的数字;\n");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		ret == 1;
//		printf("阶乘是：%d\n", ret);
//	}
//	else if (num<0)
//	{
//		printf("请输入一个大于0的数字\n");
//	}
//	else
//	{
//		printf("%d阶乘是：%d\n", num, Fac(num));
//	}
//	return 0;
//}

//求一元二次方程组的解
//#include<stdio.h>
//#include<math.h>
//
//
//int main()
//{
//	int a = 0, b = 0, c = 0,d=0;
//	double x1 = 0, x2 = 0;
//	printf("请输入一元二次方程组的a,b,c的值：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a==0)
//	{
//		if (b == 0)
//		{
//			if (c==0)
//			{
//				printf("方程有无数解\n");
//			}
//			else
//			{
//				printf("方程无解\n");
//
//			}
//			
//		}
//		else
//		{
//			x1 = x2 = -c / (double)b;//因为x1,x2是double型的，所以要强转
//			printf("方程的解为：x1=x2=%.2lf\n", x1);
//		}		
//	}
//	else
//	{
//		d = b*b - 4 * a*c;
//		if (d > 0)
//		{
//			//sqrt是开平方函数，离开所以上面要引用#include<math.h>的头文件
//			x1 = (-b + sqrt(d)) / (2.0 * a);
//			x2 = (-b - sqrt(d)) / (2.0 * a);
//			printf("方程的解为：x1=%.2lf x2=%.2lf\n", x1, x2);
//		}
//		else if (d==0)
//		{
//			x1 = x2 = (-b) / (2.0 * a);//这也是强转为浮点型
//			printf("方程的解为：x1=x2=%.2lf\n", x1);
//		}
//		else
//		{
//			printf("无实根\n");
//		}	
//	}
//	return 0;
//}



#include<stdio.h>
#include<math.h>
int Fac(int a, int b, int c)
{
	double x1 = 0, x2 = 0;
	int  d = 0;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				printf("方程有无数解\n");
			}
			else
			{
				printf("方程无解\n");

			}

		}
		else
		{
			x1 = x2 = -c / (double)b;//因为x1,x2是double型的，所以要强转
			printf("方程的解为：x1=x2=%.2lf\n", x1);
		}
	}
	else
	{
		d = b*b - 4 * a*c;
		if (d > 0)
		{
			//sqrt是开平方函数，离开所以上面要引用#include<math.h>的头文件
			x1 = (-b + sqrt(d)) / (2.0 * a);
			x2 = (-b - sqrt(d)) / (2.0 * a);
			printf("方程的解为：x1=%.2lf x2=%.2lf\n", x1, x2);
		}
		else if (d == 0)
		{
			x1 = x2 = (-b) / (2.0 * a);//这也是强转为浮点型
			printf("方程的解为：x1=x2=%.2lf\n", x1);
		}
		else
		{
			printf("无实根\n");
		}
	}
}


int main()
{
	int a = 0, b = 0, c = 0;
	
	printf("请输入一元二次方程组的a,b,c的值：\n");
	scanf("%d%d%d", &a, &b, &c);
	Fac(a, b, c);
	return 0;
}