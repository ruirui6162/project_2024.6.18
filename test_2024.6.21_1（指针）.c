#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1，初识指针
//int main()
//{
//	int a =10;
//	printf("%p\n", a);//%p专门用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在c语言中pa是指针变量
//	//*说明pa是指针变量
//	//int说明pa指向的对象是int类型
//	char b = 'c';
//	char* pc = &b;
//	printf("%p\n", b);
//	return 0;
//
//}
//2,尝试指针变量是否可以存放自身地址
//int main()
//{
//	int* pa = &pa;
//	printf("%p\n", pa);
//	return 0;
//}
//3，指针存放后通过解引用操作符改变a的值
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	*pa = 20;//*为解引用操作符，可以通过a的地址找到a，从而可以改变a的值，即通过a的地址（存放点）改变a
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
//	printf("%d\n", sizeof(double*));//指针的大小是相同的，32位设备一个地址是32个比特位即四个字节，64位设备是64个比特位即8个字节
//	return 0;
//}