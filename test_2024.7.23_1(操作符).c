#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1�� '<<','>>',��λ���������ƶ����Ƕ�����λ��(������λ����������������)
//    ��2Ϊ00000000000000000000000000000010������һλΪ0000000000000000000000000000100����4.
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d", b);
//
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	int b = a << 2;
//	printf("%d", b);
//
//	return 0;
//}  
//
//int main()
//{
//	int a = 7 & 5;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 8 | 5;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 3 ^ 5;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//    int a = -3 ^ -5;
//    printf("%d", a);
//    return 0;
//}
//���´��뻥��ab��abֵ̫����������
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483647;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483647;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//
//	return 0;
//}
//Ѱ��һ�����Ķ���������1�ĸ�����
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 0^10;
//	printf("%d", b);//b=a.
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a ^ a;
//	printf("%d", b);//b=0.
//	return 0;
//}
//int main()
//{
//	short a = 5;//shortռ�����ֽڡ�
//	int b = 10;
//	printf("%d\n", sizeof(a = b + 2));//sizeof�����еı��ʽ�ǲ���������ġ�
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	short a = 5;//shortռ�����ֽڡ�
//	int b = 10;
//	printf("%d\n", sizeof(b + 2));//sizeof�����еı��ʽ�ǲ���������ġ�
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = -8;
//	printf("%d", ~a);//�Բ���ȫ��λȡ����õ��Ķ���������ֱ��ת��Ϊʮ��������ӡ��
//	return 0;
//}
//�޸Ķ��������е��ض�λ��
//int main()
//{
//	int a = 13;
//	int b = 0;
//	//��13�������е����������λ��Ϊ1��
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	//�����������������λ��Ϊ0��
//	//a = a ^ (1 << 4);
//	//printf("%d\n", a);
//	//��
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//	return 0;
//}