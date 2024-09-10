#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//1，提取字符
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
// 2，for循环
// for循环:for(语句一;语句二;语句三)
//             循环语句;
// 先执行语句一，后语句二，后循环语句，后语句三  
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
//			break;//break执行循环即终止。
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
//			continue;//continue跳过此次循环后面的部分，后执行a++。
//		}
//
//		printf("%d ", a);
//	}
//	return 0;
//}
//3,for循环避免在内部修改循环变量，避免for循环失去控制，如下面循环，内部重定义a，后a++，导致输出的a一直是6。
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
//	for (;;)//判断部分省略则恒为真。    
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
//		for (b = 0; b < 10; b++)//每次进来时b会重新赋值为0，即此循环能执行一百次。 
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
//		for (; b < 10; b++)//相比上面一个，此处b不会销毁，即只能打印十次，后不会进入b的循环，a结束后结束。
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