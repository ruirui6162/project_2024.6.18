#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//1,输出1-100之间9的个数：
//int main()
//{
//	int count = 0;
//	for (int a = 0; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			count++;
//		}
//		if (a / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//以下代码99会只进去一次，在求有九数字个数时可以用。
//int main()
//{
//	int count = 0;
//	for (int a = 0; a <= 100; a++)
//	{
//		if ((a % 10 == 9)||(a/10==9))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//2，计算1/1-1/2+1/3-1/4+1/5+...+1/99-1/100:
//递归法：
//double sum(double x)
//{
//	if (x >= 1)
//	{
//		return ((1/(x-1))-(1/x)) + sum(x-2);
//	} 
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	double n = 0.0;
//	scanf("%lf", & n);
//	printf("%lf", sum(n));
//	return 0;
//}
//迭代（循环）法：
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 99; i+=2)
//	{
//		sum = sum + ((1.0 / i) - (1.0 / (i + 1.0)));
//	}
//	printf("%lf", sum);
//	return 0;
//}
//改进：
//int main()
//{
//	int flag = 1;
//	double sum = 0;
//	for (int a = 1.0; a <= 100; a++)
//	{
//		sum = flag * (1.0 / a)+sum;
//		flag = -flag;//(利用flag这一变量实现符号的变换)
//	}
//	printf("%lf", sum);
//	return 0;
//}
//3，求十个数的最大值：
//int main()
//{
//	int arr[] = { 1,3,5,2,57,35,46,24,25,36 };
//	int i = 0; int max = arr[0];//此处max要赋值数组中的元素，否则若max大于所有数组中的元素则输出的会是max而非数组中的最大值。
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		else
//		{
//			;
//		}
//	}
//	printf("%d", max);
//
//}
//4，输出乘法口诀表：
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	system("cls");
//	for (i = 1; i <= n; i++)
//	{
//		for (a = 1; a <= i; a++)
//		{ 
//			printf("%d*%d=%-2d ", a, i, i * a);
//			Sleep(500);
//		}
//		printf("\n");
//	}
//	return 0;
//}