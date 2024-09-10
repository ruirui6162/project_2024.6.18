#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//求两个数二进制位中不同数的个数
//int function(int x,int y)
//{
//	int count = 0;
//	int c = (x ^ y);
//	while (c)
//	{
//		c=c& (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);  
//	printf("%d", function(a, b));
//	return 0;
//}
//打印一个数二进制位的奇数位和偶数位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("奇数位:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}
//交换两个变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:%d %d",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("\n交换后:%d %d", a, b);
//	return 0;
//} 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//整形数组一个占四个字节
//	int i = 0;
//	short* p = (short*)arr;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//短整型+1跳过两个字节
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//结果为0 0 3 4 5。
//	}
//	return 0;
//}