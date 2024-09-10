#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//int count = 0;
//function2(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//}
//int function1(int x)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((x & 1) == 1)
//		{
//			count++;
//		}
//		x=x >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", function1(n));
//	//printf("%d", function2(n));
//	return 0;
//}
//int function2(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	if (count == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int function2(int x)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((x & 1) == 1)
//		{
//			count++;
//		}
//		x = x >> 1;
//	}
//	return count;
//}
//int main()
//{ 
//	int n = 0;
//	scanf("%d", &n);
//	if (function2(n) == 1)
//	{
//		printf("此数是2的某次方");
//	}
//	else
//	{
//		printf("此数不是2的某次方");
//	}
//	return 0;
//}