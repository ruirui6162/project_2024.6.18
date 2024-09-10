#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1,Custom functons.
//int get_max(int x, int y)
//{
//	int max = (x > y ? x : y);
//	return max;
//}
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("最大值为：%d", get_max(a, b));
//	return 0;
//}
//void swap(int* pa, int* pb)//形参无法改变实参，如果想改变实参，需要用地址。
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("1:%d %d\n", a, b);
//	swap(&a, &b);
//	printf("2:%d %d\n", a, b);
//	return 0;
//}
// 2,判断一个数是不是素数
//void function1(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			printf("This count is not a prime number");
//			break;
//		}
//		if (i == x - 1)
//		{
//			printf("This count is a prime number");
//		}
//	}
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	function1(a);
//	return 0;
//}
//输出100-200之间的素数。
//int function1(int x)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			break;
//		}
//		if (i == x - 1)
//		{
//			return 0;
//		}
//	}
//
//}
//int main()
//{
//	int count = 0;
//	for (int a = 100; a <= 200; a++)
//	{
//		function1(a);
//		if (function1(a) == 0)
//		{
//			printf("%d ", a);
//			count++;
//		}
//
//	}
//	printf("\n%d", count);
//	return 0;
//}
// 3，判断年份是否为闰年。
//int function2(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//    if (function2(a) == 0)
//	{
//		printf("This year is a leap year");
//	}
//	else
//	{
//		printf("This year is not a leap year");
//	}
//	return 0;
//}
//输出：
//int function2(int x)//写了返回类型int得有返回值，即不管何种情况都要有返回值。
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 0;
//	 }
//	else
//	{
//	     return 1;
//   }
//
//}
//int main()
//{
//	int count = 0;
//	for (int a = 1000; a <= 2000; a++)
//	{
//		if (function2(a) == 0)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
// 4,实现有序数组的二分查找。
//int function3(int x[],int y,int right)
//{
//	int left = 0; 
//	if (x[0] < x[1])
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (x[mid] < y)
//			{
//				left = mid + 1;
//			}
//			else if (x[mid] > y)
//			{
//				right = mid - 1;
//			}
//			else if(x[mid]==y)
//			{
//				return mid;
//			}
//		}
//		return -1;
//	}
//	else if (x[0] > x[1])
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (x[mid] > y)
//			{
//				left = mid + 1;
//			}
//			else if (x[mid] < y)
//			{
//				right = mid - 1;
//			}
//			else if(x[mid]=y)
//			{
//				return mid;
//			}
//
//		}
//		return -1;
//	}
//
//} 
//int main()
//{
//	int arr1[] = { 1,2,4,5,6,8,10,14,15,16,19,24,25,27,28 };
//	int w = 0;
//	scanf("%d", &w);
//	int sz = sizeof(arr1) / (sizeof(arr1[0]))-1;//求长度只能在此处求，不能在函数里面求，因为arr1传参的时候只传过去数组首元素的地址。
//	if (function3(arr1,w,sz) == -1)
//	{
//		printf("Sorry,this array can't find it");
//	}
//	else
//	{
//		printf("Find it!It is the %dth number.", function3(arr1, w, sz)+1);
//	}
//	return 0;
//}
//5,每调用一次函数，就会将num的值+1.
//void function4(int* pa)
//{
//	 *pa = *pa + 1;
//}
//int main()
//{
//	int num = 0;
//	for (int a = 0;; a++)
//	{
//		function4(&num);
//		printf("%d ", num);
//	}
//	return 0;
//}
//#pragma comment(lib,"sub.lib")
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, & b);
//	printf("%d\n", sub(a, b));
//	return 0;
//}
