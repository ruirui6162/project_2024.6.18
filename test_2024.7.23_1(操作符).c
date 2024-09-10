#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1， '<<','>>',移位操作符（移动的是二进制位）(算术移位，即保留正负符号)
//    如2为00000000000000000000000000000010，左移一位为0000000000000000000000000000100，即4.
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
//以下代码互换ab，ab值太大可能溢出：
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
//寻找一个数的二进制数中1的个数：
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
//	short a = 5;//short占两个字节。
//	int b = 10;
//	printf("%d\n", sizeof(a = b + 2));//sizeof括号中的表达式是不参与运算的。
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	short a = 5;//short占两个字节。
//	int b = 10;
//	printf("%d\n", sizeof(b + 2));//sizeof括号中的表达式是不参与运算的。
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = -8;
//	printf("%d", ~a);//对补码全按位取反后得到的二进制序列直接转化为十进制数打印。
//	return 0;
//}
//修改二进制数中的特定位：
//int main()
//{
//	int a = 13;
//	int b = 0;
//	//将13二进制中的右向左第五位改为1：
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	//将所改数右向左第五位改为0：
//	//a = a ^ (1 << 4);
//	//printf("%d\n", a);
//	//或：
//	a = a & ~(1 << 4);
//	printf("%d\n", a);
//	return 0;
//}