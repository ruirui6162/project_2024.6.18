#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<string.h>
//void print(int arr[6][6])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <= 5; j++)
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//	}
//	printf("\n");
//}
//void init(int arr[6][6])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 0; j <= 5; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//}
//void reverse(int arr[6][6])//¶þÎ¬Êý×éµ¹ÖÃ
//{
//	int leftl = 0;
//	int leftu = 0;
//	int rightr = 5;
//	int rightd = 5;
//	while (leftl <= rightr)
//	{
//		leftu = 0;
//		rightd = 5;
//		if (leftl < rightr)
//		{
//			while (leftu <= 5)
//			{
//				int tmp = arr[leftl][leftu];
//				arr[leftl][leftu] = arr[rightr][rightd];
//				arr[rightr][rightd] = tmp;
//				leftu++;
//				rightd--;
//			}
//		}
//		if (leftl == rightr)
//		{
//			while (leftu <= rightr)
//			{
//				int tmp = arr[leftl][leftu];
//				arr[leftl][leftu] = arr[rightr][rightd];
//				arr[rightr][rightd] = tmp;
//				leftu++;
//				rightd--;
//			}
//		}
//		leftl++;
//		rightr--;
//	}
//	print(arr);
//}
//int main()
//{
//	int arr[6][6] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36 };
//	//int s = strlen(arr);
//	int s = sizeof(arr) / sizeof(arr[0][0])-1;
//	printf("%d\n", s);
//	reverse(arr);
//	init(arr);
//	print(arr);
//	return 0;
//}
