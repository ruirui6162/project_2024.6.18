#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>//define，include是预处理指令 
//1,practice
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a > b ? a : b);
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//
//	else 
//	{
//		printf("%d\n", b);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a,& b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("%d\n", b);
//	}
//	return 0;
//}
//int max(int x, int y)//一般在写函数名如max时间不写全大写
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", max(a, b));
//	return 0;
//}
//int min(int x, int y)
//{
//	if (x < y)
//		return x;
//	else
//		return y;
//
//}
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", min(a, b));
//	return 0;
//}
//int main()
//{
//	int a = 0; char b[] = {'Y','E','S','\0'}; char c[] = {'N','O','\0'};
//	scanf("%d", &a);
//	printf("%s\n", a%5== 0 ? b : c);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	a % 5 == 0 ? printf("YES") : printf("NO");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 0 && a < 4)
//	{
//		printf("1");
//	}
//	else if (a >= 4 && a < 8)
//	{
//		printf("2");
//	}
//	else if (a >= 8 && a < 12)
//	{
//		printf("3");
//	}
//	else
//	    {printf("4"); }
//
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 2;
//	if (a == 1)
//		if (b == 2)//此if在前一个里面，只有满足前一个才能到这个
//			printf("ccc\n");
//		else//此else默认对应最近的
//     //代码分隔很重要
//			printf("ddd\n");
//	return 0;
// } 
//int main()
//{
//	int a = 0; int b = 2;
//	if (a == 1)
//	    {if (b == 2)
//			printf("ccc\n"); }//括号把if限定在里面，使其不能与后面的else匹配
//	else
//				printf("ddd\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	if (5 == a)//判断相等时把常亮写在左边不易出错
//	{
//		printf("aaa\n");
//	}
//	else
//	{
//		printf("ccc\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("this number is not an odd number ");
//	}
//	else
//	{
//		printf("this number is an odd number");
//	}
//	return 0;
//}

