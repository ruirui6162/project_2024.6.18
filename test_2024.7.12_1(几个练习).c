#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	switch (a)
//	{
//	case 1:b = 30;//��switch����в���break����ᰴ˳��ִ�У�ȫ��ִ�С�
//	case 2:b = 20;
//	case 3:b = 10;
//	default:b = 0;
//	}
//	printf("%d", b);
//	return 0;
//} 
//1�����������Ӵ�С���
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
// 2�����1-100֮��3�ı�����
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
//3���������������Լ��.
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i=(a>b?b:a);i>=1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("�������������Լ����:%d ", i);
//			break;
//		}
//
//	}
//	return 0;
//}
//4,շת�����
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
//				printf("���Լ���ǣ�%d", b);
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
//				printf("���Լ���ǣ�%d", a);
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
//�Ľ�:(1,շת��������ùܴ�С��2��whileѭ�����Լ򻯡���
//int main()
//{
//	int a = 0; int b = 0; int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("���Լ���ǣ�%d", b);
//	return 0;
//}
//5,��ӡ1000-2000��֮������ꡣ
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
//6����ӡ100-200֮���������
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
//���(�趨һ����������)��
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
//�Ż�(��a*b=m����a��b��һ����һ������<=�����η���m�� )(�����к�������������������������ƽ�����������ߣ���ֻ��һ�������!��@_@������
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
//�Ż�����2�����ż���ز������������Խ����ų�����
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
