#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<assert.h>
//1,ģ��ʵ��strcpy(��ʹ��strcpyʱ�����俽��\0):
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
//��:
//void my_strcpy(char* dest, const char* sour)//��constʹsour���ܱ��޸ģ���Ϊ�˺���ֻ���޸�dest��д����ᱨ����֤�������⡣
//{
//	assert((sour != NULL)&&(dest!=NULL));
//	while (*dest++ = *sour++)//��ֵ���ʽ���Ϊ��ʽ���ս�����жϵ����ַ���ascll��ֵ����Ϊ�ַ�����㣬ѭ����������Ϊ'\0'��Ϊ�㣬�˳�ѭ����
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
//	*p = 20;//const�ܸ�
//	num = 20;//num���ܸ�
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int n = 0;
//	const int* p = &num;
//	*p = 20;//*p���ܸ�
//	num = 20;//num�ܸ�
//	p = &n;//p�ܸ�
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int n = 0;
//	int* const p = &num;
//	*p = 20;//*p�ܸ�
//	num = 20;//num�ܸ�
//	p = &n;//p���ܸ�
//	printf("%d", num);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* sour)//��constʹsour���ܱ��޸ģ���Ϊ�˺���ֻ���޸�dest��д����ᱨ����֤�������⡣
//{
//	assert((sour != NULL) && (dest != NULL));
//	int ret = dest;//����dest������������Ԫ�ص�ַ���˴��ݴ�ֱ�ӷ��ؼ��ɡ�
//	while (*dest++ = *sour++)//��ֵ���ʽ���Ϊ��ʽ���ս�����жϵ����ַ���ascll��ֵ����Ϊ�ַ�����㣬ѭ����������Ϊ'\0'��Ϊ�㣬�˳�ѭ����
//	{
//		;
//	}
//	return ret;//������Ԫ�صĵ�ַ����ֱ��������ʽ���ʡ�
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	printf("%s", my_strcpy(arr1,arr2));
//	return 0;
//}