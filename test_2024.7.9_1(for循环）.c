#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1����ȡ�ַ�
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
// }
// 2��forѭ��
// forѭ��:for(���һ;����;�����)
//             ѭ�����;
// ��ִ�����һ������������ѭ����䣬�������  
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 0; a <= 10; a++)
//		printf("%d ", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 6)
//		{
//			break;//breakִ��ѭ������ֹ��
//		}
//
//		printf("%d ", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		if (a == 6)
//		{
//			continue;//continue�����˴�ѭ������Ĳ��֣���ִ��a++��
//		}
//
//		printf("%d ", a);
//	}
//	return 0;
//}
//3,forѭ���������ڲ��޸�ѭ������������forѭ��ʧȥ���ƣ�������ѭ�����ڲ��ض���a����a++�����������aһֱ��6��
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d ", a);
//		a = 5;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,3,3,3,3,3,3,5};
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)//�жϲ���ʡ�����Ϊ�档    
//	{
//		printf("6 "); 
//	}
//	return 0;
//}  
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)//ÿ�ν���ʱb�����¸�ֵΪ0������ѭ����ִ��һ�ٴΡ� 
//		{
//			printf("666 ");
//		}
//	}
//	return 0;
//} 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (; a < 10; a++)
//	{
//		for (; b < 10; b++)//�������һ�����˴�b�������٣���ֻ�ܴ�ӡʮ�Σ��󲻻����b��ѭ����a�����������
//		{
//			printf("666 ");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	for (a = 0,b = 0; a < 10 && b < 10; a +=2, b += 2)
//	{
//		printf("%d %d\n", a, b);
//	}
//	return 0;
//}