#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1，指针的运算：
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//指针-指针得到的是两指针间元素个数(前提是两个指针指向同一个空间，比如同一个数组)。
//	return 0;
//}
//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//指针-指针
//}
//int main()
//{
//	printf("%d", my_strlen("abcdefg"));
//	return 0;
//}
//   指针的比较:允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//int main()
//{
//	int arr[5] = { 0 };
//	int* pa = arr;
//	for (pa = &arr[5]; pa > &arr[0];)//此种写法满足C语言规定
//	{
//		*--pa = 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int* pa = arr;
//	for (pa = &arr[4]; pa >= &arr[0];pa--)//此种写法不满足C语言语法规定，尽量避免此种写法。
//	{
//		*pa = 1;
//	}
//	return 0;
//}