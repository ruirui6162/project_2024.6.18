#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<assert.h>
//1,模拟实现strcpy(在使用strcpy时发现其拷贝\0):
//void my_strcpy(char* dest, char* sour)
//{
//	do
//	{
//		*dest++ = *sour++;
//	} while (*(sour-1)!='\0');
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//另法:
//void my_strcpy(char* dest, const char* sour)//加const使sour不能被修改，因为此函数只需修改dest，写反便会报错，保证不出问题。
//{
//	assert((sour != NULL)&&(dest!=NULL));
//	while (*dest++ = *sour++)//赋值表达式结果为左式最终结果，判断的是字符的ascll码值，若为字符则非零，循环继续，若为'\0'则为零，退出循环。
//	{ 
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, NULL);
//	printf("%s", arr1);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;//const能改
//	num = 20;//num不能改
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int n = 0;
//	const int* p = &num;
//	*p = 20;//*p不能改
//	num = 20;//num能改
//	p = &n;//p能改
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int n = 0;
//	int* const p = &num;
//	*p = 20;//*p能改
//	num = 20;//num能改
//	p = &n;//p不能改
//	printf("%d", num);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* sour)//加const使sour不能被修改，因为此函数只需修改dest，写反便会报错，保证不出问题。
//{
//	assert((sour != NULL) && (dest != NULL));
//	int ret = dest;//后面dest并不是数组首元素地址，此处暂存直接返回即可。
//	while (*dest++ = *sour++)//赋值表达式结果为左式最终结果，判断的是字符的ascll码值，若为字符则非零，循环继续，若为'\0'则为零，退出循环。
//	{
//		;
//	}
//	return ret;//返回首元素的地址可以直接用于链式访问。
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	printf("%s", my_strcpy(arr1,arr2));
//	return 0;
//}