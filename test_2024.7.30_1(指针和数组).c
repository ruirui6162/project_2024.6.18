#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1,指针和数组
//int main()
//{
//	int arr[10] = { 0 };//数组名是首元素的首地址。
//	//printf("%p\n", arr);
//	//printf("%p", &arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", p + i, &arr[i]);
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//	int* p = arr;
//	//[]是一个操作符，2和arr是两个操作数，支持交换律
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	//arr[2]-->*(arr+2) <==> 2[arr]-->*(2+arr).
//	//即以下写法也可以：
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//	//p[2]-->*(p+2) <==> 2[p]-->*(2+p).
//	return 0;
//}