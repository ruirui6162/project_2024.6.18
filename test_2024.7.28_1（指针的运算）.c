#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1��ָ������㣺
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//ָ��-ָ��õ�������ָ���Ԫ�ظ���(ǰ��������ָ��ָ��ͬһ���ռ䣬����ͬһ������)��
//	return 0;
//}
//int my_strlen(char*str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//ָ��-ָ��
//}
//int main()
//{
//	printf("%d", my_strlen("abcdefg"));
//	return 0;
//}
//   ָ��ıȽ�:����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�����������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//int main()
//{
//	int arr[5] = { 0 };
//	int* pa = arr;
//	for (pa = &arr[5]; pa > &arr[0];)//����д������C���Թ涨
//	{
//		*--pa = 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int* pa = arr;
//	for (pa = &arr[4]; pa >= &arr[0];pa--)//����д��������C�����﷨�涨�������������д����
//	{
//		*pa = 1;
//	}
//	return 0;
//}