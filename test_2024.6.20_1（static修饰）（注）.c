#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1,static�����ξֲ�����ʱ��ʹ��
//void abc()
//{
//	int c = 2;
//	c = c + 2;
//	printf("result=%d\n", c);
//}
//int main()
//{
//	int a = 0;
//	printf("order=%d\t",a+1);
//	while (a < 99)
//	{
//		abc();
//		a++;
//		printf("order=%d\t", a+1);
//	}
//	printf("result=%d\n",4);
//	return 0;
//}
//void abc()
//{
//	static int c = 2;//static����֮���ӳ����������ڣ�ʹ�䲻����
//	c = c + 2;
//	printf("result=%d\n", c);
//}
//int main()
//{
//	int a = 0;
//	printf("order=%d\t\t", a + 1);
//	while (a < 98)
//	{
//		abc();
//		a++;
//		printf("order=%d\t\t", a + 1);
//	}
//	printf("result=%d\n", 200);
//	return 0;
//}
//2,Calculate the sum of the first n terms of an arithmetic sequence created based on static modifier
//int a = 0;
//int b = 0;
//static int e = 0;
//void function1()
//{
//	e = a + b;
//}
//int main()
//{
//	int c = 0;
//	int d = 0;
//	printf("����������a=");
//	scanf("%d", &a);
//	printf("�����빫��b=");
//	scanf("%d", &b);
//	printf("����������d=");
//	scanf("%d", &d);
//	while (c < d)
//	{
//		void function1();
//		c++;
//	}
//	printf("result=%d\n", e);
//	return 0;
//}//��δ���

