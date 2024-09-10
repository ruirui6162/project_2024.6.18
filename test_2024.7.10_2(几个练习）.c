#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1,n的阶乘
//int main()
//{
//	int n = 0;
//	int s = 1;
//	scanf("%d", &n);
//	for (; n >=1; n = n - 1)
//	{
//		s = s * n;
//	} 
//	printf("%d", s);
//	return 0;
//}
//2,除0的前n个自然数的阶乘的和
//int main()
//{
//	int n = 0;
//	int b = 0;
//	int s = 1;
//	scanf("%d", &n);
//	int a = n;
//	for (; a >= 1; a = a - 1)
//	{
//		for (n=a,s=1; n >= 1; n = n - 1)
//		{
//			s = s * n;
//		}
//		b = b + s;
//	}
//	printf("%d", b);
//	return 0;
//}
// 改进：
//int main()
//{
//	int n = 1;
//	int r = 1;
//	int a;
//	int s = 0;
//	scanf("%d", &a);
//	for (n=1; n <= a; n++)
//	{
//		r *= n;
//		s += r;
//	}
//	printf("%d", s);
//	return 0;
//}
//3,模拟用户登录
#include<string.h>
#include<windows.h>
//int main()
//{
//	char password[10] = { 0 };
//	int b = 3;
//	for (; b >= 1; b--)
//	{
//        printf("please enter you password\n");
//		scanf("%s", password);
//        //if ("123456" == password)//两个字符串比较不能使用“==”，应该使用strcmp这个函数。(strcmp:string compare)
//		if(strcmp(password,"123456")==0)
//		{
//			printf("You are right.Landing successful!\n");
//			break;
//		}
//		else
//		{
//			if (b != 1)
//			{
//				printf("You are wrong.You still have %d chance.Please enter it 3 seconds later.\a\n", b - 1);
//				Sleep(3000);
//				system("cls");
//
//			}
//			if (b == 1)
//			{
//				printf("You've already entered your password incorrectly three times, and you don't stand a chance.\a");
//			}
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char password[10] = { 0 };
//	int a = 3;
//	for (; a >= 1; a--)
//	{
//		printf("please enter your passwod:\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//				printf("You are right.Landing successful!");
//				break;
//		}
//		else
//		{
//			if (a != 1)
//			{
//				printf("You are wrong.You still have %d chance.Please enter it 3 seconds later again.\a\n", a - 1);
//				Sleep(3000);
//				system("cls");
//			}
//
//
//			if (a == 1)
//			{
//				printf("You've already entered your password incorrectly three times, and you don't stand a chance.\a\n");
//			}
//		}
//	}
//	return 0;
//}
//4,字符向中间移动
//#include<string.h  
//#include<windows.h>
//int main()
//{
//	char arr1[] = "...........................................................................                 ";
//	char arr2[] = "                                                                                            ";
//	char arr3[] = "                                                                                            ";
//	int left1 = 18;
//	int right1 = 19;
//	int left2 = 54;
//	int right2 = 55;
//	Sleep(3000);
//	while (right1 <= left2)
//	{
//		arr2[left1] = arr1[left1];
//		arr2[right1] = arr1[right1];
//		arr2[left2] = arr1[left2];
//		arr2[right2] = arr1[right2];
//		left1 --; right1 += 2; left2 -= 2; right2++;
//		printf("%s\n", arr2);
//		Sleep(50);
//		
//	}
//	while (left1<=right2)
//	{ 
//		arr2[left1] = arr3[left1];
//		arr2[right2] = arr3[right2];
//		left1++; right2--;
//		printf("%s\n", arr2);
//		Sleep(50);
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "Don't care about worldly eyes to pursue you own light";
//	char arr2[] = "                                                     ";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++; right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1000毫秒。
//		system("cls");//清空屏幕。	
//	}
//	printf("%s", arr1);
//	return 0;
//}
//5,在一个有序数组中查找具体的某个数字n。
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,22,24,26,28,29,33,34,35,37,39,44,48,60,88,99,123,124,167,189,199,299,300,301,302,555,
//	//	556,557,559,666,667,668,669,778,779,888,889,990,999,4444,4445,4447,4448,5558,5559,6661,6666,44444,666666,7777777};
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	printf("please enter the count that you want to find:");
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[1]))-1;
//	if (arr[2] > arr[1])
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("Found it!It is the %dth count", mid + 1);
//				break;
//			}
//		}
//		if (left > right)
//		{
//			printf("I'm sorry,this array can't find it");
//		}
//	}
//	if (arr[2] < arr[1])
//	{
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] > k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] < k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("Found it!It is the %dth count", mid + 1);
//				break;
//			}
//		}
//		if (left > right)
//		{
//			printf("I'm sorry,this array can't find it");
//		}
//	}
//	return 0;
//}














