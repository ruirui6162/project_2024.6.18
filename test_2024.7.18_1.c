#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1£¬¶þÎ¬Êý×é
//int main()
//{
//	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[2][0]);
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	printf("%p\n", arr + 1);
//	return 0;
//}
//2£¬Ã°ÅÝÅÅÐò
//void bubble_sort_up(int* arr, int x)
//{
//	int i = 0;
//	int a = 0;
//	int flag = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (a = 0; a < x-i-1 ; a++)
//		{
//			if (arr[a] > arr[a + 1])
//			{
//				int tmp = arr[a+1];
//				arr[a + 1] = arr[a];
//				arr[a] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {0,1,2,3,44,56,6,24,99,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort_up(arr,sz);
//	for (int b = 0; b < sz; b++)
//	{
//		printf("%d ", arr[b]);
//	}
//	return 0;
//}