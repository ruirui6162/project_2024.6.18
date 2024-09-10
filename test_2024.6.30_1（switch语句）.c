#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	int* pa = &c;
//	*pa = a + b;
//	printf("%d\n", a);
//	return 0;
//}
//1，分支语句switch
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch后面必须是整形表达式。（字符也可，因为字符存储时是ascll码值。
//	{
//	case 1://case后面也必须是整形，且必须是常量值
//		printf("monday"); 
//		break;
//	case 2:
//		printf("tuesday"); 
//		break;
//	case 3:
//		printf("wednesday"); 
//		break;
//	case 4:
//		printf("thursday"); 
//		break;
//	case 5:
//		printf("friday"); 
//		break;
//	case 6:
//		printf("saturday"); 
//		break;
//	case 7:
//		printf("sunday"); 
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("week day");
//		break;
//	case 6:
//	case 7: 
//		printf("weekend");
//		break;
//	default:
//		printf("error");
//		break;//default无所谓先后，均可执行，尽量放后面
//	}
//	return 0;
//}
//int main()
//{
//	int password = 0;
//	printf("please enter a five - digit consecutive password\n");
//	scanf("%d", &password);
//	switch (password)
//	{
//	case 12345:
//	case 23456:
//	case 34567:
//	case 45678:
//		printf("you are right");
//		break;
//	case 56789:
//		printf("you are wrong");
//		break;
//	}
//	return 0;
//}