#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1����ʶָ��
//int main()
//{
//	int a =10;
//	printf("%p\n", a);//%pר��������ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�����
//	//*˵��pa��ָ�����
//	//int˵��paָ��Ķ�����int����
//	char b = 'c';
//	char* pc = &b;
//	printf("%p\n", b);
//	return 0;
//
//}
//2,����ָ������Ƿ���Դ�������ַ
//int main()
//{
//	int* pa = &pa;
//	printf("%p\n", pa);
//	return 0;
//}
//3��ָ���ź�ͨ�������ò������ı�a��ֵ
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	*pa = 20;//*Ϊ�����ò�����������ͨ��a�ĵ�ַ�ҵ�a���Ӷ����Ըı�a��ֵ����ͨ��a�ĵ�ַ����ŵ㣩�ı�a
//	printf("%d\n", a);
//	printf("%p\n", pa);
//	return 0;
//}
//char main()
//{
//	char a[10] = { 'a','a','a','a' };
//	char* pa = &a;
//	printf("%s\n", a);
//	printf("%p\n", pa);
//	*pa =  'z','x','x','x' ;
//	printf("%s\n", a);
//	printf("%p\n", pa);
//	return 0;
//}
//int main()
//{
//	printf("%d\n",sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));//ָ��Ĵ�С����ͬ�ģ�32λ�豸һ����ַ��32������λ���ĸ��ֽڣ�64λ�豸��64������λ��8���ֽ�
//	return 0;
//}