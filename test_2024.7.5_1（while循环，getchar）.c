#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
//getchar����ֱ�Ӷ�ȡ�����ϵ��ַ������Ǽ����ϵ��ַ������뻺������getchar�ӻ�������ȡ�ַ���һ�ζ�ȡһ����
//1,while��getchar(getcharһ��ֻ�ܶ�ȡһ���ַ�)
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF:end of file
//	{
//		putchar(ch);//����Ctrl+cʱ��getchar�����һ��EOF����ѭ���������
//	}
//	return 0;
//}
//2,
//int main()
//{
//	char password[20] = { 0 };
//	printf("please enter the password:");
//	scanf("%s", password);//������������ǵ�ַ����������&ȡ��ַ��	
//	printf("please confirm your password(yes or no)");
//	getchar()��//clean up the buffer(����������
//	char ch = getchar();//getchar��������Ϊ���Σ���int��
//	if (ch == 'y')//ǰ���getchar��������������getchar��ȡ��yes�ĵ�һ���ַ�y�ŵ�ch���棬��chΪy���ж��ɹ������confirm success��
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
//	scanf("%s", password);//������������ǵ�ַ����������&ȡ��ַ��	
//	printf("please confirm your password(yes or no)");
//	int a = 0;
//	while ((a = getchar() != '\n'))//����whileѭ���ﵽ����������Ŀ�ģ�ѭ���ж��ַ�������a��ֱ������\n�����ѭ��������ch�е�getchar���ܶ�����Ҫ���ַ����ǻس���
//	{
//		;
//	}
//	int ch = getchar();//getchar��������Ϊ���Σ���int.
//	if (ch == 'y')//ǰ���getchar��������������getchar��ȡ��yes�ĵ�һ���ַ�y�ŵ�ch���棬��chΪy���ж��ɹ������confirm success��
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