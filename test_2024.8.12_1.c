#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//��������������λ�в�ͬ���ĸ���
//int function(int x,int y)
//{
//	int count = 0;
//	int c = (x ^ y);
//	while (c)
//	{
//		c=c& (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);  
//	printf("%d", function(a, b));
//	return 0;
//}
//��ӡһ����������λ������λ��ż��λ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("����λ:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//}
//������������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:%d %d",a,b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("\n������:%d %d", a, b);
//	return 0;
//} 
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//��������һ��ռ�ĸ��ֽ�
//	int i = 0;
//	short* p = (short*)arr;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;//������+1���������ֽ�
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//���Ϊ0 0 3 4 5��
//	}
//	return 0;
//}