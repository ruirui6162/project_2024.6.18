#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1，倒序输出字符：
//int my_strlen(char*st)
//{
//	if (*st != '\0')
//	{
//		return 1 + my_strlen(st+1);
//	}
//	if (*st == '\0')
//	{
//		return 0;
//	}
//}
//void exchange_string(char*str)
//{
//	int right = my_strlen(str)-1;
//	int left = 0;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	exchange_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//以下代码如何实现？
//int my_strlen(char* st)
//{
//	if (*st != '\0')
//	{
//		return 1 + my_strlen(st + 1);
//	}
//	if (*st == '\0')
//	{
//		return 0;
//	}
//}
//int left = 0;
//void reverse_string(char* str)
//{
//	float mid = (my_strlen(str)-1)  / 2.0;
//	
//	int right = (2 * mid) - left;
//	if (left<right)
//	{
//		int tmp = 0;
//		tmp = *(str + right);
//		*(str + right) = *(str + left);
//		*(str + left) = tmp;
//		left++;
//		reverse_string(str + 1);
//		
//	}
//}
//int main()
//{
//	char arr[] = "hello,world";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
// 以下代码稍不熟练：
//int my_strlen(char* st)
//{
//	if (*st != '\0')
//	{
//		return 1 + my_strlen(st + 1);
//	}
//	if (*st == '\0')
//	{
//		return 0;
//	}
//}
//void reverse_string(char* str)
//{
//	int right = (my_strlen(str))-1;
//	char tmp = *str;
//	*(str) = *(str + right);
//	*(str + right) = tmp; 
//	*(str + right) = '\0';
//	if (my_strlen(str) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + right) = tmp;
//}
//int main()
//{
//	char arr[] = "hello,world";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//2,递归实现计算输入数的各位数字的和
//int digitsum(int x)
//{
//	if (x >= 10)
//	{
//		return (x % 10) + digitsum(x / 10);
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", digitsum(num));
//	return 0;
//}
//3，递归实现n的k次方
//double my_power_neg(double n, double k)  
//{
//	if (k <= -1)
//	{
//		return (1/n) * my_power_neg(n, k + 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//
//
//}
//int my_power_pos(int n, int k)
//{
//	if (k >= 1) 
//	{
//		return n * my_power_pos(n, k - 1);
//	}
//	else if(k==0)
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	if (k >= 0)
//	{
//		printf("%d", my_power_pos(n,k));
//	}
//	else
//	{
//		printf("%lf", my_power_neg(n,k));
//	}
//	return 0;
//}