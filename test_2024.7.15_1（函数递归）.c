#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1�������ĵݹ�(1,�������ݹ飬�����������ұƽ�����������2���ݹ��β���̫�����ᵼ��ջ�����)��
//�������ֲ����������ӡ��
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
//��������벻���У��ݹ�̫��Σ��ᵼ��ջ�����
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
//��������ʱ�������ַ�������
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
//��n�Ľ׳�
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
//���n��쳲�������(�ݹ���Խ��������Ч��̫��)
//int count = 0;
//int Fibonacci(int x)
//{
//	if (x == 3)//ͳ�Ƶ�����쳲��������ļ��������
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
//ѭ���Ľ�:
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