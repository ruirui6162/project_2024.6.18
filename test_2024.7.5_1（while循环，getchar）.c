#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//getchar并非直接读取键盘上的字符，而是键盘上的字符先输入缓冲区，getchar从缓冲区读取字符，一次读取一个。
//1,while，getchar(getchar一次只能读取一个字符)
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF:end of file
//	{
//		putchar(ch);//当按Ctrl+c时，getchar会读到一个EOF，此循环会结束。
//	}
//	return 0;
//}
//2,
//int main()
//{
//	char password[20] = { 0 };
//	printf("please enter the password:");
//	scanf("%s", password);//数组名本身就是地址，不必再用&取地址。	
//	printf("please confirm your password(yes or no)");
//	getchar()；//clean up the buffer(缓冲区）。
//	char ch = getchar();//getchar返回类型为整形，用int。
//	if (ch == 'y')//前面的getchar清理缓冲区后后面的getchar读取到yes的第一个字符y放到ch里面，即ch为y，判定成功，输出confirm success。
//	{
//		printf("confirm success");
//	}
//	else
//	{
//		printf("confirm fail");
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	printf("please enter the password:");
//	scanf("%s", password);//数组名本身就是地址，不必再用&取地址。	
//	printf("please confirm your password(yes or no)");
//	int a = 0;
//	while ((a = getchar() != '\n'))//利用while循环达到清理缓冲区的目的，循环中读字符并放入a，直到读到\n后结束循环，后面ch中的getchar就能读到想要的字符而非回车。
//	{
//		;
//	}
//	int ch = getchar();//getchar返回类型为整形，用int.
//	if (ch == 'y')//前面的getchar清理缓冲区后后面的getchar读取到yes的第一个字符y放到ch里面，即ch为y，判定成功，输出confirm success。
//	{
//		printf("confirm success");
//	}
//	else
//	{
//		printf("confirm fail");
//	}
//	return 0;
//} 
//int main()
//{
//	char password[10] = { 0 };
//	printf("please enter the password:");
//	scanf("%s", password);
//	int a = 0;
//	while ((a = getchar() != '\n'));
//	{
//		;
//	}
//	printf("please confirm the password(yes or no)");
//	int b = getchar();
//	if (b == 'y')
//	{
//		printf("confirm success");
//	}
//	else
//	{
//		printf("confirm fail");
//	}
//	return 0;
// }