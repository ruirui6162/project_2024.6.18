#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<assert.h>
//size_t my_strlen(const char*arr)//size_t��ʾ�޷������Σ�ͬ��unsigned int.
//{
//	//assert(arr != NULL);
//	assert(arr);//��ָ�뼴0��0Ϊ�٣�����assert,����ִ�У�����ͬ����Ч����
//	size_t count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count; 
//}
//
//int main()
//{
//	char arr1[20] = "hello world";
//	char arr2[] = "welcome to my world";
//	printf("%d\n", my_strlen(arr1));
//	printf("%d", my_strlen(arr2));
//	return 0;
//}