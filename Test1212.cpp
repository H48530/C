////猜数字
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	int ret=0;
//	int guess=0;
//	ret=rand()%100+1;
//	printf("ret=%d\n",ret);
//	while(1)
//	{
//		printf("猜数字：\n");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else{
//			printf("猜中了！\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("#######################\n");
//	printf("###  1.play  0.exit ###\n");
//	printf("#######################\n");}
//
//int main()
//{
//	int input=0;
//	srand((unsigned int) time (NULL));
//	do{
//		menu();
//		printf("请输入：");
//		scanf("%d",&input) ;
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:		
//				printf("选择错误\n");
//				break;
//		}
//	}while(input);
//
//	return 0;
// } 
//
//
//////字符向两端移动，向中间汇聚
////#include<stdio.h>
////#include<string.h>
////#include<windows.h> 
////#include<stdlib.h> 
////int main()
////{
////	char arr1[]="welcome to bit!!!!";
////	char arr2[]="##################";
////	 int left=0;
////	 int right =strlen(arr1)-1;
////	 while(left<=right)
////	 {
////	 	arr2[left]=arr1[left];
////	 	arr2[right]=arr1[right];
////	 	printf("%s\n",arr2);
////	 	Sleep(1000);//休息1秒 
////	 	system("cls");//清空屏幕 
////	 	left++;
////	 	right--;
////	 }
////	printf("%s\n",arr2);
////	return 0;
//// } 
//
////在有序数组中查找一个元素 
////#include<stdio.h>
////int main()
////{
////	int arr[]={1,2,3,4,5,6,7,8,9};
////	int k=7;
////	int sz=sizeof(arr)/sizeof(arr[0]);
////	int left=0;
////	int right=sz-1;
////		
////	while(left<=right){	
////		int mid=(left+right)/2;
////		if(arr[mid]>k){
////		right=mid-1;
////	}
////	else if(arr[mid]<k){
////		left=mid+1;
////	}
////	else{
////		printf ("找到了，下标是%d",mid);
////		break;
////	}	
////	}
////	if(left>right){
////		printf("未找到");
////	}
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	int arr[]={1,2,3,4,5,6,7,8,9};
////	int n=17;
////	int sz=0;
////	int i =0;
////	sz=sizeof(arr)/sizeof(arr[0]);
////	for(i=0;i<sz;i++)
////	{
////		if(n==arr[i])
////		{
////			printf ("找到了,下标是 %d\n",i);
////			break;
////		}				
////	}
////	if(i==sz)
////	{
////		printf("没找到" );
////	}
////	return 0;
//// } 
////求 n个数的阶乘和 
////#include<stdio.h>
////int main()
////{
////	int n=0;
////	int ret=1;
////	int sum=0;
////	printf("请输入一个整数：");
////	scanf("%d",&n);
////	for (int i=1;i<=n;i++)
////	{
////		ret=ret*i; 
////		sum=sum+ret;
////	 } 
////	
////	 printf("%d",sum);
////}
////求n的阶乘 
////#include<stdio.h>
////int main()
////{
////	int n=0;
////	int ret =1;
////	printf("请输入一个整数：");
////	scanf("%d",&n);
////	for(int i=1;i<=n;i++)
////	{
////		ret =ret*i;
////	 } 
////	 printf("%d",ret);
////	return 0;
//// } 


//
#include<iostream>
using namespace std;
int j,k,n;
void ac(int s,int m)
{
    if(s==1)
    {
        k++;
        return;
    }
    else
    {
        for(int i=m;i<=s;++i)
        {
            if(s%i==0)
            {
                ac(s/i,i);
            }
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(j=1;j<=n;++j)
    {
        k=0;
        int t;
        scanf("%d",&t);
        ac(t,2);
        printf("%d\n",k);
    }
}

//#include<stdio.h>
//int main()
//{
//    int a=1234;
//    printf("0%o 0X%X\n",a,a);
//    return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int a= 0xABCDEF;
//    printf("%15d\n",a);
//    return 0;    
//}
//#include<stdio.h>
//int main()
//{
//    printf("\"Hello world!\"\n");
//    printf("printf(\"Hello world!\")\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("\"Hello world!\"\n");
//    
//    printf("%d\n",printf);
//    return 0;
//}

