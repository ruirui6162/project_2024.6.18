#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1,ָ�������
//int main()
//{
//	int arr[10] = { 0 };//����������Ԫ�ص��׵�ַ��
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
//	//[]��һ����������2��arr��������������֧�ֽ�����
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	//arr[2]-->*(arr+2) <==> 2[arr]-->*(2+arr).
//	//������д��Ҳ���ԣ�
//	printf("%d\n", p[2]);
//	printf("%d\n", 2[p]);
//	//p[2]-->*(p+2) <==> 2[p]-->*(2+p).
//	return 0;
//}