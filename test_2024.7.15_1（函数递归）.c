#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1，函数的递归(1,不能死递归，有跳出条件且逼近跳出条件。2，递归层次不能太深。否则会导致栈溢出。)。
//输入数字并将其逐个打印：
//void function1(unsigned int x)
//{
//	if (x > 9)
//	{
//		function1(x/10);
//	}
//	printf("%d ", x % 10);
//} 
//int main()
//{
//	int num = 0;
//	scanf("%u",&num);
//	function1(num);
//}
//如下面代码不可行，递归太多次，会导致栈溢出。
//void function2(int x)
//{
//	if (x < 10000)
//	{
//		function2(x+1);
//	}
//}
//int main()
//{
//	function2(1);
//}   
//不创建临时变量求字符串长度
//int my_strlen(char* str)
//{
//	if (*str !='\0')
//	{
//		return my_strlen(str+1)+1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//求n的阶乘
//int factorial(int x)
//{
//	if (x >= 1)
//	{
//		return x * factorial(x - 1);
//	}
//
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", factorial(n));
//	return 0;
//}
//求第n个斐波那契数(递归可以解决，但是效率太低)
//int count = 0;
//int Fibonacci(int x)
//{
//	if (x == 3)//统计第三个斐波那契数的计算次数。
//	{
//		count++;
//	}
//	if (x>=3)
//	{
//		return (Fibonacci(x - 1)) + (Fibonacci(x - 2));
//	}
//	if ((x == 1) || (x == 2))
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//	printf("\n%d", count);
//	return 0;
//}
//循环改进:
//int Fibonacci(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x>=3)
//	{
//		c = a + b;
//		a = b; 
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//	return 0;
//}