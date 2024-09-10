#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	switch (a)
//	{
//	case 1:b = 30;//若switch语句中不加break，则会按顺序执行，全部执行。
//	case 2:b = 20;
//	case 3:b = 10;
//	default:b = 0;
//	}
//	printf("%d", b);
//	return 0;
//} 
//1，将三个数从大到小输出
//int main()
//{
//	int a = 0; int b = 0; int c = 0;
//	printf("Please enter three count:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//    if (a <= c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b <= c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
// 2，输出1-100之间3的倍数。
//int main()
//{
//	int a = 1;
//	for (a; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d  ", a);
//		}
//	}
//	return 0;
//}
//3，求两个数的最大公约数.
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i=(a>b?b:a);i>=1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("这两个数的最大公约数是:%d ", i);
//			break;
//		}
//
//	}
//	return 0;
//}
//4,辗转相除法
//int main()
//{
//	int a = 0; int b = 0; int c = 0;
//	scanf("%d %d", &a, &b);
//	while (1)
//	{
//		if (a > b)
//		{
//			if (a % b == 0)
//			{
//				printf("最大公约数是：%d", b);
//				break;
//			}
//			else
//			{
//				c = a;
//				a = b;
//				b = c % b;
//			}
//		}
//		if (a < b)
//		{
//			if (b % a == 0)
//			{
//				printf("最大公约数是：%d", a);
//				break;
//			}
//			else
//			{
//				c = b;
//				b = a;
//				a = c % a;
//			}
//		}
//	}
//	return 0;
//}
//改进:(1,辗转相除法不用管大小。2，while循环可以简化。）
//int main()
//{
//	int a = 0; int b = 0; int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是：%d", b);
//	return 0;
//}
//5,打印1000-2000年之间的闰年。
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y=1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//6，打印100-200之间的素数。
//int main()
//{
//	int i = 0; int a = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (a = 2; a < i; a++)
//		{  
//			if (i % a != 0)
//			{
//				if (a == i - 1)
//				{
//					printf("%d ", i);
//				}
//			}
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//	}
//	return 0;
//}
//变版(设定一个变量开关)：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 0;
//		int flag = 1;
//		for (a = 2; a < i; a++)
//		{
//			if (i % a == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\n%d", count);
//	return 0;
//}
//优化(若a*b=m，则a和b中一定有一个数是<=开二次方根m的 )(即若有合数，那它的两因数必在它开平方根数的两边，即只试一遍就行啦!（@_@））：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 0;
//		int flag = 1;
//		for (a = 2; a <= sqrt(i); a++)
//		{
//			if (i % a == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\n%d", count);
//	return 0;
//}
//优化（除2以外的偶数必不是素数，可以将其排除）：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int a = 0;
//		int flag = 1;
//		for (a = 2; a <= sqrt(i); a++)
//		{
//			if (i % a == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\n%d", count);
//	return 0;
//}
