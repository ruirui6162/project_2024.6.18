#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//1,goto语句(一般只在跳出多层循环时使用 )。
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("Your computer will be shutdown after 60 seconds.If you type:woshizhu,the shutdown will be canceled.\n");
//	scanf("%s", input);
//	if (strcmp(input, "woshizhu") == 0)
//	{
//		printf("Thank you,your computer will not be canceled.");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//go to语句只能在本函数跳转，不能跨函数。
//void test()
//{
//flag:
//	printf("hehe\n");
//}
//int main()
//{
//	goto flag;
//	return 0;
//}
// 2,strcpy.
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello" }; 
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	int a = 'h';
//	strcpy(arr1, &a);
//	printf("%s", arr1);
//	return 0;
//}
//3,memset.(void * memset ( void * ptr, int value, size_t num ));
//int main()
//{
//	char arr1[] = { "hello world" };
//	memset(arr1, 'h', 5);//字符的ascll码值是整数。
//	printf("%s", arr1);
//	return 0;
//}
